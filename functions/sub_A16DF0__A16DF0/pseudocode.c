void __cdecl sub_A16DF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DB8); /*0xa16dfa*/
  if ( off_B02DBC ) /*0xa16e06*/
  {
    if ( *off_B02DBC == 0x53 ) /*0xa16e0b*/
      FormHeapFree((unsigned int)off_B02DBC); /*0xa16e0e*/
  }
}
