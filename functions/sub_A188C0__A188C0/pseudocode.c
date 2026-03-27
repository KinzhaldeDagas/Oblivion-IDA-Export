void __cdecl sub_A188C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06AB0);
  if ( off_B06AB4 )
  {
    if ( *off_B06AB4 == 0x53 )
      FormHeapFree((unsigned int)off_B06AB4);
  }
}
