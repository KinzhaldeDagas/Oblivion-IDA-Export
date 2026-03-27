void __cdecl sub_A18580()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06530);
  if ( off_B06534 )
  {
    if ( *off_B06534 == 0x53 )
      FormHeapFree((unsigned int)off_B06534);
  }
}
