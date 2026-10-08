void __cdecl sub_A25B30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fJoystickLookUDMult); /*0xa25b3a*/
  if ( off_B14F04 ) /*0xa25b46*/
  {
    if ( *off_B14F04 == 0x53 ) /*0xa25b4b*/
      FormHeapFree((unsigned int)off_B14F04); /*0xa25b4e*/
  }
}
