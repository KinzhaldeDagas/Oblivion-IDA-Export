void __cdecl sub_A195F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E24);
  if ( off_B06E28 )
  {
    if ( *off_B06E28 == 0x53 )
      FormHeapFree((unsigned int)off_B06E28);
  }
}
