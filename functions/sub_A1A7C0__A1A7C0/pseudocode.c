void __cdecl sub_A1A7C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B07604);
  if ( off_B07608 )
  {
    if ( *off_B07608 == 0x53 )
      FormHeapFree((unsigned int)off_B07608);
  }
}
