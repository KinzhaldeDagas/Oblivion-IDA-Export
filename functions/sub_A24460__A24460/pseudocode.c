void __cdecl sub_A24460()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13218); /*0xa2446a*/
  if ( off_B1321C ) /*0xa24476*/
  {
    if ( *off_B1321C == 0x53 ) /*0xa2447b*/
      FormHeapFree((unsigned int)off_B1321C); /*0xa2447e*/
  }
}
