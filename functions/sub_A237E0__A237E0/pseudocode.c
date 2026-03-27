void __cdecl sub_A237E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B12638);
  if ( off_B1263C[0] )
  {
    if ( *off_B1263C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B1263C[0]);
  }
}
