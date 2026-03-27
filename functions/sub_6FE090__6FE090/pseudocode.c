_DWORD *__thiscall sub_6FE090(NiRenderer *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int *v3; // edi
  _DWORD *result; // eax
  _DWORD *v5; // ecx
  int v6; // edi

  v2 = a2;
  v3 = (int *)this;
  sub_7008A0(this, (signed int)a2);
  v3 += 2;
  result = (_DWORD *)sub_713620(v2, v3);
  v5 = (_DWORD *)v2[0x122];
  v6 = *v3;
  a2 = 0;
  if ( v5 )
  {
    if ( v6 )
    {
      NiTMap_GetAt(v5, v6, &a2);
      result = a2;
      if ( a2 )
        return (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v2 + 0x24))(v2, a2);
    }
  }
  return result;
}
