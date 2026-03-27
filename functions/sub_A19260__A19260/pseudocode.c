void __cdecl sub_A19260()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D8C);
  if ( off_B06D90 )
  {
    if ( *off_B06D90 == 0x53 )
      FormHeapFree((unsigned int)off_B06D90);
  }
}
