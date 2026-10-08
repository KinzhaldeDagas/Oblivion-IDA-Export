void __cdecl sub_A253B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B148EC); /*0xa253ba*/
  if ( off_B148F0 ) /*0xa253c6*/
  {
    if ( *off_B148F0 == 0x53 ) /*0xa253cb*/
      FormHeapFree((unsigned int)off_B148F0); /*0xa253ce*/
  }
}
