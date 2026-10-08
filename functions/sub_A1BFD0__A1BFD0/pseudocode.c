void __cdecl sub_A1BFD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B09C08); /*0xa1bfda*/
  if ( off_B09C0C[0] ) /*0xa1bfe6*/
  {
    if ( *off_B09C0C[0] == 0x53 ) /*0xa1bfeb*/
      FormHeapFree((unsigned int)off_B09C0C[0]); /*0xa1bfee*/
  }
}
