void __cdecl sub_A1A820()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B07614); /*0xa1a82a*/
  if ( off_B07618 ) /*0xa1a836*/
  {
    if ( *off_B07618 == 0x53 ) /*0xa1a83b*/
      FormHeapFree((unsigned int)off_B07618); /*0xa1a83e*/
  }
}
