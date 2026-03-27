void __cdecl sub_A1CB80()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AF4);
  if ( off_B11AF8[0] )
  {
    if ( *off_B11AF8[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11AF8[0]);
  }
}
