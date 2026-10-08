void __cdecl sub_A19620()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E2C); /*0xa1962a*/
  if ( off_B06E30 ) /*0xa19636*/
  {
    if ( *off_B06E30 == 0x53 ) /*0xa1963b*/
      FormHeapFree((unsigned int)off_B06E30); /*0xa1963e*/
  }
}
