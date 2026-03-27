void __cdecl sub_A19D10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F54);
  if ( off_B06F58 )
  {
    if ( *off_B06F58 == 0x53 )
      FormHeapFree((unsigned int)off_B06F58);
  }
}
