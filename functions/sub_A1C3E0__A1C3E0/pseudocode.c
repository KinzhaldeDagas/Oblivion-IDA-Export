void __cdecl sub_A1C3E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)mp3String); /*0xa1c3ea*/
  if ( off_B10D64[0] ) /*0xa1c3f6*/
  {
    if ( *off_B10D64[0] == 0x53 ) /*0xa1c3fb*/
      FormHeapFree((unsigned int)off_B10D64[0]); /*0xa1c3fe*/
  }
}
