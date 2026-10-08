void __cdecl sub_A25FA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B15A68); /*0xa25faa*/
  if ( off_B15A6C[0] ) /*0xa25fb6*/
  {
    if ( *off_B15A6C[0] == 0x53 ) /*0xa25fbb*/
      FormHeapFree((unsigned int)off_B15A6C[0]); /*0xa25fbe*/
  }
}
