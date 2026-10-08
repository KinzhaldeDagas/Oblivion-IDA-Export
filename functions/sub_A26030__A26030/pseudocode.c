void __cdecl sub_A26030()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B16188); /*0xa2603a*/
  if ( off_B1618C ) /*0xa26046*/
  {
    if ( *off_B1618C == 0x53 ) /*0xa2604b*/
      FormHeapFree((unsigned int)off_B1618C); /*0xa2604e*/
  }
}
