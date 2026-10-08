void __cdecl sub_A18BD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_bFullScreen); /*0xa18bda*/
  if ( off_B06C78 ) /*0xa18be6*/
  {
    if ( *off_B06C78 == 0x53 ) /*0xa18beb*/
      FormHeapFree((unsigned int)off_B06C78); /*0xa18bee*/
  }
}
