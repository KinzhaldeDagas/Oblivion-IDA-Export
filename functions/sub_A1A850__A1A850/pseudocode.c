void __cdecl sub_A1A850()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingLODFadeOutMultObjects);
  if ( off_B07620 )
  {
    if ( *off_B07620 == 0x53 )
      FormHeapFree((unsigned int)off_B07620);
  }
}
