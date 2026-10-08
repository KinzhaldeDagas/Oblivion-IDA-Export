void __cdecl sub_A1C5B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iSimTypeHavok); /*0xa1c5ba*/
  if ( off_B1163C[0] ) /*0xa1c5c6*/
  {
    if ( *off_B1163C[0] == 0x53 ) /*0xa1c5cb*/
      FormHeapFree((unsigned int)off_B1163C[0]); /*0xa1c5ce*/
  }
}
