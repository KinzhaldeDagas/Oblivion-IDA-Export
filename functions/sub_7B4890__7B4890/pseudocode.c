// Update the global renderer mode used by mode-5 shadow-map production and restore.
void __cdecl BSShader_SetRenderMode(unsigned __int16 a1)
{
  if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0x13] == 4 ) /*0x7b489d*/
  {
    if ( a1 == 4 ) /*0x7b48bd*/
    {
      *(_DWORD *)&OB_RendererGlobalState_010201A0[0x13] = 4; /*0x7b48d7*/
    }
    else
    {
      sub_7AB1D0(0); /*0x7b48c1*/
      *(_DWORD *)&OB_RendererGlobalState_010201A0[0x13] = a1; /*0x7b48cc*/
    }
  }
  else
  {
    if ( a1 == 4 ) /*0x7b48a3*/
      sub_7AB1D0(1); /*0x7b48a7*/
    *(_DWORD *)&OB_RendererGlobalState_010201A0[0x13] = a1; /*0x7b48b2*/
  }
}
