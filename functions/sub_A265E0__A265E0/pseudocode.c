void __cdecl sub_A265E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fLargeWeaponWeightMin_Audio); /*0xa265ea*/
  if ( off_B162D8 ) /*0xa265f6*/
  {
    if ( *off_B162D8 == 0x53 ) /*0xa265fb*/
      FormHeapFree((unsigned int)off_B162D8); /*0xa265fe*/
  }
}
