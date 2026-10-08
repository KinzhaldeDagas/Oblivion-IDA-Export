_DWORD *__thiscall sub_76F520(_DWORD *this)
{
  _DWORD *result; // eax
  int i; // ecx
  int v3; // esi

  result = this; /*0x76f520*/
  *(this + 1) = &NiTArray<unsigned int (__cdecl *)(NiD3DShaderDeclaration::PackingParameters &)>::`vftable'; /*0x76f524*/
  *((_WORD *)this + 6) = 0; /*0x76f52b*/
  *((_WORD *)this + 9) = 1; /*0x76f52f*/
  *((_WORD *)this + 7) = 0; /*0x76f535*/
  *((_WORD *)this + 8) = 0; /*0x76f539*/
  *(this + 2) = 0; /*0x76f53d*/
  *this = 0x11; /*0x76f540*/
  for ( i = 0; (unsigned __int16)i < *((_WORD *)result + 7); *(_DWORD *)(result[2] + 4 * v3) = 0 ) /*0x76f548*/
    v3 = (unsigned __int16)i++; /*0x76f553*/
  *((_WORD *)result + 7) = 0; /*0x76f564*/
  *((_WORD *)result + 8) = 0; /*0x76f568*/
  return result; /*0x76f56c*/
}
