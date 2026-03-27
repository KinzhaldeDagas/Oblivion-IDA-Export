NiD3DShaderDeclaration *__thiscall sub_771100(NiD3DShaderDeclaration *this, char a2)
{
  int v3; // eax
  unsigned int v5; // [esp-4h] [ebp-8h]

  v5 = *((_DWORD *)this + 0xB);
  this->__vftable = (#9279 *)&NiDX9ShaderDeclaration::`vftable';
  FormHeapFree(v5);
  v3 = *((_DWORD *)this + 0xC);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)this + 0xC));
    *((_DWORD *)this + 0xC) = 0;
  }
  NiD3DShaderDeclaration::~NiD3DShaderDeclaration(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
