// Reloads Oblivion Lighting30Shader by invoking the shared vertex/pixel loader and then rebuilding/presetting the SM3 stage configuration.
// DX11 writer audit 2026-10-01: virtual+8C reloads programs via+A8 and TAIL-JUMPS to85E660 to rewrite cached pass state. Entry is thiscall/zero stack args and complete call returns RET0 through that tail; observer must span the tail rather than just the entry prefix.
// DX11 comparative writer audit 2026-10-01: Oblivion7FAAB0 matches the LoadShaders-then-PresetStages sequence here, but uses virtual+A8 followed by a tail JMP85E660 (RET0), so whole-call observation must span that tail. Oblivion7FB250 matches the shared program/pass cache reset family of Fallout828D5660, with different cache sizes, map-entry ownership and native offsets. Both examined versions use plain, non-atomic pooled-pass reference decrements, unlike program NiRef counters. The comparison identifies writer families; it does not establish thread exclusion.
void __thiscall Lighting30Shader__ReloadShaders(void *this)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xA8))(this); /*0x7faabb*/
  Lighting30Shader_InitializePassPool(); /*0x7faac0*/
}
