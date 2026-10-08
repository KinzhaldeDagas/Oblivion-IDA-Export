void __cdecl sub_A19590()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E14); /*0xa1959a*/
  if ( off_B06E18 ) /*0xa195a6*/
  {
    if ( *off_B06E18 == 0x53 ) /*0xa195ab*/
      FormHeapFree((unsigned int)off_B06E18); /*0xa195ae*/
  }
}
