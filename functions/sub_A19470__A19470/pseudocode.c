// [Verified] Removes bIsHDR from the setting list and frees its owned name string when the string has heap-owned marker 0x53.
void __cdecl Destroy_INISetting_bIsHDR()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bIsHDR); /*0xa1947a*/
  if ( off_B06DE8 ) /*0xa19486*/
  {
    if ( *off_B06DE8 == 0x53 ) /*0xa1948b*/
      FormHeapFree((unsigned int)off_B06DE8); /*0xa1948e*/
  }
}
