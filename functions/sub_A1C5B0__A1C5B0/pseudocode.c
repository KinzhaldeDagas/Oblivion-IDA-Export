void __cdecl sub_A1C5B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iSimTypeHavok);
  if ( off_B1163C[0] )
  {
    if ( *off_B1163C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B1163C[0]);
  }
}
