void __cdecl sub_A26060()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B16190); /*0xa2606a*/
  if ( off_B16194 ) /*0xa26076*/
  {
    if ( *off_B16194 == 0x53 ) /*0xa2607b*/
      FormHeapFree((unsigned int)off_B16194); /*0xa2607e*/
  }
}
