void __cdecl sub_A19A70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EE4); /*0xa19a7a*/
  if ( off_B06EE8 ) /*0xa19a86*/
  {
    if ( *off_B06EE8 == 0x53 ) /*0xa19a8b*/
      FormHeapFree((unsigned int)off_B06EE8); /*0xa19a8e*/
  }
}
