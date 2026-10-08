void __cdecl sub_A1CFD0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BAC); /*0xa1cfda*/
  if ( off_B11BB0[0] ) /*0xa1cfe6*/
  {
    if ( *off_B11BB0[0] == 0x53 ) /*0xa1cfeb*/
      FormHeapFree((unsigned int)off_B11BB0[0]); /*0xa1cfee*/
  }
}
