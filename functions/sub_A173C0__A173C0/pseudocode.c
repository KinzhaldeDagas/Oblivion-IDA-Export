void __cdecl sub_A173C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B03164); /*0xa173ca*/
  if ( off_B03168 ) /*0xa173d6*/
  {
    if ( *off_B03168 == 0x53 ) /*0xa173db*/
      FormHeapFree((unsigned int)off_B03168); /*0xa173de*/
  }
}
