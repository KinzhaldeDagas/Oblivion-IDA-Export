void __cdecl sub_A25670()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CB4);
  if ( off_B14CB8 )
  {
    if ( *off_B14CB8 == 0x53 )
      FormHeapFree((unsigned int)off_B14CB8);
  }
}
