void __cdecl sub_A24640()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bActivateGamebyroPicks); /*0xa2464a*/
  if ( off_B135AC ) /*0xa24656*/
  {
    if ( *off_B135AC == 0x53 ) /*0xa2465b*/
      FormHeapFree((unsigned int)off_B135AC); /*0xa2465e*/
  }
}
