NiD3DShaderDeclaration *__thiscall sub_771100(NiD3DShaderDeclaration *this, char a2)
{
  int v3; // eax
  unsigned int v5; // [esp-4h] [ebp-8h]

  v5 = *((_DWORD *)this + 0xB); /*0x771106*/
  this->__vftable = (#9279 *)&NiDX9ShaderDeclaration::`vftable'; /*0x771107*/
  FormHeapFree(v5); /*0x77110d*/
  v3 = *((_DWORD *)this + 0xC); /*0x771112*/
  if ( v3 ) /*0x77111a*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)this + 0xC)); /*0x771122*/
    *((_DWORD *)this + 0xC) = 0; /*0x771124*/
  }
  NiD3DShaderDeclaration::~NiD3DShaderDeclaration(this); /*0x77112d*/
  if ( (a2 & 1) != 0 ) /*0x771137*/
    FormHeapFree((unsigned int)this); /*0x77113a*/
  return this; /*0x771144*/
}
