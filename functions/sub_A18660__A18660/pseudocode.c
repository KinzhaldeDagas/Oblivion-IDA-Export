void __cdecl sub_A18660()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bLoadHelmentsBackground); /*0xa1866a*/
  if ( off_B0660C[0] ) /*0xa18676*/
  {
    if ( *off_B0660C[0] == 0x53 ) /*0xa1867b*/
      FormHeapFree((unsigned int)off_B0660C[0]); /*0xa1867e*/
  }
}
