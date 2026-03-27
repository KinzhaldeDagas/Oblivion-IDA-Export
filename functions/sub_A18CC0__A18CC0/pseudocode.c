void __cdecl sub_A18CC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06C9C);
  if ( off_B06CA0 )
  {
    if ( *off_B06CA0 == 0x53 )
      FormHeapFree((unsigned int)off_B06CA0);
  }
}
