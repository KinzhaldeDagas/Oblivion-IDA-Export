void __cdecl sub_A1CFA0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BA4);
  if ( off_B11BA8[0] )
  {
    if ( *off_B11BA8[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11BA8[0]);
  }
}
