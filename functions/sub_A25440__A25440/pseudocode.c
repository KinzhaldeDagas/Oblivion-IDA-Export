void __cdecl sub_A25440()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14904); /*0xa2544a*/
  if ( off_B14908 ) /*0xa25456*/
  {
    if ( *off_B14908 == 0x53 ) /*0xa2545b*/
      FormHeapFree((unsigned int)off_B14908); /*0xa2545e*/
  }
}
