void __cdecl sub_A25CE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14F48); /*0xa25cea*/
  if ( off_B14F4C ) /*0xa25cf6*/
  {
    if ( *off_B14F4C == 0x53 ) /*0xa25cfb*/
      FormHeapFree((unsigned int)off_B14F4C); /*0xa25cfe*/
  }
}
