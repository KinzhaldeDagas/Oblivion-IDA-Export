void __cdecl sub_A263D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1627C); /*0xa263da*/
  if ( off_B16280 ) /*0xa263e6*/
  {
    if ( *off_B16280 == 0x53 ) /*0xa263eb*/
      FormHeapFree((unsigned int)off_B16280); /*0xa263ee*/
  }
}
