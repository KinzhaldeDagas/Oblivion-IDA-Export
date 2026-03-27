void __cdecl sub_A19B60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06F0C);
  if ( off_B06F10 )
  {
    if ( *off_B06F10 == 0x53 )
      FormHeapFree((unsigned int)off_B06F10);
  }
}
