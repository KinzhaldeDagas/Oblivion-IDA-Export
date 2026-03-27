void __cdecl sub_A1C970()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A9C);
  if ( off_B11AA0[0] )
  {
    if ( *off_B11AA0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11AA0[0]);
  }
}
