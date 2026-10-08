void __cdecl sub_A1B8D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B5C); /*0xa1b8da*/
  if ( off_B08B60 ) /*0xa1b8e6*/
  {
    if ( *off_B08B60 == 0x53 ) /*0xa1b8eb*/
      FormHeapFree((unsigned int)off_B08B60); /*0xa1b8ee*/
  }
}
