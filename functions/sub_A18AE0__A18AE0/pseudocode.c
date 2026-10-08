void __cdecl sub_A18AE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBlockMessageBoxes_MESSAGES); /*0xa18aea*/
  if ( off_B06B3C ) /*0xa18af6*/
  {
    if ( *off_B06B3C == 0x53 ) /*0xa18afb*/
      FormHeapFree((unsigned int)off_B06B3C); /*0xa18afe*/
  }
}
