void __cdecl sub_A17030()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iDebugTextLeftRightOffset); /*0xa1703a*/
  if ( off_B02E28[0] ) /*0xa17046*/
  {
    if ( *off_B02E28[0] == 0x53 ) /*0xa1704b*/
      FormHeapFree((unsigned int)off_B02E28[0]); /*0xa1704e*/
  }
}
