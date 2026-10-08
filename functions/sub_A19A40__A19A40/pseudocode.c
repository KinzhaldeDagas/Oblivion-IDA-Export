void __cdecl sub_A19A40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EDC); /*0xa19a4a*/
  if ( off_B06EE0 ) /*0xa19a56*/
  {
    if ( *off_B06EE0 == 0x53 ) /*0xa19a5b*/
      FormHeapFree((unsigned int)off_B06EE0); /*0xa19a5e*/
  }
}
