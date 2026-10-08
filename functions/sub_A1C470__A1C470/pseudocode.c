void __cdecl sub_A1C470()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B10D78); /*0xa1c47a*/
  if ( off_B10D7C[0] ) /*0xa1c486*/
  {
    if ( *off_B10D7C[0] == 0x53 ) /*0xa1c48b*/
      FormHeapFree((unsigned int)off_B10D7C[0]); /*0xa1c48e*/
  }
}
