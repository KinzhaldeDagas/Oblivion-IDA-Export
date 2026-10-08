void __cdecl sub_A24F60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1481C); /*0xa24f6a*/
  if ( off_B14820 ) /*0xa24f76*/
  {
    if ( *off_B14820 == 0x53 ) /*0xa24f7b*/
      FormHeapFree((unsigned int)off_B14820); /*0xa24f7e*/
  }
}
