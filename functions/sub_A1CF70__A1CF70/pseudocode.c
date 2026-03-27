void __cdecl sub_A1CF70()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B9C);
  if ( off_B11BA0[0] )
  {
    if ( *off_B11BA0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11BA0[0]);
  }
}
