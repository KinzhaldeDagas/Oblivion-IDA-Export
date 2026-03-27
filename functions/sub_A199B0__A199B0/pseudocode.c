void __cdecl sub_A199B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EC4);
  if ( off_B06EC8 )
  {
    if ( *off_B06EC8 == 0x53 )
      FormHeapFree((unsigned int)off_B06EC8);
  }
}
