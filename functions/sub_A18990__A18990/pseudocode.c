void __cdecl sub_A18990()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bDisableWarning_MESSAGES); /*0xa1899a*/
  if ( off_B06B1C ) /*0xa189a6*/
  {
    if ( *off_B06B1C == 0x53 ) /*0xa189ab*/
      FormHeapFree((unsigned int)off_B06B1C); /*0xa189ae*/
  }
}
