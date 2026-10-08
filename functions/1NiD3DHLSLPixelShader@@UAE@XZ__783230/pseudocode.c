void __thiscall NiD3DHLSLPixelShader::~NiD3DHLSLPixelShader(NiD3DHLSLPixelShader *this)
{
  int v2; // eax
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 0xB); /*0x783236*/
  *(_DWORD *)this = &NiD3DHLSLPixelShader::`vftable'; /*0x783237*/
  FormHeapFree(v3); /*0x78323d*/
  FormHeapFree(*((_DWORD *)this + 0xC)); /*0x783246*/
  v2 = *((_DWORD *)this + 0xD); /*0x78324b*/
  if ( v2 ) /*0x783253*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 8))(*((_DWORD *)this + 0xD)); /*0x78325b*/
    *((_DWORD *)this + 0xD) = 0; /*0x78325d*/
  }
  NiD3DPixelShader::~NiD3DPixelShader(this); /*0x783267*/
}
