void __cdecl sub_A255E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14BBC);
  if ( off_B14BC0 )
  {
    if ( *off_B14BC0 == 0x53 )
      FormHeapFree((unsigned int)off_B14BC0);
  }
}
