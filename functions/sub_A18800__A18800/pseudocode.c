void __cdecl sub_A18800()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&GridDistantCount); /*0xa1880a*/
  if ( off_B06A94 ) /*0xa18816*/
  {
    if ( *off_B06A94 == 0x53 ) /*0xa1881b*/
      FormHeapFree((unsigned int)off_B06A94); /*0xa1881e*/
  }
}
