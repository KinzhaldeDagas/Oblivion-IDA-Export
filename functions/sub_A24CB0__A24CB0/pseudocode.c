void __cdecl sub_A24CB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14160); /*0xa24cba*/
  if ( off_B14164 ) /*0xa24cc6*/
  {
    if ( *off_B14164 == 0x53 ) /*0xa24ccb*/
      FormHeapFree((unsigned int)off_B14164); /*0xa24cce*/
  }
}
