void __cdecl sub_A26610()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fMediumWeaponSpeedMax_Audio); /*0xa2661a*/
  if ( off_B162E0 ) /*0xa26626*/
  {
    if ( *off_B162E0 == 0x53 ) /*0xa2662b*/
      FormHeapFree((unsigned int)off_B162E0); /*0xa2662e*/
  }
}
