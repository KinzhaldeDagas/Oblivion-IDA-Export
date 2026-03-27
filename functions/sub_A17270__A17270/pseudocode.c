void __cdecl sub_A17270()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B0312C);
  if ( off_B03130 )
  {
    if ( *off_B03130 == 0x53 )
      FormHeapFree((unsigned int)off_B03130);
  }
}
