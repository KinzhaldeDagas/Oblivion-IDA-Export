void __cdecl sub_A1C200()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B10CA0); /*0xa1c20a*/
  if ( off_B10CA4[0] ) /*0xa1c216*/
  {
    if ( *off_B10CA4[0] == 0x53 ) /*0xa1c21b*/
      FormHeapFree((unsigned int)off_B10CA4[0]); /*0xa1c21e*/
  }
}
