void __cdecl sub_A186E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aHsz_fG); /*0xa186ea*/
  if ( off_B068CC ) /*0xa186f6*/
  {
    if ( *off_B068CC == 0x53 ) /*0xa186fb*/
      FormHeapFree((unsigned int)off_B068CC); /*0xa186fe*/
  }
}
