void __cdecl sub_A180F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&lpString2); /*0xa180fa*/
  if ( off_B05568 ) /*0xa18106*/
  {
    if ( *off_B05568 == 0x53 ) /*0xa1810b*/
      FormHeapFree((unsigned int)off_B05568); /*0xa1810e*/
  }
}
