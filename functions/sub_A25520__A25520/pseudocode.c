void __cdecl sub_A25520()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14B9C); /*0xa2552a*/
  if ( off_B14BA0 ) /*0xa25536*/
  {
    if ( *off_B14BA0 == 0x53 ) /*0xa2553b*/
      FormHeapFree((unsigned int)off_B14BA0); /*0xa2553e*/
  }
}
