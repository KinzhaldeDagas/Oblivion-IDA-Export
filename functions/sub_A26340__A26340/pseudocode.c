void __cdecl sub_A26340()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16264); /*0xa2634a*/
  if ( off_B16268 ) /*0xa26356*/
  {
    if ( *off_B16268 == 0x53 ) /*0xa2635b*/
      FormHeapFree((unsigned int)off_B16268); /*0xa2635e*/
  }
}
