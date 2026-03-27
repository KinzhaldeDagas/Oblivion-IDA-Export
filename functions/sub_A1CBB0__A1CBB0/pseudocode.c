void __cdecl sub_A1CBB0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AFC);
  if ( off_B11B00[0] )
  {
    if ( *off_B11B00[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B00[0]);
  }
}
