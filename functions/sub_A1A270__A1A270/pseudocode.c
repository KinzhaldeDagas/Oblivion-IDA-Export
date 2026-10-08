void __cdecl sub_A1A270()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUseWaterHiRes); /*0xa1a27a*/
  if ( off_B0705C ) /*0xa1a286*/
  {
    if ( *off_B0705C == 0x53 ) /*0xa1a28b*/
      FormHeapFree((unsigned int)off_B0705C); /*0xa1a28e*/
  }
}
