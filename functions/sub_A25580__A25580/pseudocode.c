void __cdecl sub_A25580()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14BAC); /*0xa2558a*/
  if ( off_B14BB0 ) /*0xa25596*/
  {
    if ( *off_B14BB0 == 0x53 ) /*0xa2559b*/
      FormHeapFree((unsigned int)off_B14BB0); /*0xa2559e*/
  }
}
