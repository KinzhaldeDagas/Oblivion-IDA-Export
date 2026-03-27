void __cdecl sub_A251D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14884);
  if ( off_B14888 )
  {
    if ( *off_B14888 == 0x53 )
      FormHeapFree((unsigned int)off_B14888);
  }
}
