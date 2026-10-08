void __cdecl sub_A248B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B13610); /*0xa248ba*/
  if ( off_B13614 ) /*0xa248c6*/
  {
    if ( *off_B13614 == 0x53 ) /*0xa248cb*/
      FormHeapFree((unsigned int)off_B13614); /*0xa248ce*/
  }
}
