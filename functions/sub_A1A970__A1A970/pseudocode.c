void __cdecl sub_A1A970()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B0764C);
  if ( off_B07650[0] )
  {
    if ( *off_B07650[0] == 0x53 )
      FormHeapFree((unsigned int)off_B07650[0]);
  }
}
