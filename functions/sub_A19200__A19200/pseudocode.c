void __cdecl sub_A19200()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D7C); /*0xa1920a*/
  if ( off_B06D80 ) /*0xa19216*/
  {
    if ( *off_B06D80 == 0x53 ) /*0xa1921b*/
      FormHeapFree((unsigned int)off_B06D80); /*0xa1921e*/
  }
}
