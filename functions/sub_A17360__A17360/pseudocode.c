void __cdecl sub_A17360()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B03154); /*0xa1736a*/
  if ( off_B03158 ) /*0xa17376*/
  {
    if ( *off_B03158 == 0x53 ) /*0xa1737b*/
      FormHeapFree((unsigned int)off_B03158); /*0xa1737e*/
  }
}
