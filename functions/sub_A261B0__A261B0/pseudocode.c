void __cdecl sub_A261B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161C8);
  if ( off_B161CC )
  {
    if ( *off_B161CC == 0x53 )
      FormHeapFree((unsigned int)off_B161CC);
  }
}
