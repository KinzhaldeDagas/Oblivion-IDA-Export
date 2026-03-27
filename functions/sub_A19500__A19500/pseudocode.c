void __cdecl sub_A19500()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06DFC);
  if ( off_B06E00 )
  {
    if ( *off_B06E00 == 0x53 )
      FormHeapFree((unsigned int)off_B06E00);
  }
}
