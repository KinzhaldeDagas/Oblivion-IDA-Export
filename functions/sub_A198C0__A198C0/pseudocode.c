void __cdecl sub_A198C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E9C);
  if ( off_B06EA0 )
  {
    if ( *off_B06EA0 == 0x53 )
      FormHeapFree((unsigned int)off_B06EA0);
  }
}
