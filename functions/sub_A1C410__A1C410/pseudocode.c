void __cdecl sub_A1C410()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B10D68); /*0xa1c41a*/
  if ( off_B10D6C[0] ) /*0xa1c426*/
  {
    if ( *off_B10D6C[0] == 0x53 ) /*0xa1c42b*/
      FormHeapFree((unsigned int)off_B10D6C[0]); /*0xa1c42e*/
  }
}
