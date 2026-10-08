void __cdecl sub_A1A3F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useWaterLOD); /*0xa1a3fa*/
  if ( off_B0709C ) /*0xa1a406*/
  {
    if ( *off_B0709C == 0x53 ) /*0xa1a40b*/
      FormHeapFree((unsigned int)off_B0709C); /*0xa1a40e*/
  }
}
