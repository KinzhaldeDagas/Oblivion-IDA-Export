void __cdecl sub_A247C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135E8); /*0xa247ca*/
  if ( off_B135EC ) /*0xa247d6*/
  {
    if ( *off_B135EC == 0x53 ) /*0xa247db*/
      FormHeapFree((unsigned int)off_B135EC); /*0xa247de*/
  }
}
