void __cdecl sub_A18B40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06C5C); /*0xa18b4a*/
  if ( off_B06C60 ) /*0xa18b56*/
  {
    if ( *off_B06C60 == 0x53 ) /*0xa18b5b*/
      FormHeapFree((unsigned int)off_B06C60); /*0xa18b5e*/
  }
}
