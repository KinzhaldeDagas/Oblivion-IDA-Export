void __cdecl sub_A1CAC0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AD4); /*0xa1caca*/
  if ( off_B11AD8[0] ) /*0xa1cad6*/
  {
    if ( *off_B11AD8[0] == 0x53 ) /*0xa1cadb*/
      FormHeapFree((unsigned int)off_B11AD8[0]); /*0xa1cade*/
  }
}
