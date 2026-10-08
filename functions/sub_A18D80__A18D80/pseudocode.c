void __cdecl sub_A18D80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CBC); /*0xa18d8a*/
  if ( off_B06CC0 ) /*0xa18d96*/
  {
    if ( *off_B06CC0 == 0x53 ) /*0xa18d9b*/
      FormHeapFree((unsigned int)off_B06CC0); /*0xa18d9e*/
  }
}
