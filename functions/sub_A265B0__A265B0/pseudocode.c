void __cdecl sub_A265B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B162CC); /*0xa265ba*/
  if ( off_B162D0 ) /*0xa265c6*/
  {
    if ( *off_B162D0 == 0x53 ) /*0xa265cb*/
      FormHeapFree((unsigned int)off_B162D0); /*0xa265ce*/
  }
}
