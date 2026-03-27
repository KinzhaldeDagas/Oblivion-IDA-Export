void __cdecl sub_A16E20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DC0);
  if ( off_B02DC4 )
  {
    if ( *off_B02DC4 == 0x53 )
      FormHeapFree((unsigned int)off_B02DC4);
  }
}
