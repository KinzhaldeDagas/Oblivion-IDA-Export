void __cdecl sub_A19AD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EF4);
  if ( off_B06EF8 )
  {
    if ( *off_B06EF8 == 0x53 )
      FormHeapFree((unsigned int)off_B06EF8);
  }
}
