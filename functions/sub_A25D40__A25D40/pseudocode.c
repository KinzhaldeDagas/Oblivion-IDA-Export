void __cdecl sub_A25D40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14F58);
  if ( off_B14F5C[0] )
  {
    if ( *off_B14F5C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B14F5C[0]);
  }
}
