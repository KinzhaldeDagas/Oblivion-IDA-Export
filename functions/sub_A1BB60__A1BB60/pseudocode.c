void __cdecl sub_A1BB60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_fDecalLifetime_Display); /*0xa1bb6a*/
  if ( off_B097CC ) /*0xa1bb76*/
  {
    if ( *off_B097CC == 0x53 ) /*0xa1bb7b*/
      FormHeapFree((unsigned int)off_B097CC); /*0xa1bb7e*/
  }
}
