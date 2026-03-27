void __cdecl sub_A1A510()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B070C8);
  if ( off_B070CC )
  {
    if ( *off_B070CC == 0x53 )
      FormHeapFree((unsigned int)off_B070CC);
  }
}
