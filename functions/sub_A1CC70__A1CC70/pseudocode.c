void __cdecl sub_A1CC70()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B1C);
  if ( off_B11B20[0] )
  {
    if ( *off_B11B20[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B20[0]);
  }
}
