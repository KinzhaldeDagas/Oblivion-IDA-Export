void __cdecl sub_A25E40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B15800);
  if ( off_B15804[0] )
  {
    if ( *off_B15804[0] == 0x53 )
      FormHeapFree((unsigned int)off_B15804[0]);
  }
}
