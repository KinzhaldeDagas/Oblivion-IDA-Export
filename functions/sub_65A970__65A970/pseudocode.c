// Reference animation sound-note playback. Resolves a Sound: note token through SoundMap_ResolveAnimSoundNote, plays it, positions it on the reference when requested, and applies volume/loop flags.
void __thiscall TESObjectREFR_PlayResolvedAnimSoundNote(void *this, _BYTE *a2, char a3, int a4, char a5)
{
  int *sound; // edi
  int v7; // eax
  int *v8; // esi
  float *v9; // eax

  sound = (int *)MEMORY[0xB33398]->sound; /*0x65a97b*/
  if ( sound ) /*0x65a984*/
  {
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this) ) /*0x65a993*/
    {
      v7 = SoundMap_ResolveAnimSoundNote(a2); /*0x65a9a8*/
      if ( v7 ) /*0x65a9af*/
      {
        v8 = OSGLobals_PlaySound(sound, *(void **)(v7 + 0xC), a4, a5); /*0x65a9cb*/
        if ( v8 ) /*0x65a9cf*/
        {
          if ( (a4 & 2) != 0 ) /*0x65a9d4*/
          {
            v9 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this); /*0x65a9e1*/
            sub_6B7360(v8, *v9, v9[1], v9[2]); /*0x65aa13*/
            sub_6AC3E0((_DWORD **)sound, *v8, (LONG)this); /*0x65aa1e*/
          }
          sub_6B7280(v8, 1.0); /*0x65aa2b*/
          sub_6B7190(v8, a3); /*0x65aa37*/
        }
      }
    }
  }
}
