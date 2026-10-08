void __cdecl sub_A16F70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B02DF8); /*0xa16f7a*/
  if ( off_B02DFC ) /*0xa16f86*/
  {
    if ( *off_B02DFC == 0x53 ) /*0xa16f8b*/
      FormHeapFree((unsigned int)off_B02DFC); /*0xa16f8e*/
  }
}
