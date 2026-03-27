void __cdecl sub_A1A360()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&UseWaterReflectionMisc);
  if ( off_B07084 )
  {
    if ( *off_B07084 == 0x53 )
      FormHeapFree((unsigned int)off_B07084);
  }
}
