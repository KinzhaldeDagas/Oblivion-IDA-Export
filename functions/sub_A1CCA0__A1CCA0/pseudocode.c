void __cdecl sub_A1CCA0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B24);
  if ( off_B11B28[0] )
  {
    if ( *off_B11B28[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B28[0]);
  }
}
