void __cdecl sub_A24950()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B13984); /*0xa2495a*/
  if ( off_B13988 ) /*0xa24966*/
  {
    if ( *off_B13988 == 0x53 ) /*0xa2496b*/
      FormHeapFree((unsigned int)off_B13988); /*0xa2496e*/
  }
}
