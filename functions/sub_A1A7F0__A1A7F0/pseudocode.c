void __cdecl sub_A1A7F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B0760C);
  if ( off_B07610 )
  {
    if ( *off_B07610 == 0x53 )
      FormHeapFree((unsigned int)off_B07610);
  }
}
