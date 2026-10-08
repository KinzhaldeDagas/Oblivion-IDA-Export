void __cdecl sub_A25C80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bInvertYValues); /*0xa25c8a*/
  if ( off_B14F3C ) /*0xa25c96*/
  {
    if ( *off_B14F3C == 0x53 ) /*0xa25c9b*/
      FormHeapFree((unsigned int)off_B14F3C); /*0xa25c9e*/
  }
}
