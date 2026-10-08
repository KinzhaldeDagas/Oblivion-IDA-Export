void __cdecl sub_A18CF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CA4); /*0xa18cfa*/
  if ( off_B06CA8 ) /*0xa18d06*/
  {
    if ( *off_B06CA8 == 0x53 ) /*0xa18d0b*/
      FormHeapFree((unsigned int)off_B06CA8); /*0xa18d0e*/
  }
}
