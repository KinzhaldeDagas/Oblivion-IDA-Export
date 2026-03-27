void __cdecl sub_A194D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06DF4);
  if ( off_B06DF8 )
  {
    if ( *off_B06DF8 == 0x53 )
      FormHeapFree((unsigned int)off_B06DF8);
  }
}
