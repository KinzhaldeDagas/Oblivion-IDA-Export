void __cdecl sub_A17FE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B0524C); /*0xa17fea*/
  if ( off_B05250 ) /*0xa17ff6*/
  {
    if ( *off_B05250 == 0x53 ) /*0xa17ffb*/
      FormHeapFree((unsigned int)off_B05250); /*0xa17ffe*/
  }
}
