void __cdecl sub_A1BEE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingGrassWindMagnitudeMin);
  if ( off_B09B2C )
  {
    if ( *off_B09B2C == 0x53 )
      FormHeapFree((unsigned int)off_B09B2C);
  }
}
