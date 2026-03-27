void __cdecl sub_A1A880()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingLODFadeOutMultItems);
  if ( off_B07628 )
  {
    if ( *off_B07628 == 0x53 )
      FormHeapFree((unsigned int)off_B07628);
  }
}
