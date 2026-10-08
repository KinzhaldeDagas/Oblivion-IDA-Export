void sub_7B8400()
{
  NiD3DShaderDeclaration **v0; // eax
  volatile LONG *v1; // esi

  v0 = *(NiD3DShaderDeclaration ***)&OB_RendererGlobalState_010201A0.pad_00D[0x3E]; /*0x7b8400*/
  if ( *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x3E] /*0x7b8415*/
    || (v0 = DebugShader(), (*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x3E] = v0) != 0) )
  {
    v1 = (volatile LONG *)v0[1]; /*0x7b8418*/
    if ( !v1 ) /*0x7b841d*/
      nullsub_return0_0arg(); /*0x7b842a*/
    sub_7F9D10(v1, 0); /*0x7b8436*/
  }
}
