void __cdecl sub_A25110()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14864); /*0xa2511a*/
  if ( off_B14868 ) /*0xa25126*/
  {
    if ( *off_B14868 == 0x53 ) /*0xa2512b*/
      FormHeapFree((unsigned int)off_B14868); /*0xa2512e*/
  }
}
