void __cdecl sub_A265E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fLargeWeaponWeightMin_Audio);
  if ( off_B162D8 )
  {
    if ( *off_B162D8 == 0x53 )
      FormHeapFree((unsigned int)off_B162D8);
  }
}
