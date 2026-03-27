_DWORD *__thiscall sub_76F520(_DWORD *this)
{
  _DWORD *result; // eax
  int i; // ecx
  int v3; // esi

  result = this;
  *(this + 1) = &NiTArray<unsigned int (__cdecl *)(NiD3DShaderDeclaration::PackingParameters &)>::`vftable';
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 9) = 1;
  *((_WORD *)this + 7) = 0;
  *((_WORD *)this + 8) = 0;
  *(this + 2) = 0;
  *this = 0x11;
  for ( i = 0; (unsigned __int16)i < *((_WORD *)result + 7); *(_DWORD *)(result[2] + 4 * v3) = 0 )
    v3 = (unsigned __int16)i++;
  *((_WORD *)result + 7) = 0;
  *((_WORD *)result + 8) = 0;
  return result;
}
