void __cdecl sub_A25520()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14B9C);
  if ( off_B14BA0 )
  {
    if ( *off_B14BA0 == 0x53 )
      FormHeapFree((unsigned int)off_B14BA0);
  }
}
