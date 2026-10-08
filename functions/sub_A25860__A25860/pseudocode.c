void __cdecl sub_A25860()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14E88); /*0xa2586a*/
  if ( off_B14E8C ) /*0xa25876*/
  {
    if ( *off_B14E8C == 0x53 ) /*0xa2587b*/
      FormHeapFree((unsigned int)off_B14E8C); /*0xa2587e*/
  }
}
