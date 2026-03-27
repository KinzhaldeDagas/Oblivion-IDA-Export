void __cdecl sub_A1D180()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11BF4);
  if ( off_B11BF8 )
  {
    if ( *off_B11BF8 == 0x53 )
      FormHeapFree((unsigned int)off_B11BF8);
  }
}
