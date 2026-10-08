void __cdecl sub_A1A330()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&UseWaterReflectionStatics); /*0xa1a33a*/
  if ( UseWaterReflectionTrees ) /*0xa1a346*/
  {
    if ( *UseWaterReflectionTrees == 0x53 ) /*0xa1a34b*/
      FormHeapFree((unsigned int)UseWaterReflectionTrees); /*0xa1a34e*/
  }
}
