void __cdecl sub_A25B30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14F00);
  if ( off_B14F04 )
  {
    if ( *off_B14F04 == 0x53 )
      FormHeapFree((unsigned int)off_B14F04);
  }
}
