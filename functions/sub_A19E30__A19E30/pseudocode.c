void __cdecl sub_A19E30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bDynamicWindowsReflection);
  if ( off_B06F88 )
  {
    if ( *off_B06F88 == 0x53 )
      FormHeapFree((unsigned int)off_B06F88);
  }
}
