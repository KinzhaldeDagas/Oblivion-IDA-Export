void __cdecl sub_A17000()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iDebugTextTopBottomOffset); /*0xa1700a*/
  if ( off_B02E20 ) /*0xa17016*/
  {
    if ( *off_B02E20 == 0x53 ) /*0xa1701b*/
      FormHeapFree((unsigned int)off_B02E20); /*0xa1701e*/
  }
}
