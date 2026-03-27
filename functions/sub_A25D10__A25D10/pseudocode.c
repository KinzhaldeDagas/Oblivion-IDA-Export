void __cdecl sub_A25D10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14F50);
  if ( off_B14F54 )
  {
    if ( *off_B14F54 == 0x53 )
      FormHeapFree((unsigned int)off_B14F54);
  }
}
