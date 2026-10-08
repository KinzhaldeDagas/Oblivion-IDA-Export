void __cdecl sub_A25A70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iJoystickLookLeftRight); /*0xa25a7a*/
  if ( off_B14EE4 ) /*0xa25a86*/
  {
    if ( *off_B14EE4 == 0x53 ) /*0xa25a8b*/
      FormHeapFree((unsigned int)off_B14EE4); /*0xa25a8e*/
  }
}
