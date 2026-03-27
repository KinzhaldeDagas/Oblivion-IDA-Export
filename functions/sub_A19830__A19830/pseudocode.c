void __cdecl sub_A19830()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E84);
  if ( off_B06E88 )
  {
    if ( *off_B06E88 == 0x53 )
      FormHeapFree((unsigned int)off_B06E88);
  }
}
