void __cdecl sub_A1BEB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingMinGrassSize); /*0xa1beba*/
  if ( off_B09B24 ) /*0xa1bec6*/
  {
    if ( *off_B09B24 == 0x53 ) /*0xa1becb*/
      FormHeapFree((unsigned int)off_B09B24); /*0xa1bece*/
  }
}
