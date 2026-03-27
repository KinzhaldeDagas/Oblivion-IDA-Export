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

  v2 = a2;
  sub_717920(this, (signed int)a2);
  LOBYTE(a2) = *(this + 0xC0);
  v10 = v2[0x88];
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v10 + 8);
  v11 = 1;
  v4(v10, &a2, 1, &v11, 1);
  v5 = v2[0x88];
  v12 = *((_DWORD *)this + 0x34);
  v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v5 + 8);
  v11 = 4;
  result = v6(v5, &v12, 4, &v11, 1);
  for ( i = *((_DWORD **)this + 0x32); i; result = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v9) )
  {
    v9 = i[2];
    i = (_DWORD *)*i;
  }
  return result;
}
