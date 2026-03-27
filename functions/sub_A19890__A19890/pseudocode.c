void __cdecl sub_A19890()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E94);
  if ( off_B06E98 )
  {
    if ( *off_B06E98 == 0x53 )
      FormHeapFree((unsigned int)off_B06E98);
  }
}
