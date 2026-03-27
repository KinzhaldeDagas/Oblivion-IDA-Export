void __cdecl sub_A252C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&trackAllDeath);
  if ( off_B148C8 )
  {
    if ( *off_B148C8 == 0x53 )
      FormHeapFree((unsigned int)off_B148C8);
  }
}
