void __stdcall sub_5AFD50(char *a1)
{
  int *sound; // ecx
  UInt32 *v2; // eax
  int *v3; // esi

  sound = (int *)MEMORY[0xB33398]->sound; /*0x5afd55*/
  if ( sound ) /*0x5afd5a*/
  {
    v2 = PlaySound___(sound, a1, 0x121, 1); /*0x5afd69*/
    v3 = (int *)v2; /*0x5afd6e*/
    if ( v2 ) /*0x5afd72*/
    {
      if ( !SoundHandle::IsPlaying(v2) ) /*0x5afd76*/
      {
        sub_6B7190(v3, 0); /*0x5afd83*/
        sub_6B73E0(v3); /*0x5afd8a*/
        FormHeapFree((unsigned int)v3); /*0x5afd90*/
      }
    }
  }
}
