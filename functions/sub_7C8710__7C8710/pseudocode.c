// Reloads Oblivion ShadowLightShader programs and re-presets pass families. After virtual vertex/pixel loading, installs 1x pass families or the larger 2x family set according to the observed shader-level selector.
void __thiscall ShadowLightShader__ReloadShaders(void *this)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xA8))(this); /*0x7c871b*/
  sub_820910(); /*0x7c871f*/
  sub_814430(); /*0x7c8726*/
  sub_815DB0(); /*0x7c872d*/
  sub_81AA00(); /*0x7c8734*/
  sub_81B120(); /*0x7c873b*/
  sub_81BCE0(); /*0x7c8742*/
  sub_81D090(); /*0x7c8749*/
  sub_81DC40(); /*0x7c8750*/
  sub_81EA70(); /*0x7c8757*/
  sub_8203D0(); /*0x7c875e*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7c876c*/
  {
    sub_81F330(); /*0x7c87bb*/
  }
  else
  {
    ShadowLightShader_InitializeMultiPointPassPool(); /*0x7c876e*/
    ShadowLightShader_InitializePassPool(); /*0x7c8775*/
    sub_828280(); /*0x7c877c*/
    ShadowLightShader_InitializeAdditivePointPassPool(); /*0x7c8783*/
    sub_832740(); /*0x7c878a*/
    sub_8357B0(); /*0x7c8791*/
    sub_836230(); /*0x7c8798*/
    sub_836810(); /*0x7c879f*/
    sub_839F90(); /*0x7c87a6*/
    sub_83A7E0(); /*0x7c87ad*/
    sub_839A50(); /*0x7c87b5*/
  }
}
