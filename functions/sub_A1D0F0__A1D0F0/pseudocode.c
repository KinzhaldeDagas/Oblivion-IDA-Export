void __cdecl sub_A1D0F0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11BDC);
  if ( off_B11BE0 )
  {
    if ( *off_B11BE0 == 0x53 )
      FormHeapFree((unsigned int)off_B11BE0);
  }
}
