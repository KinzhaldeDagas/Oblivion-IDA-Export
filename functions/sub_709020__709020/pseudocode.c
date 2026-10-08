int __thiscall sub_709020(char *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  int v5; // eax
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  int result; // eax
  int i; // esi
  int v9; // eax
  int v10; // [esp-14h] [ebp-24h]
  int v11; // [esp+8h] [ebp-8h] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x709025*/
  sub_708330(this, (signed int)a2); /*0x70902c*/
  LOBYTE(a2) = *(this + 0xAC); /*0x70903e*/
  v10 = v2[0x88]; /*0x70904f*/
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v10 + 8); /*0x709050*/
  v12 = 1; /*0x709053*/
  v4(v10, &a2, 1, &v12, 1); /*0x70905b*/
  v5 = v2[0x88]; /*0x709063*/
  v11 = *((_DWORD *)this + 0x36); /*0x709070*/
  v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v5 + 8); /*0x709074*/
  v12 = 4; /*0x70907f*/
  result = v6(v5, &v11, 4, &v12, 1); /*0x709087*/
  if ( v11 > 0 ) /*0x709091*/
  {
    for ( i = *((_DWORD *)this + 0x35); i; result = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v9) ) /*0x70909b*/
    {
      v9 = *(_DWORD *)(i + 8); /*0x7090a8*/
      i = *(_DWORD *)(i + 4); /*0x7090aa*/
    }
  }
  return result; /*0x7090b6*/
}
