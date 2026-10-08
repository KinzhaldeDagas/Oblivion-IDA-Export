void __cdecl sub_A1CA30()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11ABC); /*0xa1ca3a*/
  if ( off_B11AC0[0] ) /*0xa1ca46*/
  {
    if ( *off_B11AC0[0] == 0x53 ) /*0xa1ca4b*/
      FormHeapFree((unsigned int)off_B11AC0[0]); /*0xa1ca4e*/
  }
}
