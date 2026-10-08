void __cdecl sub_A170C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B03094); /*0xa170ca*/
  if ( off_B03098[0] ) /*0xa170d6*/
  {
    if ( *off_B03098[0] == 0x53 ) /*0xa170db*/
      FormHeapFree((unsigned int)off_B03098[0]); /*0xa170de*/
  }
}
