int __thiscall sub_708EB0(int *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int result; // eax
  int (__cdecl *v5)(int, _DWORD **, int, int *, int); // eax
  int (__cdecl *v6)(int, _DWORD **, int, int *, int); // edx
  int i; // edi
  int (__cdecl *v8)(int, _BYTE *, int, int *, int); // eax
  int v9; // [esp-14h] [ebp-24h]
  int v10; // [esp-14h] [ebp-24h]
  int v11; // [esp-14h] [ebp-24h]
  int v12; // [esp+8h] [ebp-8h] BYREF
  _BYTE v13[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  result = sub_707F00(this, (int)a2);
  if ( v2[0x36] >= 0xA010066u )
  {
    v9 = v2[0x87];
    v5 = *(int (__cdecl **)(int, _DWORD **, int, int *, int))(v9 + 4);
    v12 = 1;
    result = v5(v9, &a2, 1, &v12, 1);
    *((_BYTE *)this + 0xAC) = (_BYTE)a2 != 0;
  }
  if ( v2[0x36] < 0x4010000u )
  {
    v6 = *(int (__cdecl **)(int, _DWORD **, int, int *, int))(v2[0x87] + 4);
    v10 = v2[0x87];
    v12 = 4;
    result = v6(v10, &a2, 4, &v12, 1);
    for ( i = 0; i < (int)a2; ++i )
    {
      v11 = v2[0x87];
      v8 = *(int (__cdecl **)(int, _BYTE *, int, int *, int))(v11 + 4);
      v12 = 4;
      result = v8(v11, v13, 4, &v12, 1);
    }
  }
  if ( v2[0x36] >= 0xA00010Eu )
    return sub_712AE0(v2);
  return result;
}
