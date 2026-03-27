void __cdecl sub_A1A8B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingLODFadeOutMultActors);
  if ( off_B07630 )
  {
    if ( *off_B07630 == 0x53 )
      FormHeapFree((unsigned int)off_B07630);
  }
}
