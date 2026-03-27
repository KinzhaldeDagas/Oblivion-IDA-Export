void __cdecl sub_A16CA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02D80);
  if ( off_B02D84 )
  {
    if ( *off_B02D84 == 0x53 )
      FormHeapFree((unsigned int)off_B02D84);
  }
}
