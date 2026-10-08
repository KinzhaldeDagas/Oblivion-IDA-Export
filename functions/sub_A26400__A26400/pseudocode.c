void __cdecl sub_A26400()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16284); /*0xa2640a*/
  if ( off_B16288 ) /*0xa26416*/
  {
    if ( *off_B16288 == 0x53 ) /*0xa2641b*/
      FormHeapFree((unsigned int)off_B16288); /*0xa2641e*/
  }
}
