void __cdecl sub_A17BA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B048E4); /*0xa17baa*/
  if ( off_B048E8 ) /*0xa17bb6*/
  {
    if ( *off_B048E8 == 0x53 ) /*0xa17bbb*/
      FormHeapFree((unsigned int)off_B048E8); /*0xa17bbe*/
  }
}
