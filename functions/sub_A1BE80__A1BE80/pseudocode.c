void __cdecl sub_A1BE80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingGrassEndDistance);
  if ( off_B09B1C )
  {
    if ( *off_B09B1C == 0x53 )
      FormHeapFree((unsigned int)off_B09B1C);
  }
}
