void __cdecl sub_A195C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E1C);
  if ( off_B06E20 )
  {
    if ( *off_B06E20 == 0x53 )
      FormHeapFree((unsigned int)off_B06E20);
  }
}
