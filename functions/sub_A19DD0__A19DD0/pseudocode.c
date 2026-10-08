void __cdecl sub_A19DD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06F74); /*0xa19dda*/
  if ( off_B06F78 ) /*0xa19de6*/
  {
    if ( *off_B06F78 == 0x53 ) /*0xa19deb*/
      FormHeapFree((unsigned int)off_B06F78); /*0xa19dee*/
  }
}
