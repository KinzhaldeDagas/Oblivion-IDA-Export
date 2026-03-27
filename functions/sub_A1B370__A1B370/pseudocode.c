void __cdecl sub_A1B370()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B080DC);
  if ( off_B080E0[0] )
  {
    if ( *off_B080E0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B080E0[0]);
  }
}
