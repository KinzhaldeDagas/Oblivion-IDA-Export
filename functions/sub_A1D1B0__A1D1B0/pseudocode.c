void __cdecl sub_A1D1B0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11BFC);
  if ( off_B11C00 )
  {
    if ( *off_B11C00 == 0x53 )
      FormHeapFree((unsigned int)off_B11C00);
  }
}
