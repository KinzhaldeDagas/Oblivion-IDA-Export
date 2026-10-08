//
// [2026-10-03 corrected identity] This is the NiD3DVertexShader GPU-handle setter, virtual+44, not HighProcess::SetUnk030. Verified native CreateVertexShader8014E0 passes its D3D9 result here; handle stored+30.
void *__thiscall NiD3DVertexShader_SetD3DHandle(void *this, void *shaderHandle)
{
  *((_DWORD *)this + 0xC) = shaderHandle; /*0x780df4*/
  return shaderHandle; /*0x780df7*/
}
