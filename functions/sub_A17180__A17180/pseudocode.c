void __cdecl sub_A17180()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B030B4);
  if ( off_B030B8 )
  {
    if ( *off_B030B8 == 0x53 )
      FormHeapFree((unsigned int)off_B030B8);
  }
}
