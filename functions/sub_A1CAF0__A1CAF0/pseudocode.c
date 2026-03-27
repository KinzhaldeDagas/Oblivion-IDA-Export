void __cdecl sub_A1CAF0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11ADC);
  if ( off_B11AE0[0] )
  {
    if ( *off_B11AE0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11AE0[0]);
  }
}
