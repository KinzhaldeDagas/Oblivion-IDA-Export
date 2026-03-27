void __cdecl sub_A19620()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E2C);
  if ( off_B06E30 )
  {
    if ( *off_B06E30 == 0x53 )
      FormHeapFree((unsigned int)off_B06E30);
  }
}
