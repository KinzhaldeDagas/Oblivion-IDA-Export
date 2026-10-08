void __cdecl sub_A25BC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14F18); /*0xa25bca*/
  if ( off_B14F1C ) /*0xa25bd6*/
  {
    if ( *off_B14F1C == 0x53 ) /*0xa25bdb*/
      FormHeapFree((unsigned int)off_B14F1C); /*0xa25bde*/
  }
}
