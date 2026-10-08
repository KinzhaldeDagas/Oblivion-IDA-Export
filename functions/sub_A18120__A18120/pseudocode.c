void __cdecl sub_A18120()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B0556C); /*0xa1812a*/
  if ( off_B05570[0] ) /*0xa18136*/
  {
    if ( *off_B05570[0] == 0x53 ) /*0xa1813b*/
      FormHeapFree((unsigned int)off_B05570[0]); /*0xa1813e*/
  }
}
