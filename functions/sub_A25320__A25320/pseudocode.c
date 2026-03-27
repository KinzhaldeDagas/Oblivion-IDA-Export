void __cdecl sub_A25320()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B148D4);
  if ( off_B148D8 )
  {
    if ( *off_B148D8 == 0x53 )
      FormHeapFree((unsigned int)off_B148D8);
  }
}
