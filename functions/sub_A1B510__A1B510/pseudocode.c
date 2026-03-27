void __cdecl sub_A1B510()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08170);
  if ( off_B08174 )
  {
    if ( *off_B08174 == 0x53 )
      FormHeapFree((unsigned int)off_B08174);
  }
}
