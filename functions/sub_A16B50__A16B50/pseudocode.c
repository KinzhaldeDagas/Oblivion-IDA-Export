void __cdecl sub_A16B50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D48); /*0xa16b5a*/
  if ( off_B02D4C[0] ) /*0xa16b66*/
  {
    if ( *off_B02D4C[0] == 0x53 ) /*0xa16b6b*/
      FormHeapFree((unsigned int)off_B02D4C[0]); /*0xa16b6e*/
  }
}
