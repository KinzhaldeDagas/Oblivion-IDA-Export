void __cdecl sub_A26700()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16304); /*0xa2670a*/
  if ( off_B16308[0] ) /*0xa26716*/
  {
    if ( *off_B16308[0] == 0x53 ) /*0xa2671b*/
      FormHeapFree((unsigned int)off_B16308[0]); /*0xa2671e*/
  }
}
