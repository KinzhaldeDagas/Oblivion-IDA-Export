void __cdecl bUseLODLandData_UnregisterSetting()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06AB8); /*0xa188fa*/
  if ( off_B06ABC[0] ) /*0xa18906*/
  {
    if ( *off_B06ABC[0] == 0x53 ) /*0xa1890b*/
      FormHeapFree((unsigned int)off_B06ABC[0]); /*0xa1890e*/
  }
}
