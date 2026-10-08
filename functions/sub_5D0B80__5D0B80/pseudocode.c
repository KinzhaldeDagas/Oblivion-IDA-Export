void sub_5D0B80()
{
  int v0; // eax
  UInt32 *v1; // eax
  int *v2; // esi

  v0 = SoundMap_ResolveAnimSoundNote("UIArmorWeaponRepair"); /*0x5d0b8b*/
  if ( v0 ) /*0x5d0b92*/
  {
    v1 = OSGLobals_PlaySound((int *)MEMORY[0xB33398]->sound, *(void **)(v0 + 0xC), 0x21, 0); /*0x5d0ba6*/
    v2 = (int *)v1; /*0x5d0bab*/
    if ( v1 ) /*0x5d0baf*/
    {
      if ( !SoundHandle::IsPlaying(v1) ) /*0x5d0bb3*/
        sub_6B7190(v2, 0); /*0x5d0bc0*/
      sub_6B73E0(v2); /*0x5d0bc7*/
      FormHeapFree((unsigned int)v2); /*0x5d0bcd*/
    }
  }
}
