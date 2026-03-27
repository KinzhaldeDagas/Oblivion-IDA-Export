void __cdecl sub_A16DF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DB8);
  if ( off_B02DBC )
  {
    if ( *off_B02DBC == 0x53 )
      FormHeapFree((unsigned int)off_B02DBC);
  }
}
