void __cdecl sub_A1CD60()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B44);
  if ( off_B11B48[0] )
  {
    if ( *off_B11B48[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B48[0]);
  }
}
