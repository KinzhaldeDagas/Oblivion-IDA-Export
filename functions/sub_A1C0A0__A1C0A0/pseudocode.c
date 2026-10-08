void __cdecl sub_A1C0A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B09E28); /*0xa1c0aa*/
  if ( off_B09E2C[0] ) /*0xa1c0b6*/
  {
    if ( *off_B09E2C[0] == 0x53 ) /*0xa1c0bb*/
      FormHeapFree((unsigned int)off_B09E2C[0]); /*0xa1c0be*/
  }
}
