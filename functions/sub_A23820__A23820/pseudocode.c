void __cdecl sub_A23820()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bTreetops); /*0xa2382a*/
  if ( off_B12750 ) /*0xa23836*/
  {
    if ( *off_B12750 == 0x53 ) /*0xa2383b*/
      FormHeapFree((unsigned int)off_B12750); /*0xa2383e*/
  }
}
