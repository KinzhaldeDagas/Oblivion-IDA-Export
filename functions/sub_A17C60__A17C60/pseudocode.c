void __cdecl sub_A17C60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B05148); /*0xa17c6a*/
  if ( off_B0514C ) /*0xa17c76*/
  {
    if ( *off_B0514C == 0x53 ) /*0xa17c7b*/
      FormHeapFree((unsigned int)off_B0514C); /*0xa17c7e*/
  }
}
