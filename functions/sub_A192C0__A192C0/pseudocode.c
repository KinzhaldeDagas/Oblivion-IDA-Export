void __cdecl sub_A192C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D9C); /*0xa192ca*/
  if ( off_B06DA0 ) /*0xa192d6*/
  {
    if ( *off_B06DA0 == 0x53 ) /*0xa192db*/
      FormHeapFree((unsigned int)off_B06DA0); /*0xa192de*/
  }
}
