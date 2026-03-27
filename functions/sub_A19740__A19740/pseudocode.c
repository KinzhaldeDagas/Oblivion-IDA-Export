void __cdecl sub_A19740()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E5C);
  if ( off_B06E60 )
  {
    if ( *off_B06E60 == 0x53 )
      FormHeapFree((unsigned int)off_B06E60);
  }
}
