void __cdecl sub_A17210()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B0311C); /*0xa1721a*/
  if ( off_B03120 ) /*0xa17226*/
  {
    if ( *off_B03120 == 0x53 ) /*0xa1722b*/
      FormHeapFree((unsigned int)off_B03120); /*0xa1722e*/
  }
}
