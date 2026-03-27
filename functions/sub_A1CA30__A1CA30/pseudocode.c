void __cdecl sub_A1CA30()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&off_B11ABC);
  if ( off_B11AC0[0] )
  {
    if ( *off_B11AC0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11AC0[0]);
  }
}
