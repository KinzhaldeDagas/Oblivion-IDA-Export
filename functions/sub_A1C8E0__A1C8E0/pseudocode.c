void __cdecl sub_A1C8E0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A84);
  if ( off_B11A88[0] )
  {
    if ( *off_B11A88[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11A88[0]);
  }
}
