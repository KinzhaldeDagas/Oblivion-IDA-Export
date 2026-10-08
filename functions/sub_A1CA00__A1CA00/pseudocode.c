void __cdecl sub_A1CA00()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AB4); /*0xa1ca0a*/
  if ( off_B11AB8[0] ) /*0xa1ca16*/
  {
    if ( *off_B11AB8[0] == 0x53 ) /*0xa1ca1b*/
      FormHeapFree((unsigned int)off_B11AB8[0]); /*0xa1ca1e*/
  }
}
