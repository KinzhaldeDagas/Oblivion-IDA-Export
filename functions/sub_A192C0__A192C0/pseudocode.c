void __cdecl sub_A192C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D9C);
  if ( off_B06DA0 )
  {
    if ( *off_B06DA0 == 0x53 )
      FormHeapFree((unsigned int)off_B06DA0);
  }
}
