void __cdecl sub_A19800()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E7C); /*0xa1980a*/
  if ( off_B06E80 ) /*0xa19816*/
  {
    if ( *off_B06E80 == 0x53 ) /*0xa1981b*/
      FormHeapFree((unsigned int)off_B06E80); /*0xa1981e*/
  }
}
