void __cdecl sub_A25BC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14F18);
  if ( off_B14F1C )
  {
    if ( *off_B14F1C == 0x53 )
      FormHeapFree((unsigned int)off_B14F1C);
  }
}
