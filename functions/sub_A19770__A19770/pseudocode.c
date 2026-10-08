void __cdecl sub_A19770()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E64); /*0xa1977a*/
  if ( off_B06E68 ) /*0xa19786*/
  {
    if ( *off_B06E68 == 0x53 ) /*0xa1978b*/
      FormHeapFree((unsigned int)off_B06E68); /*0xa1978e*/
  }
}
