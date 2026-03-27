void __cdecl sub_A19BF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F24);
  if ( off_B06F28 )
  {
    if ( *off_B06F28 == 0x53 )
      FormHeapFree((unsigned int)off_B06F28);
  }
}
