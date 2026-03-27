void __cdecl sub_A1CDF0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B5C);
  if ( off_B11B60[0] )
  {
    if ( *off_B11B60[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B60[0]);
  }
}
