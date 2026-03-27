void __cdecl sub_A1CD90()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B4C);
  if ( off_B11B50[0] )
  {
    if ( *off_B11B50[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B50[0]);
  }
}
