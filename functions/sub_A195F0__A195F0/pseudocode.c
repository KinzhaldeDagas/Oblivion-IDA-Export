void __cdecl sub_A195F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E24); /*0xa195fa*/
  if ( off_B06E28 ) /*0xa19606*/
  {
    if ( *off_B06E28 == 0x53 ) /*0xa1960b*/
      FormHeapFree((unsigned int)off_B06E28); /*0xa1960e*/
  }
}
