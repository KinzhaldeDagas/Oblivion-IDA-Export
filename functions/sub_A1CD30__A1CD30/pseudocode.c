void __cdecl sub_A1CD30()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B3C);
  if ( off_B11B40[0] )
  {
    if ( *off_B11B40[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B40[0]);
  }
}
