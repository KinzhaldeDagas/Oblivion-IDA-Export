void __cdecl sub_A260C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161A0); /*0xa260ca*/
  if ( off_B161A4 ) /*0xa260d6*/
  {
    if ( *off_B161A4 == 0x53 ) /*0xa260db*/
      FormHeapFree((unsigned int)off_B161A4); /*0xa260de*/
  }
}
