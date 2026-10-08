void __cdecl sub_A171B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B030BC); /*0xa171ba*/
  if ( off_B030C0 ) /*0xa171c6*/
  {
    if ( *off_B030C0 == 0x53 ) /*0xa171cb*/
      FormHeapFree((unsigned int)off_B030C0); /*0xa171ce*/
  }
}
