void __cdecl sub_A18F00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06CFC); /*0xa18f0a*/
  if ( off_B06D00 ) /*0xa18f16*/
  {
    if ( *off_B06D00 == 0x53 ) /*0xa18f1b*/
      FormHeapFree((unsigned int)off_B06D00); /*0xa18f1e*/
  }
}
