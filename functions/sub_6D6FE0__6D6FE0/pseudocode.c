int __thiscall sub_6D6FE0(_BYTE *this, unsigned int *a2)
{
  unsigned int *v2; // esi
  void (__cdecl *v4)(unsigned int, unsigned int **, int, int *, int); // eax
  void (__cdecl *v5)(unsigned int, _BYTE *, int, int *, int); // edx
  int (__cdecl *v6)(unsigned int, int *, int, int *, int); // eax
  int result; // eax
  unsigned int v8; // [esp-3Ch] [ebp-4Ch]
  unsigned int v9; // [esp-28h] [ebp-38h]
  unsigned int v10; // [esp-14h] [ebp-24h]
  int v11; // [esp+8h] [ebp-8h] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_6ECB70(a2);
  v10 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v10 + 4);
  v11 = 1;
  v4(v10, &a2, 1, &v11, 1);
  *(this + 0x48) = (_BYTE)a2 != 0;
  v5 = *(void (__cdecl **)(unsigned int, _BYTE *, int, int *, int))(v2[0x87] + 4);
  v9 = v2[0x87];
  v11 = 4;
  v5(v9, this + 0x4C, 4, &v11, 1);
  v8 = v2[0x87];
  v6 = *(int (__cdecl **)(unsigned int, int *, int, int *, int))(v8 + 4);
  v11 = 4;
  result = v6(v8, &v12, 4, &v11, 1);
  *((_DWORD *)this + 0x14) = v12;
  if ( v2[0x36] < 0xA010068 )
    return sub_712A20(v2);
  return result;
}
