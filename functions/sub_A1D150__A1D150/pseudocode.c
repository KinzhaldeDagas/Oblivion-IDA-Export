void __cdecl sub_A1D150()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11BEC);
  if ( off_B11BF0 )
  {
    if ( *off_B11BF0 == 0x53 )
      FormHeapFree((unsigned int)off_B11BF0);
  }
}
