void __cdecl sub_A24820()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B135F8); /*0xa2482a*/
  if ( off_B135FC ) /*0xa24836*/
  {
    if ( *off_B135FC == 0x53 ) /*0xa2483b*/
      FormHeapFree((unsigned int)off_B135FC); /*0xa2483e*/
  }
}
