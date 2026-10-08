void __cdecl sub_A1C730()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A3C); /*0xa1c73a*/
  if ( off_B11A40 ) /*0xa1c746*/
  {
    if ( *off_B11A40 == 0x53 ) /*0xa1c74b*/
      FormHeapFree((unsigned int)off_B11A40); /*0xa1c74e*/
  }
}
