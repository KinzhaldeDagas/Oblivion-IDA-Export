void __cdecl sub_A17570()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B0340C); /*0xa1757a*/
  if ( off_B03410 ) /*0xa17586*/
  {
    if ( *off_B03410 == 0x53 ) /*0xa1758b*/
      FormHeapFree((unsigned int)off_B03410); /*0xa1758e*/
  }
}
