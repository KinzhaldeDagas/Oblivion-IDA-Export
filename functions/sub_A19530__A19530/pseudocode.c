void __cdecl sub_A19530()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E04);
  if ( off_B06E08 )
  {
    if ( *off_B06E08 == 0x53 )
      FormHeapFree((unsigned int)off_B06E08);
  }
}
