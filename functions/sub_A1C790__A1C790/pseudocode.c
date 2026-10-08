void __cdecl sub_A1C790()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A4C); /*0xa1c79a*/
  if ( off_B11A50 ) /*0xa1c7a6*/
  {
    if ( *off_B11A50 == 0x53 ) /*0xa1c7ab*/
      FormHeapFree((unsigned int)off_B11A50); /*0xa1c7ae*/
  }
}
