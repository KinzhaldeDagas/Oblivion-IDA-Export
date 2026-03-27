void __cdecl sub_A19D70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06F64);
  if ( off_B06F68 )
  {
    if ( *off_B06F68 == 0x53 )
      FormHeapFree((unsigned int)off_B06F68);
  }
}
