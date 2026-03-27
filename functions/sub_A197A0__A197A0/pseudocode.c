void __cdecl sub_A197A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06E6C);
  if ( off_B06E70 )
  {
    if ( *off_B06E70 == 0x53 )
      FormHeapFree((unsigned int)off_B06E70);
  }
}
