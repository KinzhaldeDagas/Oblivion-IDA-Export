void __cdecl sub_A17BD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B048EC); /*0xa17bda*/
  if ( off_B048F0 ) /*0xa17be6*/
  {
    if ( *off_B048F0 == 0x53 ) /*0xa17beb*/
      FormHeapFree((unsigned int)off_B048F0); /*0xa17bee*/
  }
}
