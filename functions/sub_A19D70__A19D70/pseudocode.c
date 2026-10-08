void __cdecl sub_A19D70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06F64); /*0xa19d7a*/
  if ( off_B06F68 ) /*0xa19d86*/
  {
    if ( *off_B06F68 == 0x53 ) /*0xa19d8b*/
      FormHeapFree((unsigned int)off_B06F68); /*0xa19d8e*/
  }
}
