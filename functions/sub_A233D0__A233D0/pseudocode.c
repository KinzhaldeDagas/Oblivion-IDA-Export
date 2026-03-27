void __cdecl sub_A233D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B120D4);
  if ( off_B120D8 )
  {
    if ( *off_B120D8 == 0x53 )
      FormHeapFree((unsigned int)off_B120D8);
  }
}
