void __cdecl sub_A19EC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBlendLandscapeValue);
  if ( off_B06FA0 )
  {
    if ( *off_B06FA0 == 0x53 )
      FormHeapFree((unsigned int)off_B06FA0);
  }
}
