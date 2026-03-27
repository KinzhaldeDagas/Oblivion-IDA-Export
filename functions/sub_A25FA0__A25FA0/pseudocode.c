void __cdecl sub_A25FA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B15A68);
  if ( off_B15A6C[0] )
  {
    if ( *off_B15A6C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B15A6C[0]);
  }
}
