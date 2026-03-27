void __cdecl sub_A25550()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14BA4);
  if ( off_B14BA8 )
  {
    if ( *off_B14BA8 == 0x53 )
      FormHeapFree((unsigned int)off_B14BA8);
  }
}
