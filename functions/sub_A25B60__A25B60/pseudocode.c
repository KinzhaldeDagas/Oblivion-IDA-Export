void __cdecl sub_A25B60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fJoystickLookLRMult); /*0xa25b6a*/
  if ( off_B14F0C ) /*0xa25b76*/
  {
    if ( *off_B14F0C == 0x53 ) /*0xa25b7b*/
      FormHeapFree((unsigned int)off_B14F0C); /*0xa25b7e*/
  }
}
