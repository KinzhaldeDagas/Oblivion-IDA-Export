void __cdecl sub_A1BF70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B09B40); /*0xa1bf7a*/
  if ( off_B09B44 ) /*0xa1bf86*/
  {
    if ( *off_B09B44 == 0x53 ) /*0xa1bf8b*/
      FormHeapFree((unsigned int)off_B09B44); /*0xa1bf8e*/
  }
}
