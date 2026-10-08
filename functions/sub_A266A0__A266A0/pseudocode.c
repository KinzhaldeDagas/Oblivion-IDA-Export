void __cdecl sub_A266A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B162F4); /*0xa266aa*/
  if ( off_B162F8 ) /*0xa266b6*/
  {
    if ( *off_B162F8 == 0x53 ) /*0xa266bb*/
      FormHeapFree((unsigned int)off_B162F8); /*0xa266be*/
  }
}
