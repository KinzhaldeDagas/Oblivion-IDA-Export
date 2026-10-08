void __cdecl sub_A264C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B162A4); /*0xa264ca*/
  if ( off_B162A8 ) /*0xa264d6*/
  {
    if ( *off_B162A8 == 0x53 ) /*0xa264db*/
      FormHeapFree((unsigned int)off_B162A8); /*0xa264de*/
  }
}
