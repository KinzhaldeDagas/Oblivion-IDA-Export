void __cdecl sub_A1A2D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&UseWaterReflectionActors); /*0xa1a2da*/
  if ( off_B0706C ) /*0xa1a2e6*/
  {
    if ( *off_B0706C == 0x53 ) /*0xa1a2eb*/
      FormHeapFree((unsigned int)off_B0706C); /*0xa1a2ee*/
  }
}
