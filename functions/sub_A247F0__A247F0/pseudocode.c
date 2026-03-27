void __cdecl sub_A247F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135F0);
  if ( off_B135F4 )
  {
    if ( *off_B135F4 == 0x53 )
      FormHeapFree((unsigned int)off_B135F4);
  }
}
