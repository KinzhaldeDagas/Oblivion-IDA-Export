void __cdecl sub_A17180()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B030B4); /*0xa1718a*/
  if ( off_B030B8 ) /*0xa17196*/
  {
    if ( *off_B030B8 == 0x53 ) /*0xa1719b*/
      FormHeapFree((unsigned int)off_B030B8); /*0xa1719e*/
  }
}
