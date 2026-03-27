void __cdecl sub_A233A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B120CC);
  if ( off_B120D0 )
  {
    if ( *off_B120D0 == 0x53 )
      FormHeapFree((unsigned int)off_B120D0);
  }
}
