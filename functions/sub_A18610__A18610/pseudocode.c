void __cdecl sub_A18610()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06548); /*0xa1861a*/
  if ( off_B0654C[0] ) /*0xa18626*/
  {
    if ( *off_B0654C[0] == 0x53 ) /*0xa1862b*/
      FormHeapFree((unsigned int)off_B0654C[0]); /*0xa1862e*/
  }
}
