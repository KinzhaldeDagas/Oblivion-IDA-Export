void __cdecl sub_A1A330()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&UseWaterReflectionStatics);
  if ( UseWaterReflectionTrees )
  {
    if ( *UseWaterReflectionTrees == 0x53 )
      FormHeapFree((unsigned int)UseWaterReflectionTrees);
  }
}
