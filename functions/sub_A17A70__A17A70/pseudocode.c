void __cdecl sub_A17A70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iRetainFilenameStringTable_Archive); /*0xa17a7a*/
  if ( off_B04444 ) /*0xa17a86*/
  {
    if ( *off_B04444 == 0x53 ) /*0xa17a8b*/
      FormHeapFree((unsigned int)off_B04444); /*0xa17a8e*/
  }
}
