void __cdecl sub_A1C7C0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A54);
  if ( off_B11A58 )
  {
    if ( *off_B11A58 == 0x53 )
      FormHeapFree((unsigned int)off_B11A58);
  }
}
