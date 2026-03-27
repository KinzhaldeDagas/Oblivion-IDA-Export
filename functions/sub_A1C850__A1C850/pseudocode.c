void __cdecl sub_A1C850()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)off_B11A6C);
  if ( off_B11A70[0] )
  {
    if ( *off_B11A70[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11A70[0]);
  }
}
