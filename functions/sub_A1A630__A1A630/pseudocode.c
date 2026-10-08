void __cdecl sub_A1A630()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&MEMORY[0xB33E90][0x13BC]); /*0xa1a63a*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x13C0] ) /*0xa1a646*/
  {
    if ( **(_BYTE **)&MEMORY[0xB33E90][0x13C0] == 0x53 ) /*0xa1a64b*/
      FormHeapFree(*(unsigned int *)&MEMORY[0xB33E90][0x13C0]); /*0xa1a64e*/
  }
}
