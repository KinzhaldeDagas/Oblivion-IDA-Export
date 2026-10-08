void __cdecl sub_A1B370()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B080DC); /*0xa1b37a*/
  if ( off_B080E0[0] ) /*0xa1b386*/
  {
    if ( *off_B080E0[0] == 0x53 ) /*0xa1b38b*/
      FormHeapFree((unsigned int)off_B080E0[0]); /*0xa1b38e*/
  }
}
