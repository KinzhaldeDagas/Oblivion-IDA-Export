void __cdecl sub_A1BE50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingGrassStartFadeDistance);
  if ( off_B09B14 )
  {
    if ( *off_B09B14 == 0x53 )
      FormHeapFree((unsigned int)off_B09B14);
  }
}
