void __cdecl sub_A16AF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B02D38);
  if ( off_B02D3C[0] )
  {
    if ( *off_B02D3C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B02D3C[0]);
  }
}
