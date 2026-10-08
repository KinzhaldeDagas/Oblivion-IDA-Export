void __cdecl sub_A18890()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06AA8); /*0xa1889a*/
  if ( off_B06AAC ) /*0xa188a6*/
  {
    if ( *off_B06AAC == 0x53 ) /*0xa188ab*/
      FormHeapFree((unsigned int)off_B06AAC); /*0xa188ae*/
  }
}
