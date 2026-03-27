void __cdecl sub_A19C50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F34);
  if ( off_B06F38 )
  {
    if ( *off_B06F38 == 0x53 )
      FormHeapFree((unsigned int)off_B06F38);
  }
}
