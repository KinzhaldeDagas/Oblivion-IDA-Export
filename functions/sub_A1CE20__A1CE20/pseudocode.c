void __cdecl sub_A1CE20()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B64);
  if ( off_B11B68[0] )
  {
    if ( *off_B11B68[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B68[0]);
  }
}
