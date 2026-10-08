void __cdecl sub_A18C60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06C8C); /*0xa18c6a*/
  if ( off_B06C90 ) /*0xa18c76*/
  {
    if ( *off_B06C90 == 0x53 ) /*0xa18c7b*/
      FormHeapFree((unsigned int)off_B06C90); /*0xa18c7e*/
  }
}
