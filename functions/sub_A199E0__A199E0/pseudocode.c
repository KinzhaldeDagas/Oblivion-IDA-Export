void __cdecl sub_A199E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06ECC); /*0xa199ea*/
  if ( off_B06ED0 ) /*0xa199f6*/
  {
    if ( *off_B06ED0 == 0x53 ) /*0xa199fb*/
      FormHeapFree((unsigned int)off_B06ED0); /*0xa199fe*/
  }
}
