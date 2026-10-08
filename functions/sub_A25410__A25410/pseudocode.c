void __cdecl sub_A25410()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B148FC); /*0xa2541a*/
  if ( off_B14900 ) /*0xa25426*/
  {
    if ( *off_B14900 == 0x53 ) /*0xa2542b*/
      FormHeapFree((unsigned int)off_B14900); /*0xa2542e*/
  }
}
