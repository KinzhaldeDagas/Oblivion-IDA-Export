void __cdecl sub_A17C00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B048F4); /*0xa17c0a*/
  if ( off_B048F8[0] ) /*0xa17c16*/
  {
    if ( *off_B048F8[0] == 0x53 ) /*0xa17c1b*/
      FormHeapFree((unsigned int)off_B048F8[0]); /*0xa17c1e*/
  }
}
