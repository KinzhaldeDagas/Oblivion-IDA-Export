void __cdecl sub_A1CC10()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B0C);
  if ( off_B11B10[0] )
  {
    if ( *off_B11B10[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B10[0]);
  }
}
