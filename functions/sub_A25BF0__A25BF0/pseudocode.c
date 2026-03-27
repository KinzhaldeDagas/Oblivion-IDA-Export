void __cdecl sub_A25BF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14F20);
  if ( off_B14F24 )
  {
    if ( *off_B14F24 == 0x53 )
      FormHeapFree((unsigned int)off_B14F24);
  }
}
