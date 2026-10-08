void __cdecl sub_A1A850()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&SettingLODFadeOutMultObjects); /*0xa1a85a*/
  if ( off_B07620 ) /*0xa1a866*/
  {
    if ( *off_B07620 == 0x53 ) /*0xa1a86b*/
      FormHeapFree((unsigned int)off_B07620); /*0xa1a86e*/
  }
}
