void __cdecl sub_A19290()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D94); /*0xa1929a*/
  if ( off_B06D98 ) /*0xa192a6*/
  {
    if ( *off_B06D98 == 0x53 ) /*0xa192ab*/
      FormHeapFree((unsigned int)off_B06D98); /*0xa192ae*/
  }
}
