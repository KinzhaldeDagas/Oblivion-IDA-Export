void __cdecl sub_A19920()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EAC); /*0xa1992a*/
  if ( off_B06EB0 ) /*0xa19936*/
  {
    if ( *off_B06EB0 == 0x53 ) /*0xa1993b*/
      FormHeapFree((unsigned int)off_B06EB0); /*0xa1993e*/
  }
}
