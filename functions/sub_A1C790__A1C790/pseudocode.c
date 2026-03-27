void __cdecl sub_A1C790()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&flt_B11A4C);
  if ( off_B11A50 )
  {
    if ( *off_B11A50 == 0x53 )
      FormHeapFree((unsigned int)off_B11A50);
  }
}
