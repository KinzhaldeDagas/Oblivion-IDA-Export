void __cdecl sub_A26610()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fMediumWeaponSpeedMax_Audio);
  if ( off_B162E0 )
  {
    if ( *off_B162E0 == 0x53 )
      FormHeapFree((unsigned int)off_B162E0);
  }
}
