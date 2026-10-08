void __cdecl sub_A18690()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06704); /*0xa1869a*/
  if ( off_B06708 ) /*0xa186a6*/
  {
    if ( *(_BYTE *)off_B06708 == 0x53 ) /*0xa186ab*/
      FormHeapFree((unsigned int)off_B06708); /*0xa186ae*/
  }
}
