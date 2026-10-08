void __cdecl sub_A16C10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02D68); /*0xa16c1a*/
  if ( off_B02D6C ) /*0xa16c26*/
  {
    if ( *off_B02D6C == 0x53 ) /*0xa16c2b*/
      FormHeapFree((unsigned int)off_B02D6C); /*0xa16c2e*/
  }
}
