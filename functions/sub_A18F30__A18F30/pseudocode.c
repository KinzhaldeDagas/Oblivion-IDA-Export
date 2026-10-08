void __cdecl sub_A18F30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06D04); /*0xa18f3a*/
  if ( off_B06D08 ) /*0xa18f46*/
  {
    if ( *off_B06D08 == 0x53 ) /*0xa18f4b*/
      FormHeapFree((unsigned int)off_B06D08); /*0xa18f4e*/
  }
}
