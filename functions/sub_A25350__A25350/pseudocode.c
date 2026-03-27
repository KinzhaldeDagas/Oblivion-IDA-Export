void __cdecl sub_A25350()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B148DC);
  if ( off_B148E0 )
  {
    if ( *off_B148E0 == 0x53 )
      FormHeapFree((unsigned int)off_B148E0);
  }
}
