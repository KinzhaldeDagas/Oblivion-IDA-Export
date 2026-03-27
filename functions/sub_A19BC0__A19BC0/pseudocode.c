void __cdecl sub_A19BC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&word_B06F1C);
  if ( off_B06F20 )
  {
    if ( *off_B06F20 == 0x53 )
      FormHeapFree((unsigned int)off_B06F20);
  }
}
