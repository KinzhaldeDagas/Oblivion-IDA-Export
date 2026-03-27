void __cdecl sub_A248E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B13618);
  if ( off_B1361C[0] )
  {
    if ( *off_B1361C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B1361C[0]);
  }
}
