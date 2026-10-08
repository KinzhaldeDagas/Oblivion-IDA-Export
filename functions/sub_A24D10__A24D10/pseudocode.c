void __cdecl sub_A24D10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14170); /*0xa24d1a*/
  if ( off_B14174[0] ) /*0xa24d26*/
  {
    if ( *off_B14174[0] == 0x53 ) /*0xa24d2b*/
      FormHeapFree((unsigned int)off_B14174[0]); /*0xa24d2e*/
  }
}
