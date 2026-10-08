void __cdecl sub_A19C50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F34); /*0xa19c5a*/
  if ( off_B06F38 ) /*0xa19c66*/
  {
    if ( *off_B06F38 == 0x53 ) /*0xa19c6b*/
      FormHeapFree((unsigned int)off_B06F38); /*0xa19c6e*/
  }
}
