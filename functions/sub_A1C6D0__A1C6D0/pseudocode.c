void __cdecl sub_A1C6D0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A2C);
  if ( off_B11A30 )
  {
    if ( *off_B11A30 == 0x53 )
      FormHeapFree((unsigned int)off_B11A30);
  }
}
