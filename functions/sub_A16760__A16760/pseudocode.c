void __cdecl sub_A16760()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CA0); /*0xa1676a*/
  if ( off_B02CA4 ) /*0xa16776*/
  {
    if ( *off_B02CA4 == 0x53 ) /*0xa1677b*/
      FormHeapFree((unsigned int)off_B02CA4); /*0xa1677e*/
  }
}
