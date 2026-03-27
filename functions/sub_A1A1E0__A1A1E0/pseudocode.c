void __cdecl sub_A1A1E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B07040);
  if ( off_B07044 )
  {
    if ( *off_B07044 == 0x53 )
      FormHeapFree((unsigned int)off_B07044);
  }
}
