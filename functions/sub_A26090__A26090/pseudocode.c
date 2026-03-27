void __cdecl sub_A26090()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B16198);
  if ( off_B1619C )
  {
    if ( *off_B1619C == 0x53 )
      FormHeapFree((unsigned int)off_B1619C);
  }
}
