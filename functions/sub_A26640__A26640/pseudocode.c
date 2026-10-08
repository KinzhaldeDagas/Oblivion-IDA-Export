void __cdecl sub_A26640()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fLargeWeaponSpeedMax_Audio); /*0xa2664a*/
  if ( off_B162E8 ) /*0xa26656*/
  {
    if ( *off_B162E8 == 0x53 ) /*0xa2665b*/
      FormHeapFree((unsigned int)off_B162E8); /*0xa2665e*/
  }
}
