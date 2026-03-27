void __cdecl sub_A16E80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DD0);
  if ( off_B02DD4[0] )
  {
    if ( *off_B02DD4[0] == 0x53 )
      FormHeapFree((unsigned int)off_B02DD4[0]);
  }
}
