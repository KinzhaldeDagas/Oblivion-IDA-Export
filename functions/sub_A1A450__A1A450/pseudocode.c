void __cdecl sub_A1A450()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B070A8);
  if ( off_B070AC )
  {
    if ( *off_B070AC == 0x53 )
      FormHeapFree((unsigned int)off_B070AC);
  }
}
