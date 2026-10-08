void __cdecl sub_A16EB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&lpCaption); /*0xa16eba*/
  if ( off_B02DDC[0] ) /*0xa16ec6*/
  {
    if ( *off_B02DDC[0] == 0x53 ) /*0xa16ecb*/
      FormHeapFree((unsigned int)off_B02DDC[0]); /*0xa16ece*/
  }
}
