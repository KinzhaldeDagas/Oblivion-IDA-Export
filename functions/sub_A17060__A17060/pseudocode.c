void __cdecl sub_A17060()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&lpParameter); /*0xa1706a*/
  if ( off_B03088[0] ) /*0xa17076*/
  {
    if ( *off_B03088[0] == 0x53 ) /*0xa1707b*/
      FormHeapFree((unsigned int)off_B03088[0]); /*0xa1707e*/
  }
}
