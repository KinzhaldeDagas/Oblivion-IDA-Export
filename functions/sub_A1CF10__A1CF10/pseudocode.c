void __cdecl sub_A1CF10()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B8C);
  if ( off_B11B90[0] )
  {
    if ( *off_B11B90[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B90[0]);
  }
}
