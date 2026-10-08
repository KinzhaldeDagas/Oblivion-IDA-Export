void __cdecl sub_A19A10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06ED4); /*0xa19a1a*/
  if ( off_B06ED8 ) /*0xa19a26*/
  {
    if ( *off_B06ED8 == 0x53 ) /*0xa19a2b*/
      FormHeapFree((unsigned int)off_B06ED8); /*0xa19a2e*/
  }
}
