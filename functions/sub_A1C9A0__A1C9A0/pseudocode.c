void __cdecl sub_A1C9A0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AA4);
  if ( off_B11AA8[0] )
  {
    if ( *off_B11AA8[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11AA8[0]);
  }
}
