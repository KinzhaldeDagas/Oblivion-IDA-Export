void __cdecl sub_A19980()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EBC); /*0xa1998a*/
  if ( off_B06EC0 ) /*0xa19996*/
  {
    if ( *off_B06EC0 == 0x53 ) /*0xa1999b*/
      FormHeapFree((unsigned int)off_B06EC0); /*0xa1999e*/
  }
}
