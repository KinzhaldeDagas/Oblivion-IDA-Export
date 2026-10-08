void __cdecl sub_A1BE20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bGrassPointLightening); /*0xa1be2a*/
  if ( off_B09B0C ) /*0xa1be36*/
  {
    if ( *off_B09B0C == 0x53 ) /*0xa1be3b*/
      FormHeapFree((unsigned int)off_B09B0C); /*0xa1be3e*/
  }
}
