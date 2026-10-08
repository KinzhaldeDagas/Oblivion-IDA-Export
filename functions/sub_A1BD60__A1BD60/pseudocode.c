void __cdecl bDisplayLODBuildings_UnregisterSetting()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B09AE8); /*0xa1bd6a*/
  if ( off_B09AEC ) /*0xa1bd76*/
  {
    if ( *off_B09AEC == 0x53 ) /*0xa1bd7b*/
      FormHeapFree((unsigned int)off_B09AEC); /*0xa1bd7e*/
  }
}
