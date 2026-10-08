int __thiscall sub_749C00(char *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  int v5; // eax
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  int result; // eax
  _DWORD *i; // esi
  int v9; // eax
  int v10; // [esp-14h] [ebp-24h]
  int v11; // [esp+8h] [ebp-8h] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x749c05*/
  sub_717920(this, a2); /*0x749c0c*/
  LOBYTE(a2) = *(this + 0xC0); /*0x749c1e*/
  v10 = v2[0x88]; /*0x749c2f*/
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v10 + 8); /*0x749c30*/
  v11 = 1; /*0x749c33*/
  v4(v10, &a2, 1, &v11, 1); /*0x749c3b*/
  v5 = v2[0x88]; /*0x749c43*/
  v12 = *((_DWORD *)this + 0x34); /*0x749c50*/
  v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v5 + 8); /*0x749c54*/
  v11 = 4; /*0x749c5f*/
  result = v6(v5, &v12, 4, &v11, 1); /*0x749c67*/
  for ( i = *((_DWORD **)this + 0x32); i; result = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v9) ) /*0x749c74*/
  {
    v9 = i[2]; /*0x749c7e*/
    i = (_DWORD *)*i; /*0x749c80*/
  }
  return result; /*0x749c8b*/
}
