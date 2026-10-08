// Remove and release the bFixFaceNormals setting during normal process shutdown.
void __cdecl Destroy_bFixFaceNormalsSetting()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bFixFaceNormals); /*0xa2334a*/
  if ( s_bFixFaceNormalsSettingName ) /*0xa23356*/
  {
    if ( *s_bFixFaceNormalsSettingName == 0x53 ) /*0xa2335b*/
      FormHeapFree((unsigned int)s_bFixFaceNormalsSettingName); /*0xa2335e*/
  }
}
