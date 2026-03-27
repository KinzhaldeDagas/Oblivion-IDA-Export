void __cdecl sub_A17FE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B0524C);
  if ( off_B05250 )
  {
    if ( *off_B05250 == 0x53 )
      FormHeapFree((unsigned int)off_B05250);
  }
}
