void __cdecl sub_A1CA00()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11AB4);
  if ( off_B11AB8[0] )
  {
    if ( *off_B11AB8[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11AB8[0]);
  }
}
