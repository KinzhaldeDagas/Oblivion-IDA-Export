void __cdecl sub_A25AD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fJoystickMoveFBMult); /*0xa25ada*/
  if ( off_B14EF4 ) /*0xa25ae6*/
  {
    if ( *off_B14EF4 == 0x53 ) /*0xa25aeb*/
      FormHeapFree((unsigned int)off_B14EF4); /*0xa25aee*/
  }
}
