void __thiscall NiD3DHLSLVertexShader::~NiD3DHLSLVertexShader(NiD3DHLSLVertexShader *this)
{
  int v2; // eax
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 0xE); /*0x783776*/
  *(_DWORD *)this = &NiD3DHLSLVertexShader::`vftable'; /*0x783777*/
  FormHeapFree(v3); /*0x78377d*/
  FormHeapFree(*((_DWORD *)this + 0xF)); /*0x783786*/
  v2 = *((_DWORD *)this + 0x10); /*0x78378b*/
  if ( v2 ) /*0x783793*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 8))(*((_DWORD *)this + 0x10)); /*0x78379b*/
    *((_DWORD *)this + 0x10) = 0; /*0x78379d*/
  }
  NiD3DVertexShader::~NiD3DVertexShader(this); /*0x7837a7*/
}
