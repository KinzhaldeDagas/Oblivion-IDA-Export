void __cdecl sub_A18BA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06C6C); /*0xa18baa*/
  if ( off_B06C70 ) /*0xa18bb6*/
  {
    if ( *off_B06C70 == 0x53 ) /*0xa18bbb*/
      FormHeapFree((unsigned int)off_B06C70); /*0xa18bbe*/
  }
}
