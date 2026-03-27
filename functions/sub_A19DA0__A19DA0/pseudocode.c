void __cdecl sub_A19DA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06F6C);
  if ( off_B06F70 )
  {
    if ( *off_B06F70 == 0x53 )
      FormHeapFree((unsigned int)off_B06F70);
  }
}
