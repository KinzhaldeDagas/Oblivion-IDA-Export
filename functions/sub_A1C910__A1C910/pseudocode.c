void __cdecl sub_A1C910()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A8C);
  if ( off_B11A90[0] )
  {
    if ( *off_B11A90[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11A90[0]);
  }
}
