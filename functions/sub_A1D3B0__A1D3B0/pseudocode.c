void __cdecl sub_A1D3B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B11DE4);
  if ( off_B11DE8[0] )
  {
    if ( *off_B11DE8[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11DE8[0]);
  }
}
