void __cdecl sub_A19AA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EEC);
  if ( off_B06EF0 )
  {
    if ( *off_B06EF0 == 0x53 )
      FormHeapFree((unsigned int)off_B06EF0);
  }
}
