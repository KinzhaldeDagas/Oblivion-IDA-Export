void __cdecl sub_A25B00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fJoystickMoveLRMult); /*0xa25b0a*/
  if ( off_B14EFC ) /*0xa25b16*/
  {
    if ( *off_B14EFC == 0x53 ) /*0xa25b1b*/
      FormHeapFree((unsigned int)off_B14EFC); /*0xa25b1e*/
  }
}
