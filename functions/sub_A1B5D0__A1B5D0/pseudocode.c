void __cdecl sub_A1B5D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08190);
  if ( off_B08194[0] )
  {
    if ( *off_B08194[0] == 0x53 )
      FormHeapFree((unsigned int)off_B08194[0]);
  }
}
