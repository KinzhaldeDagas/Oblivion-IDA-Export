void __cdecl sub_A19CE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F4C);
  if ( off_B06F50 )
  {
    if ( *off_B06F50 == 0x53 )
      FormHeapFree((unsigned int)off_B06F50);
  }
}
