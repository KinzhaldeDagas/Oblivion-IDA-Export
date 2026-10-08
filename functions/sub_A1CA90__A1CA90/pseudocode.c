void __cdecl sub_A1CA90()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)off_B11ACC); /*0xa1ca9a*/
  if ( off_B11AD0[0] ) /*0xa1caa6*/
  {
    if ( *off_B11AD0[0] == 0x53 ) /*0xa1caab*/
      FormHeapFree((unsigned int)off_B11AD0[0]); /*0xa1caae*/
  }
}
