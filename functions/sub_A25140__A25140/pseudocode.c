void __cdecl sub_A25140()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1486C);
  if ( off_B14870 )
  {
    if ( *off_B14870 == 0x53 )
      FormHeapFree((unsigned int)off_B14870);
  }
}
