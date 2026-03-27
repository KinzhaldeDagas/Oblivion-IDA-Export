void __cdecl sub_A1CEE0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B84);
  if ( off_B11B88[0] )
  {
    if ( *off_B11B88[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B88[0]);
  }
}
