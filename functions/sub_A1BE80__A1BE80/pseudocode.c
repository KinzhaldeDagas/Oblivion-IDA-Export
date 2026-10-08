void __cdecl sub_A1BE80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingGrassEndDistance); /*0xa1be8a*/
  if ( off_B09B1C ) /*0xa1be96*/
  {
    if ( *off_B09B1C == 0x53 ) /*0xa1be9b*/
      FormHeapFree((unsigned int)off_B09B1C); /*0xa1be9e*/
  }
}
