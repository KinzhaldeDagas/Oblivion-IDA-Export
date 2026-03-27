void __cdecl sub_A25B60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14F08);
  if ( off_B14F0C )
  {
    if ( *off_B14F0C == 0x53 )
      FormHeapFree((unsigned int)off_B14F0C);
  }
}
