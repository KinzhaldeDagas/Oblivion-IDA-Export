void __cdecl sub_A24850()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B13600); /*0xa2485a*/
  if ( off_B13604 ) /*0xa24866*/
  {
    if ( *off_B13604 == 0x53 ) /*0xa2486b*/
      FormHeapFree((unsigned int)off_B13604); /*0xa2486e*/
  }
}
