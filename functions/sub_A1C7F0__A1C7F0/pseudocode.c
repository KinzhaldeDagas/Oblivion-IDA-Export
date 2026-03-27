void __cdecl sub_A1C7F0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A5C);
  if ( off_B11A60[0] )
  {
    if ( *off_B11A60[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11A60[0]);
  }
}
