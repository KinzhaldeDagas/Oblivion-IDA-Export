void __cdecl sub_A164F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02C4C); /*0xa164fa*/
  if ( off_B02C50 ) /*0xa16506*/
  {
    if ( *off_B02C50 == 0x53 ) /*0xa1650b*/
      FormHeapFree((unsigned int)off_B02C50); /*0xa1650e*/
  }
}
