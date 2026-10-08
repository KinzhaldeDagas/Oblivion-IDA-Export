void __cdecl sub_A1C700()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A34); /*0xa1c70a*/
  if ( off_B11A38 ) /*0xa1c716*/
  {
    if ( *off_B11A38 == 0x53 ) /*0xa1c71b*/
      FormHeapFree((unsigned int)off_B11A38); /*0xa1c71e*/
  }
}
