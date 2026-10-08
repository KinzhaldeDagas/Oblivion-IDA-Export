void __cdecl sub_A185B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06538); /*0xa185ba*/
  if ( off_B0653C ) /*0xa185c6*/
  {
    if ( *off_B0653C == 0x53 ) /*0xa185cb*/
      FormHeapFree((unsigned int)off_B0653C); /*0xa185ce*/
  }
}
