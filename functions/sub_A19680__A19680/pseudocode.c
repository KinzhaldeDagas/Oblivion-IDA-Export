void __cdecl sub_A19680()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E3C);
  if ( off_B06E40 )
  {
    if ( *off_B06E40 == 0x53 )
      FormHeapFree((unsigned int)off_B06E40);
  }
}
