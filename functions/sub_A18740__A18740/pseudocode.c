void __cdecl sub_A18740()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B068D8); /*0xa1874a*/
  if ( off_B068DC ) /*0xa18756*/
  {
    if ( *off_B068DC == 0x53 ) /*0xa1875b*/
      FormHeapFree((unsigned int)off_B068DC); /*0xa1875e*/
  }
}
