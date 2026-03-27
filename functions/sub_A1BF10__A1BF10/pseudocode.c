void __cdecl sub_A1BF10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingGrassWindMagnitudeMax);
  if ( off_B09B34 )
  {
    if ( *off_B09B34 == 0x53 )
      FormHeapFree((unsigned int)off_B09B34);
  }
}
