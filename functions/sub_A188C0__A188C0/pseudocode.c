void __cdecl sub_A188C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06AB0); /*0xa188ca*/
  if ( off_B06AB4 ) /*0xa188d6*/
  {
    if ( *off_B06AB4 == 0x53 ) /*0xa188db*/
      FormHeapFree((unsigned int)off_B06AB4); /*0xa188de*/
  }
}
