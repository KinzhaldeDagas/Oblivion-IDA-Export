// Shutdown/removal path for bDoStaticAndArchShadows:Display setting.
void __cdecl sub_A18ED0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_bDoStaticAndArchShadowsSetting); /*0xa18eda*/
  if ( off_B06CF8 ) /*0xa18ee6*/
  {
    if ( *off_B06CF8 == 0x53 ) /*0xa18eeb*/
      FormHeapFree((unsigned int)off_B06CF8); /*0xa18eee*/
  }
}
