void __cdecl sub_A244C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13228);
  if ( off_B1322C )
  {
    if ( *off_B1322C == 0x53 )
      FormHeapFree((unsigned int)off_B1322C);
  }
}
