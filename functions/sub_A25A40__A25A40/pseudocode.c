void __cdecl sub_A25A40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iJoystickLookUpDown); /*0xa25a4a*/
  if ( off_B14EDC ) /*0xa25a56*/
  {
    if ( *off_B14EDC == 0x53 ) /*0xa25a5b*/
      FormHeapFree((unsigned int)off_B14EDC); /*0xa25a5e*/
  }
}
