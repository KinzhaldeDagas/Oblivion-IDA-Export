void __cdecl sub_A173F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B0316C); /*0xa173fa*/
  if ( off_B03170 ) /*0xa17406*/
  {
    if ( *off_B03170 == 0x53 ) /*0xa1740b*/
      FormHeapFree((unsigned int)off_B03170); /*0xa1740e*/
  }
}
