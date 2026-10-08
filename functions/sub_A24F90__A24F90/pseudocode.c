void __cdecl sub_A24F90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14824); /*0xa24f9a*/
  if ( off_B14828 ) /*0xa24fa6*/
  {
    if ( *off_B14828 == 0x53 ) /*0xa24fab*/
      FormHeapFree((unsigned int)off_B14828); /*0xa24fae*/
  }
}
