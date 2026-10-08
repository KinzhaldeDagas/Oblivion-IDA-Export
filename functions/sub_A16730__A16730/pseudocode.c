void __cdecl sub_A16730()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02C98); /*0xa1673a*/
  if ( off_B02C9C ) /*0xa16746*/
  {
    if ( *off_B02C9C == 0x53 ) /*0xa1674b*/
      FormHeapFree((unsigned int)off_B02C9C); /*0xa1674e*/
  }
}
