void __cdecl sub_A261E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161D0); /*0xa261ea*/
  if ( off_B161D4 ) /*0xa261f6*/
  {
    if ( *off_B161D4 == 0x53 ) /*0xa261fb*/
      FormHeapFree((unsigned int)off_B161D4); /*0xa261fe*/
  }
}
