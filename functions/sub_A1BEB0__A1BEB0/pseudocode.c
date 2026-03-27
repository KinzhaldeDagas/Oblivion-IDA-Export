void __cdecl sub_A1BEB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingMinGrassSize);
  if ( off_B09B24 )
  {
    if ( *off_B09B24 == 0x53 )
      FormHeapFree((unsigned int)off_B09B24);
  }
}
