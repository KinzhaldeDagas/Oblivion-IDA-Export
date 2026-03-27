void __cdecl sub_A254B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14974);
  if ( off_B14978[0] )
  {
    if ( *off_B14978[0] == 0x53 )
      FormHeapFree((unsigned int)off_B14978[0]);
  }
}
