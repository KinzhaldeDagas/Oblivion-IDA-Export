void __cdecl sub_A259E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iJoystickMoveFrontBack); /*0xa259ea*/
  if ( off_B14ECC ) /*0xa259f6*/
  {
    if ( *off_B14ECC == 0x53 ) /*0xa259fb*/
      FormHeapFree((unsigned int)off_B14ECC); /*0xa259fe*/
  }
}
