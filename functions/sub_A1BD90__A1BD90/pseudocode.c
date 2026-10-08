void __cdecl bDisplayLODTrees_UnregisterSetting()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B09AF0); /*0xa1bd9a*/
  if ( off_B09AF4 ) /*0xa1bda6*/
  {
    if ( *off_B09AF4 == 0x53 ) /*0xa1bdab*/
      FormHeapFree((unsigned int)off_B09AF4); /*0xa1bdae*/
  }
}
