void __cdecl sub_A258C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14E98); /*0xa258ca*/
  if ( off_B14E9C ) /*0xa258d6*/
  {
    if ( *off_B14E9C == 0x53 ) /*0xa258db*/
      FormHeapFree((unsigned int)off_B14E9C); /*0xa258de*/
  }
}
