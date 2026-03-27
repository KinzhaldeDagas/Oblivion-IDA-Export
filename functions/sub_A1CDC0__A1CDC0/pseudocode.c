void __cdecl sub_A1CDC0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B54);
  if ( off_B11B58[0] )
  {
    if ( *off_B11B58[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B58[0]);
  }
}
