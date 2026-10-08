void __cdecl sub_A192F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bAllowSM20Hair); /*0xa192fa*/
  if ( off_B06DA8 ) /*0xa19306*/
  {
    if ( *off_B06DA8 == 0x53 ) /*0xa1930b*/
      FormHeapFree((unsigned int)off_B06DA8); /*0xa1930e*/
  }
}
