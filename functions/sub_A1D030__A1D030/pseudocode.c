void __cdecl sub_A1D030()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BBC);
  if ( off_B11BC0[0] )
  {
    if ( *off_B11BC0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11BC0[0]);
  }
}
