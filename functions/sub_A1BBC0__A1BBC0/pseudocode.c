void __cdecl sub_A1BBC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iNumHavokThreads); /*0xa1bbca*/
  if ( off_B097DC ) /*0xa1bbd6*/
  {
    if ( *off_B097DC == 0x53 ) /*0xa1bbdb*/
      FormHeapFree((unsigned int)off_B097DC); /*0xa1bbde*/
  }
}
