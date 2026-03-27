void __thiscall NiD3DHLSLPixelShader::~NiD3DHLSLPixelShader(NiD3DHLSLPixelShader *this)
{
  int v2; // eax
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 0xB);
  *(_DWORD *)this = &NiD3DHLSLPixelShader::`vftable';
  FormHeapFree(v3);
  FormHeapFree(*((_DWORD *)this + 0xC));
  v2 = *((_DWORD *)this + 0xD);
  if ( v2 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 8))(*((_DWORD *)this + 0xD));
    *((_DWORD *)this + 0xD) = 0;
  }
  NiD3DPixelShader::~NiD3DPixelShader(this);
}
