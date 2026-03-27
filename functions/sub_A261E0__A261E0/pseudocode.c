void __cdecl sub_A261E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161D0);
  if ( off_B161D4 )
  {
    if ( *off_B161D4 == 0x53 )
      FormHeapFree((unsigned int)off_B161D4);
  }
}
