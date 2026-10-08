void __cdecl sub_A24400()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13208); /*0xa2440a*/
  if ( off_B1320C ) /*0xa24416*/
  {
    if ( *off_B1320C == 0x53 ) /*0xa2441b*/
      FormHeapFree((unsigned int)off_B1320C); /*0xa2441e*/
  }
}
