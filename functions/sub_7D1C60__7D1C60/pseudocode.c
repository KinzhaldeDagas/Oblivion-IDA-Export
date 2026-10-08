// Clears texture stages/state for every one of Oblivion's 419 cached ShadowLightShader passes by dispatching the per-pass clear virtual.
void __thiscall ShadowLightShader__ClearPassStages(void *this)
{
  NiD3DPass **v2; // esi

  v2 = &g_ShadowLightPassBySelector; /*0x7d1c64*/
  do /*0x7d1c88*/
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x94))(this, *v2++); /*0x7d1c7d*/
  while ( (int)v2 < (int)&unk_B45C2C ); /*0x7d1c88*/
}
