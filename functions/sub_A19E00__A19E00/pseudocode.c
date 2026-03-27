void __cdecl sub_A19E00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06F7C);
  if ( off_B06F80 )
  {
    if ( *off_B06F80 == 0x53 )
      FormHeapFree((unsigned int)off_B06F80);
  }
}
