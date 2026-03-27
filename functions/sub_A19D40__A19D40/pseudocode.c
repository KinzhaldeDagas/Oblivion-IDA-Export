void __cdecl sub_A19D40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06F5C);
  if ( off_B06F60 )
  {
    if ( *off_B06F60 == 0x53 )
      FormHeapFree((unsigned int)off_B06F60);
  }
}
