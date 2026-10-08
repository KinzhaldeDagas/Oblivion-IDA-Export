void __cdecl sub_A24520()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13238); /*0xa2452a*/
  if ( off_B1323C[0] ) /*0xa24536*/
  {
    if ( *off_B1323C[0] == 0x53 ) /*0xa2453b*/
      FormHeapFree((unsigned int)off_B1323C[0]); /*0xa2453e*/
  }
}
