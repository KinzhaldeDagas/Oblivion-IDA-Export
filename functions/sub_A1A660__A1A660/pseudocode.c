void __cdecl sub_A1A660()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&MEMORY[0xB33E90][0x13D4]); /*0xa1a66a*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x13D8] ) /*0xa1a676*/
  {
    if ( **(_BYTE **)&MEMORY[0xB33E90][0x13D8] == 0x53 ) /*0xa1a67b*/
      FormHeapFree(*(unsigned int *)&MEMORY[0xB33E90][0x13D8]); /*0xa1a67e*/
  }
}
