void __cdecl sub_A16AF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B02D38); /*0xa16afa*/
  if ( off_B02D3C[0] ) /*0xa16b06*/
  {
    if ( *off_B02D3C[0] == 0x53 ) /*0xa16b0b*/
      FormHeapFree((unsigned int)off_B02D3C[0]); /*0xa16b0e*/
  }
}
