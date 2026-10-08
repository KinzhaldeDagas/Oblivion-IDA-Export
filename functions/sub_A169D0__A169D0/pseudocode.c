void __cdecl sub_A169D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D08); /*0xa169da*/
  if ( off_B02D0C ) /*0xa169e6*/
  {
    if ( *off_B02D0C == 0x53 ) /*0xa169eb*/
      FormHeapFree((unsigned int)off_B02D0C); /*0xa169ee*/
  }
}
