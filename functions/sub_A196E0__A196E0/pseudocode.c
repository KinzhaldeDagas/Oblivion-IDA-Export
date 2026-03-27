void __cdecl sub_A196E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E4C);
  if ( off_B06E50 )
  {
    if ( *off_B06E50 == 0x53 )
      FormHeapFree((unsigned int)off_B06E50);
  }
}
