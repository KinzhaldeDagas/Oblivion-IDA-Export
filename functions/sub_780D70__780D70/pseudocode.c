// MoonSugarEffect decode: NiD3DPixelShader D3D handle setter, stores wrapper +0x28 IDirect3DPixelShader9* after CreatePixelShader.
void *__thiscall NiD3DPixelShader_SetD3DHandle(void *this, void *shaderHandle)
{
  *((_DWORD *)this + 0xA) = shaderHandle; /*0x780d74*/
  return shaderHandle; /*0x780d77*/
}
