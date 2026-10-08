_DWORD *__thiscall sub_6FE090(NiRenderer *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  NiRenderer *v3; // edi
  _DWORD *result; // eax
  _DWORD *v5; // ecx
  int vftable; // edi

  v2 = a2; /*0x6fe091*/
  v3 = this; /*0x6fe097*/
  sub_7008A0(this, (signed int)a2); /*0x6fe099*/
  v3 = (NiRenderer *)((char *)v3 + 8); /*0x6fe09e*/
  result = (_DWORD *)sub_713620(v2, (int)v3); /*0x6fe0a4*/
  v5 = (_DWORD *)v2[0x122]; /*0x6fe0a9*/
  vftable = (int)v3->__vftable; /*0x6fe0b1*/
  a2 = 0; /*0x6fe0b3*/
  if ( v5 ) /*0x6fe0bb*/
  {
    if ( vftable ) /*0x6fe0bf*/
    {
      NiTMap_GetAt(v5, vftable, &a2); /*0x6fe0c7*/
      result = a2; /*0x6fe0cc*/
      if ( a2 ) /*0x6fe0d2*/
        return (*(_DWORD *(__thiscall **)(_DWORD *, _DWORD *))(*v2 + 0x24))(v2, a2); /*0x6fe0dc*/
    }
  }
  return result; /*0x6fe0de*/
}
