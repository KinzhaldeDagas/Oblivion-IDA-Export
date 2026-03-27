void __cdecl sub_A26640()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fLargeWeaponSpeedMax_Audio);
  if ( off_B162E8 )
  {
    if ( *off_B162E8 == 0x53 )
      FormHeapFree((unsigned int)off_B162E8);
  }
}
