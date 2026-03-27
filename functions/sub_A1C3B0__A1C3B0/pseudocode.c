void __cdecl sub_A1C3B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B10D3C);
  if ( off_B10D40[0] )
  {
    if ( *off_B10D40[0] == 0x53 )
      FormHeapFree((unsigned int)off_B10D40[0]);
  }
}
