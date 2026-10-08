void __cdecl sub_A17330()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B0314C); /*0xa1733a*/
  if ( off_B03150 ) /*0xa17346*/
  {
    if ( *off_B03150 == 0x53 ) /*0xa1734b*/
      FormHeapFree((unsigned int)off_B03150); /*0xa1734e*/
  }
}
