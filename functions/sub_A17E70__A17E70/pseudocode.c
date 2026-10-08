void __cdecl sub_A17E70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fMoveMassLimit); /*0xa17e7a*/
  if ( off_B05218 ) /*0xa17e86*/
  {
    if ( *off_B05218 == 0x53 ) /*0xa17e8b*/
      FormHeapFree((unsigned int)off_B05218); /*0xa17e8e*/
  }
}
