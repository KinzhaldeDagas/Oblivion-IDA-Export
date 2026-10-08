void __cdecl sub_A18F90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bAllowScreenShot); /*0xa18f9a*/
  if ( off_B06D18 ) /*0xa18fa6*/
  {
    if ( *off_B06D18 == 0x53 ) /*0xa18fab*/
      FormHeapFree((unsigned int)off_B06D18); /*0xa18fae*/
  }
}
