void __cdecl sub_A17DE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B051FC); /*0xa17dea*/
  if ( off_B05200 ) /*0xa17df6*/
  {
    if ( *off_B05200 == 0x53 ) /*0xa17dfb*/
      FormHeapFree((unsigned int)off_B05200); /*0xa17dfe*/
  }
}
