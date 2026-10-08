void __cdecl sub_A18270()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B055A4); /*0xa1827a*/
  if ( off_B055A8 ) /*0xa18286*/
  {
    if ( *off_B055A8 == 0x53 ) /*0xa1828b*/
      FormHeapFree((unsigned int)off_B055A8); /*0xa1828e*/
  }
}
