void __cdecl sub_A18B70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06C64); /*0xa18b7a*/
  if ( off_B06C68 ) /*0xa18b86*/
  {
    if ( *off_B06C68 == 0x53 ) /*0xa18b8b*/
      FormHeapFree((unsigned int)off_B06C68); /*0xa18b8e*/
  }
}
