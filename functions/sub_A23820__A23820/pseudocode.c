void __cdecl sub_A23820()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bTreetops);
  if ( off_B12750 )
  {
    if ( *off_B12750 == 0x53 )
      FormHeapFree((unsigned int)off_B12750);
  }
}
