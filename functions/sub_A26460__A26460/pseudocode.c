void __cdecl sub_A26460()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B16294); /*0xa2646a*/
  if ( off_B16298 ) /*0xa26476*/
  {
    if ( *off_B16298 == 0x53 ) /*0xa2647b*/
      FormHeapFree((unsigned int)off_B16298); /*0xa2647e*/
  }
}
