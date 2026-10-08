void __cdecl fLODQuadMinLoadDistance_UnregisterSetting()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B09AF8); /*0xa1bdca*/
  if ( off_B09AFC ) /*0xa1bdd6*/
  {
    if ( *off_B09AFC == 0x53 ) /*0xa1bddb*/
      FormHeapFree((unsigned int)off_B09AFC); /*0xa1bdde*/
  }
}
