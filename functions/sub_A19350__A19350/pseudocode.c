// [Verified] Removes bForce1XShaders from the setting list and frees its owned name string when the string has heap-owned marker 0x53.
void __cdecl Destroy_INISetting_bForce1XShaders()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bForce1XShaders); /*0xa1935a*/
  if ( bForce1XShadersSettingName ) /*0xa19366*/
  {
    if ( *bForce1XShadersSettingName == 0x53 ) /*0xa1936b*/
      FormHeapFree((unsigned int)bForce1XShadersSettingName); /*0xa1936e*/
  }
}
