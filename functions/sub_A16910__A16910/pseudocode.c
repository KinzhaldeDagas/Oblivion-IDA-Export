void __cdecl sub_A16910()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B02CE8); /*0xa1691a*/
  if ( off_B02CEC ) /*0xa16926*/
  {
    if ( *off_B02CEC == 0x53 ) /*0xa1692b*/
      FormHeapFree((unsigned int)off_B02CEC); /*0xa1692e*/
  }
}
