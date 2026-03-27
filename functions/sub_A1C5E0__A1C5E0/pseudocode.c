void __cdecl sub_A1C5E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useFuzzyPicking);
  if ( off_B1190C )
  {
    if ( *off_B1190C == 0x53 )
      FormHeapFree((unsigned int)off_B1190C);
  }
}
