void __cdecl sub_A19B00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06EFC);
  if ( off_B06F00 )
  {
    if ( *off_B06F00 == 0x53 )
      FormHeapFree((unsigned int)off_B06F00);
  }
}
