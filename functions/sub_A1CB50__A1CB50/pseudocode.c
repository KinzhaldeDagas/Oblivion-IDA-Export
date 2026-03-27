void __cdecl sub_A1CB50()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AEC);
  if ( off_B11AF0[0] )
  {
    if ( *off_B11AF0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11AF0[0]);
  }
}
