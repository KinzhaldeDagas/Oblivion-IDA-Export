void __cdecl sub_A1C5E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useFuzzyPicking); /*0xa1c5ea*/
  if ( off_B1190C ) /*0xa1c5f6*/
  {
    if ( *off_B1190C == 0x53 ) /*0xa1c5fb*/
      FormHeapFree((unsigned int)off_B1190C); /*0xa1c5fe*/
  }
}
