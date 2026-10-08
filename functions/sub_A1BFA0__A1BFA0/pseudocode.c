void __cdecl bForceHideLODLand_UnregisterSetting()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B09B48); /*0xa1bfaa*/
  if ( off_B09B4C[0] ) /*0xa1bfb6*/
  {
    if ( *off_B09B4C[0] == 0x53 ) /*0xa1bfbb*/
      FormHeapFree((unsigned int)off_B09B4C[0]); /*0xa1bfbe*/
  }
}
