void __cdecl sub_A25A10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iJoystickMoveLeftRight); /*0xa25a1a*/
  if ( off_B14ED4 ) /*0xa25a26*/
  {
    if ( *off_B14ED4 == 0x53 ) /*0xa25a2b*/
      FormHeapFree((unsigned int)off_B14ED4); /*0xa25a2e*/
  }
}
