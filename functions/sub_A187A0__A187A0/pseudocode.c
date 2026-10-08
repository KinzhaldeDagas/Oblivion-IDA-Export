void __cdecl sub_A187A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&uGridsToLoad); /*0xa187aa*/
  if ( off_B06A30[0] ) /*0xa187b6*/
  {
    if ( *off_B06A30[0] == 0x53 ) /*0xa187bb*/
      FormHeapFree((unsigned int)off_B06A30[0]); /*0xa187be*/
  }
}
