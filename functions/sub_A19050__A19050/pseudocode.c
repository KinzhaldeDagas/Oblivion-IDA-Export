// [Verified] Removes bUseBlurShader from the setting list and frees its owned name string when marked heap-owned.
void __cdecl Destroy_INISetting_bUseBlurShader()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUseBlurShader); /*0xa1905a*/
  if ( bUseBlurShaderSettingName ) /*0xa19066*/
  {
    if ( *bUseBlurShaderSettingName == 0x53 ) /*0xa1906b*/
      FormHeapFree((unsigned int)bUseBlurShaderSettingName); /*0xa1906e*/
  }
}
