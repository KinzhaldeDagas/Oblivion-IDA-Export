void __cdecl sub_A1C580()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B114A4); /*0xa1c58a*/
  if ( off_B114A8[0] ) /*0xa1c596*/
  {
    if ( *off_B114A8[0] == 0x53 ) /*0xa1c59b*/
      FormHeapFree((unsigned int)off_B114A8[0]); /*0xa1c59e*/
  }
}
