void __cdecl sub_A18C00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&X); /*0xa18c0a*/
  if ( off_B06C80 ) /*0xa18c16*/
  {
    if ( *off_B06C80 == 0x53 ) /*0xa18c1b*/
      FormHeapFree((unsigned int)off_B06C80); /*0xa18c1e*/
  }
}
