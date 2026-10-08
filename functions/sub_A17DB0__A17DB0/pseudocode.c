void __cdecl sub_A17DB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B051F4); /*0xa17dba*/
  if ( off_B051F8 ) /*0xa17dc6*/
  {
    if ( *off_B051F8 == 0x53 ) /*0xa17dcb*/
      FormHeapFree((unsigned int)off_B051F8); /*0xa17dce*/
  }
}
