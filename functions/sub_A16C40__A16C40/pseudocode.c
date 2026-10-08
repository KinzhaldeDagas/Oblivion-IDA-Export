void __cdecl bDisplayLODLand_UnregisterSetting()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B02D70); /*0xa16c4a*/
  if ( off_B02D74 ) /*0xa16c56*/
  {
    if ( *off_B02D74 == 0x53 ) /*0xa16c5b*/
      FormHeapFree((unsigned int)off_B02D74); /*0xa16c5e*/
  }
}
