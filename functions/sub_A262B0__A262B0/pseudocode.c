void __cdecl sub_A262B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1624C); /*0xa262ba*/
  if ( off_B16250 ) /*0xa262c6*/
  {
    if ( *off_B16250 == 0x53 ) /*0xa262cb*/
      FormHeapFree((unsigned int)off_B16250); /*0xa262ce*/
  }
}
