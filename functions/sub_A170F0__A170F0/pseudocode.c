void __cdecl sub_A170F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B0309C);
  if ( off_B030A0[0] )
  {
    if ( *off_B030A0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B030A0[0]);
  }
}
