void __cdecl sub_A1CEB0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11B7C);
  if ( off_B11B80[0] )
  {
    if ( *off_B11B80[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11B80[0]);
  }
}
