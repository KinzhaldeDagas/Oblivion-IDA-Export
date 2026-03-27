void __cdecl sub_A1D090()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BCC);
  if ( off_B11BD0[0] )
  {
    if ( *off_B11BD0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11BD0[0]);
  }
}
