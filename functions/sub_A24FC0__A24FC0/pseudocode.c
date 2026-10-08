void __cdecl sub_A24FC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1482C); /*0xa24fca*/
  if ( off_B14830 ) /*0xa24fd6*/
  {
    if ( *off_B14830 == 0x53 ) /*0xa24fdb*/
      FormHeapFree((unsigned int)off_B14830); /*0xa24fde*/
  }
}
