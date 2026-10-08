void __cdecl sub_A1C760()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A44); /*0xa1c76a*/
  if ( off_B11A48 ) /*0xa1c776*/
  {
    if ( *off_B11A48 == 0x53 ) /*0xa1c77b*/
      FormHeapFree((unsigned int)off_B11A48); /*0xa1c77e*/
  }
}
