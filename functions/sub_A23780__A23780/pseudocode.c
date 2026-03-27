void __cdecl sub_A23780()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B12628);
  if ( off_B1262C )
  {
    if ( *off_B1262C == 0x53 )
      FormHeapFree((unsigned int)off_B1262C);
  }
}
