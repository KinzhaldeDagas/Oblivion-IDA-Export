void __cdecl sub_A194A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06DEC);
  if ( off_B06DF0 )
  {
    if ( *off_B06DF0 == 0x53 )
      FormHeapFree((unsigned int)off_B06DF0);
  }
}
