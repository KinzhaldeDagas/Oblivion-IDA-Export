void __cdecl sub_A1C6A0()
{
  BSSimpleList_Remove((int *)&unk_B11D4C, (int)&fGetUpTime);
  if ( off_B11A28 )
  {
    if ( *off_B11A28 == 0x53 )
      FormHeapFree((unsigned int)off_B11A28);
  }
}
