void __cdecl sub_A1C940()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11A94);
  if ( off_B11A98[0] )
  {
    if ( *off_B11A98[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11A98[0]);
  }
}
