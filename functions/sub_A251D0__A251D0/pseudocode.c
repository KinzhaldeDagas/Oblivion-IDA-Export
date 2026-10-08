void __cdecl sub_A251D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14884); /*0xa251da*/
  if ( off_B14888 ) /*0xa251e6*/
  {
    if ( *off_B14888 == 0x53 ) /*0xa251eb*/
      FormHeapFree((unsigned int)off_B14888); /*0xa251ee*/
  }
}
