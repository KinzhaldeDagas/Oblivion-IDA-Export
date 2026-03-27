void __cdecl sub_A170C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B03094);
  if ( off_B03098[0] )
  {
    if ( *off_B03098[0] == 0x53 )
      FormHeapFree((unsigned int)off_B03098[0]);
  }
}
