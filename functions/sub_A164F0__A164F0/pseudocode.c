void __cdecl sub_A164F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02C4C);
  if ( off_B02C50 )
  {
    if ( *off_B02C50 == 0x53 )
      FormHeapFree((unsigned int)off_B02C50);
  }
}
