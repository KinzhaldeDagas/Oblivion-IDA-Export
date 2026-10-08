void __cdecl sub_A191A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D6C); /*0xa191aa*/
  if ( off_B06D70 ) /*0xa191b6*/
  {
    if ( *off_B06D70 == 0x53 ) /*0xa191bb*/
      FormHeapFree((unsigned int)off_B06D70); /*0xa191be*/
  }
}
