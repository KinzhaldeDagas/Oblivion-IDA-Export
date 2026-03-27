void __cdecl sub_A197D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E74);
  if ( off_B06E78 )
  {
    if ( *off_B06E78 == 0x53 )
      FormHeapFree((unsigned int)off_B06E78);
  }
}
