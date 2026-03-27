void __cdecl sub_A1C9D0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AAC);
  if ( off_B11AB0[0] )
  {
    if ( *off_B11AB0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11AB0[0]);
  }
}
