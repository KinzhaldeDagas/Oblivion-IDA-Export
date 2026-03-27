void __cdecl sub_A26000()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&MusicEnabled);
  if ( off_B16184 )
  {
    if ( *off_B16184 == 0x53 )
      FormHeapFree((unsigned int)off_B16184);
  }
}
