void __cdecl sub_A17B00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)sArchiveList_Archive); /*0xa17b0a*/
  if ( off_B0445C ) /*0xa17b16*/
  {
    if ( *off_B0445C == 0x53 ) /*0xa17b1b*/
      FormHeapFree((unsigned int)off_B0445C); /*0xa17b1e*/
  }
}
