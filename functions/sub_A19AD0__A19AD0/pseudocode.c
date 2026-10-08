void __cdecl sub_A19AD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EF4); /*0xa19ada*/
  if ( off_B06EF8 ) /*0xa19ae6*/
  {
    if ( *off_B06EF8 == 0x53 ) /*0xa19aeb*/
      FormHeapFree((unsigned int)off_B06EF8); /*0xa19aee*/
  }
}
