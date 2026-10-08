void __cdecl sub_A1BF40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B09B38); /*0xa1bf4a*/
  if ( off_B09B3C ) /*0xa1bf56*/
  {
    if ( *off_B09B3C == 0x53 ) /*0xa1bf5b*/
      FormHeapFree((unsigned int)off_B09B3C); /*0xa1bf5e*/
  }
}
