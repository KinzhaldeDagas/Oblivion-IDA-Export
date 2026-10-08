void __cdecl sub_A1BF10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingGrassWindMagnitudeMax); /*0xa1bf1a*/
  if ( off_B09B34 ) /*0xa1bf26*/
  {
    if ( *off_B09B34 == 0x53 ) /*0xa1bf2b*/
      FormHeapFree((unsigned int)off_B09B34); /*0xa1bf2e*/
  }
}
