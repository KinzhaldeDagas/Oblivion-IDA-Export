void __cdecl sub_A1A880()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingLODFadeOutMultItems); /*0xa1a88a*/
  if ( off_B07628 ) /*0xa1a896*/
  {
    if ( *off_B07628 == 0x53 ) /*0xa1a89b*/
      FormHeapFree((unsigned int)off_B07628); /*0xa1a89e*/
  }
}
