void __cdecl sub_A19650()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E34);
  if ( off_B06E38 )
  {
    if ( *off_B06E38 == 0x53 )
      FormHeapFree((unsigned int)off_B06E38);
  }
}
