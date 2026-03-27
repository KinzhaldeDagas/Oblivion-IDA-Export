void __cdecl sub_A25950()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14EB0);
  if ( off_B14EB4[0] )
  {
    if ( *off_B14EB4[0] == 0x53 )
      FormHeapFree((unsigned int)off_B14EB4[0]);
  }
}
