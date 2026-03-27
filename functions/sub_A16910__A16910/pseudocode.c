void __cdecl sub_A16910()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B02CE8);
  if ( off_B02CEC )
  {
    if ( *off_B02CEC == 0x53 )
      FormHeapFree((unsigned int)off_B02CEC);
  }
}
