void __cdecl sub_A1BE50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingGrassStartFadeDistance); /*0xa1be5a*/
  if ( off_B09B14 ) /*0xa1be66*/
  {
    if ( *off_B09B14 == 0x53 ) /*0xa1be6b*/
      FormHeapFree((unsigned int)off_B09B14); /*0xa1be6e*/
  }
}
