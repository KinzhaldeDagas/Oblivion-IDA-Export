void __cdecl sub_A26310()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1625C);
  if ( off_B16260 )
  {
    if ( *off_B16260 == 0x53 )
      FormHeapFree((unsigned int)off_B16260);
  }
}
