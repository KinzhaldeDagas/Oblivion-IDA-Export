void __cdecl sub_A24F00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1480C); /*0xa24f0a*/
  if ( off_B14810 ) /*0xa24f16*/
  {
    if ( *off_B14810 == 0x53 ) /*0xa24f1b*/
      FormHeapFree((unsigned int)off_B14810); /*0xa24f1e*/
  }
}
