void __cdecl sub_A19410()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06DD4); /*0xa1941a*/
  if ( off_B06DD8 ) /*0xa19426*/
  {
    if ( *off_B06DD8 == 0x53 ) /*0xa1942b*/
      FormHeapFree((unsigned int)off_B06DD8); /*0xa1942e*/
  }
}
