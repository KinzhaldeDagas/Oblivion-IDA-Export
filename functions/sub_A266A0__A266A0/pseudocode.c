void __cdecl sub_A266A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B162F4);
  if ( off_B162F8 )
  {
    if ( *off_B162F8 == 0x53 )
      FormHeapFree((unsigned int)off_B162F8);
  }
}
