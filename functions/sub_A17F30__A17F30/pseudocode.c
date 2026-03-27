void __cdecl sub_A17F30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B05234);
  if ( off_B05238 )
  {
    if ( *off_B05238 == 0x53 )
      FormHeapFree((unsigned int)off_B05238);
  }
}
