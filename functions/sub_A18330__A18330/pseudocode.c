void __cdecl sub_A18330()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B055C4); /*0xa1833a*/
  if ( off_B055C8 ) /*0xa18346*/
  {
    if ( *off_B055C8 == 0x53 ) /*0xa1834b*/
      FormHeapFree((unsigned int)off_B055C8); /*0xa1834e*/
  }
}
