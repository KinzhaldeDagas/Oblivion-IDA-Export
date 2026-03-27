void __cdecl sub_A23750()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B12620);
  if ( off_B12624 )
  {
    if ( *off_B12624 == 0x53 )
      FormHeapFree((unsigned int)off_B12624);
  }
}
