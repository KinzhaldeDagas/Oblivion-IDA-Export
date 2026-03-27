void __cdecl sub_A19080()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06D3C);
  if ( off_B06D40 )
  {
    if ( *off_B06D40 == 0x53 )
      FormHeapFree((unsigned int)off_B06D40);
  }
}
