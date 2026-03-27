void __cdecl sub_A1CCD0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B2C);
  if ( off_B11B30[0] )
  {
    if ( *off_B11B30[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B30[0]);
  }
}
