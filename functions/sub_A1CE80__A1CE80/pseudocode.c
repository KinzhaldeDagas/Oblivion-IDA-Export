void __cdecl sub_A1CE80()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B74);
  if ( off_B11B78[0] )
  {
    if ( *off_B11B78[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B78[0]);
  }
}
