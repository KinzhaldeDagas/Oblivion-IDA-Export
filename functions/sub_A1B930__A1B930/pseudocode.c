void __cdecl sub_A1B930()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingTexturePctThreshold);
  if ( off_B08B70 )
  {
    if ( *off_B08B70 == 0x53 )
      FormHeapFree((unsigned int)off_B08B70);
  }
}
