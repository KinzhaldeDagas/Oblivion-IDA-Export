void __cdecl sub_A19140()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D5C);
  if ( off_B06D60 )
  {
    if ( *off_B06D60 == 0x53 )
      FormHeapFree((unsigned int)off_B06D60);
  }
}
