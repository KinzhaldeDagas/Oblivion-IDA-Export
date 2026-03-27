void __cdecl sub_A1C880()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A74);
  if ( off_B11A78[0] )
  {
    if ( *off_B11A78[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11A78[0]);
  }
}
