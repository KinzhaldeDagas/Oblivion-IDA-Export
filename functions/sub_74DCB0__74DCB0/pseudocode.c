int __thiscall sub_74DCB0(const char **this, unsigned int a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  int result; // eax
  unsigned int i; // esi
  int v7; // [esp-14h] [ebp-24h]
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_752E40(this, a2);
  a2 = *((unsigned __int16 *)this + 0x11);
  v7 = v2[0x88];
  v4 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v7 + 8);
  v8 = 4;
  result = v4(v7, &a2, 4, &v8, 1);
  for ( i = 0; i < a2; ++i )
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)&(*(this + 7))[4 * i]);
  return result;
}
