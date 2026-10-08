void __cdecl sub_A250E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1485C); /*0xa250ea*/
  if ( off_B14860 ) /*0xa250f6*/
  {
    if ( *off_B14860 == 0x53 ) /*0xa250fb*/
      FormHeapFree((unsigned int)off_B14860); /*0xa250fe*/
  }
}
