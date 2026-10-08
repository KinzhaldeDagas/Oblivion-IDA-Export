void __cdecl sub_A1BC30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&preventHavokAddClutter); /*0xa1bc3a*/
  if ( off_B0986C ) /*0xa1bc46*/
  {
    if ( *off_B0986C == 0x53 ) /*0xa1bc4b*/
      FormHeapFree((unsigned int)off_B0986C); /*0xa1bc4e*/
  }
}
