void __cdecl sub_A260F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161A8); /*0xa260fa*/
  if ( off_B161AC ) /*0xa26106*/
  {
    if ( *off_B161AC == 0x53 ) /*0xa2610b*/
      FormHeapFree((unsigned int)off_B161AC); /*0xa2610e*/
  }
}
