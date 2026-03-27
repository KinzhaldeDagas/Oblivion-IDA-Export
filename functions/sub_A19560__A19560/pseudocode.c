void __cdecl sub_A19560()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E0C);
  if ( off_B06E10 )
  {
    if ( *off_B06E10 == 0x53 )
      FormHeapFree((unsigned int)off_B06E10);
  }
}
