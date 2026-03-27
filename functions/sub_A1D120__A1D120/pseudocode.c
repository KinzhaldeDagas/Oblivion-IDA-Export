void __cdecl sub_A1D120()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11BE4);
  if ( off_B11BE8 )
  {
    if ( *off_B11BE8 == 0x53 )
      FormHeapFree((unsigned int)off_B11BE8);
  }
}
