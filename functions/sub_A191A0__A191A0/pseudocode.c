void __cdecl sub_A191A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D6C);
  if ( off_B06D70 )
  {
    if ( *off_B06D70 == 0x53 )
      FormHeapFree((unsigned int)off_B06D70);
  }
}
