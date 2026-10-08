void __cdecl sub_A1CBE0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B04); /*0xa1cbea*/
  if ( off_B11B08[0] ) /*0xa1cbf6*/
  {
    if ( *off_B11B08[0] == 0x53 ) /*0xa1cbfb*/
      FormHeapFree((unsigned int)off_B11B08[0]); /*0xa1cbfe*/
  }
}
