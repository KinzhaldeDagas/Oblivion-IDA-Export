void __cdecl sub_A23460()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B120EC); /*0xa2346a*/
  if ( off_B120F0 ) /*0xa23476*/
  {
    if ( *off_B120F0 == 0x53 ) /*0xa2347b*/
      FormHeapFree((unsigned int)off_B120F0); /*0xa2347e*/
  }
}
