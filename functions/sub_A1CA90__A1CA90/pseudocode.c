void __cdecl sub_A1CA90()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)off_B11ACC);
  if ( off_B11AD0[0] )
  {
    if ( *off_B11AD0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11AD0[0]);
  }
}
