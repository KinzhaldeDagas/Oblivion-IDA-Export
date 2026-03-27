void __cdecl sub_A1A790()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B075FC);
  if ( off_B07600 )
  {
    if ( *off_B07600 == 0x53 )
      FormHeapFree((unsigned int)off_B07600);
  }
}
