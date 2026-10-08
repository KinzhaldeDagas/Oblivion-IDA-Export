void __cdecl sub_A1B930()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingTexturePctThreshold); /*0xa1b93a*/
  if ( off_B08B70 ) /*0xa1b946*/
  {
    if ( *off_B08B70 == 0x53 ) /*0xa1b94b*/
      FormHeapFree((unsigned int)off_B08B70); /*0xa1b94e*/
  }
}
