void __cdecl sub_A19B30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06F04);
  if ( off_B06F08 )
  {
    if ( *off_B06F08 == 0x53 )
      FormHeapFree((unsigned int)off_B06F08);
  }
}
