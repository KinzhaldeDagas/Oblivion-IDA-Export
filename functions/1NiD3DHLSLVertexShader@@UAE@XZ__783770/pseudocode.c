void __thiscall NiD3DHLSLVertexShader::~NiD3DHLSLVertexShader(NiD3DHLSLVertexShader *this)
{
  int v2; // eax
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 0xE);
  *(_DWORD *)this = &NiD3DHLSLVertexShader::`vftable';
  FormHeapFree(v3);
  FormHeapFree(*((_DWORD *)this + 0xF));
  v2 = *((_DWORD *)this + 0x10);
  if ( v2 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 8))(*((_DWORD *)this + 0x10));
    *((_DWORD *)this + 0x10) = 0;
  }
  NiD3DVertexShader::~NiD3DVertexShader(this);
}
