void __cdecl sub_A19860()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E8C);
  if ( off_B06E90 )
  {
    if ( *off_B06E90 == 0x53 )
      FormHeapFree((unsigned int)off_B06E90);
  }
}
