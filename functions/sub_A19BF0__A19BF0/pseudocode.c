void __cdecl sub_A19BF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F24); /*0xa19bfa*/
  if ( off_B06F28 ) /*0xa19c06*/
  {
    if ( *off_B06F28 == 0x53 ) /*0xa19c0b*/
      FormHeapFree((unsigned int)off_B06F28); /*0xa19c0e*/
  }
}
