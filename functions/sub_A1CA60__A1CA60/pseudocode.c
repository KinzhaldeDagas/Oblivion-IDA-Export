void __cdecl sub_A1CA60()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)off_B11AC4); /*0xa1ca6a*/
  if ( off_B11AC8[0] ) /*0xa1ca76*/
  {
    if ( *off_B11AC8[0] == 0x53 ) /*0xa1ca7b*/
      FormHeapFree((unsigned int)off_B11AC8[0]); /*0xa1ca7e*/
  }
}
