void __cdecl sub_A257B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14E34); /*0xa257ba*/
  if ( off_B14E38 ) /*0xa257c6*/
  {
    if ( *off_B14E38 == 0x53 ) /*0xa257cb*/
      FormHeapFree((unsigned int)off_B14E38); /*0xa257ce*/
  }
}
