void __cdecl sub_A24A80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B13FC4); /*0xa24a8a*/
  if ( off_B13FC8 ) /*0xa24a96*/
  {
    if ( *off_B13FC8 == 0x53 ) /*0xa24a9b*/
      FormHeapFree((unsigned int)off_B13FC8); /*0xa24a9e*/
  }
}
