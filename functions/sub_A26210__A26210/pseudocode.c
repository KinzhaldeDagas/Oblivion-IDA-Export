void __cdecl sub_A26210()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161D8);
  if ( off_B161DC )
  {
    if ( *off_B161DC == 0x53 )
      FormHeapFree((unsigned int)off_B161DC);
  }
}
