void __cdecl sub_A1A8E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07634); /*0xa1a8ea*/
  if ( off_B07638 ) /*0xa1a8f6*/
  {
    if ( *off_B07638 == 0x53 ) /*0xa1a8fb*/
      FormHeapFree((unsigned int)off_B07638); /*0xa1a8fe*/
  }
}
