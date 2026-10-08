void __cdecl sub_A17AA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iRetainFilenameOffsetTable_Archive); /*0xa17aaa*/
  if ( off_B0444C[0] ) /*0xa17ab6*/
  {
    if ( *off_B0444C[0] == 0x53 ) /*0xa17abb*/
      FormHeapFree((unsigned int)off_B0444C[0]); /*0xa17abe*/
  }
}
