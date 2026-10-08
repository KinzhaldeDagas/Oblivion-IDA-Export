void __cdecl sub_A17150()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B030AC); /*0xa1715a*/
  if ( off_B030B0 ) /*0xa17166*/
  {
    if ( *off_B030B0 == 0x53 ) /*0xa1716b*/
      FormHeapFree((unsigned int)off_B030B0); /*0xa1716e*/
  }
}
