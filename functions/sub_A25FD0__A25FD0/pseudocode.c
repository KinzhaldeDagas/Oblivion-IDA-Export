void __cdecl sub_A25FD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bSoundEnabled_Audio); /*0xa25fda*/
  if ( off_B1617C ) /*0xa25fe6*/
  {
    if ( *off_B1617C == 0x53 ) /*0xa25feb*/
      FormHeapFree((unsigned int)off_B1617C); /*0xa25fee*/
  }
}
