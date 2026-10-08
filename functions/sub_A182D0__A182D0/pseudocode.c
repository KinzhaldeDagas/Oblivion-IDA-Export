void __cdecl sub_A182D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B055B4); /*0xa182da*/
  if ( off_B055B8 ) /*0xa182e6*/
  {
    if ( *off_B055B8 == 0x53 ) /*0xa182eb*/
      FormHeapFree((unsigned int)off_B055B8); /*0xa182ee*/
  }
}
