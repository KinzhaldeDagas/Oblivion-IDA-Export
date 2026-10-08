void __cdecl sub_A1BC60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&preventHavokAddAll); /*0xa1bc6a*/
  if ( off_B09874[0] ) /*0xa1bc76*/
  {
    if ( *off_B09874[0] == 0x53 ) /*0xa1bc7b*/
      FormHeapFree((unsigned int)off_B09874[0]); /*0xa1bc7e*/
  }
}
