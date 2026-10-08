void __cdecl sub_A1BEE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingGrassWindMagnitudeMin); /*0xa1beea*/
  if ( off_B09B2C ) /*0xa1bef6*/
  {
    if ( *off_B09B2C == 0x53 ) /*0xa1befb*/
      FormHeapFree((unsigned int)off_B09B2C); /*0xa1befe*/
  }
}
