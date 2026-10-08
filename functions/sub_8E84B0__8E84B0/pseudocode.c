int __cdecl sub_8E84B0(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int result; // eax
  void (__cdecl *v6)(int, _BYTE *, int, int *, int); // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // ecx
  int v10; // [esp-14h] [ebp-54h]
  int v11; // [esp-14h] [ebp-54h]
  int v12; // [esp+18h] [ebp-28h] BYREF
  int v13; // [esp+1Ch] [ebp-24h] BYREF
  _BYTE v14[32]; // [esp+20h] [ebp-20h] BYREF

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0x25); /*0x8e84d1*/
  *(_WORD *)(v2 + 4) = 0x30; /*0x8e84d3*/
  *(_WORD *)(v2 + 6) = 1; /*0x8e84d9*/
  *(_DWORD *)v2 = &hkMoppCode::`vftable'; /*0x8e84df*/
  *(_DWORD *)(v2 + 0x28) = 0x80000000; /*0x8e84e7*/
  *(_DWORD *)(v2 + 0x20) = 0; /*0x8e84f0*/
  *(_DWORD *)(v2 + 0x24) = 0; /*0x8e84f3*/
  *(_OWORD *)(v2 + 0x10) = 0; /*0x8e84fe*/
  *(_DWORD *)a2 = v2; /*0x8e8502*/
  v3 = *(_DWORD *)(a1 + 0x21C); /*0x8e8504*/
  v12 = 0; /*0x8e8511*/
  v10 = v3; /*0x8e8515*/
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v3 + 4); /*0x8e8516*/
  v13 = 4; /*0x8e8519*/
  v4(v10, &v12, 4, &v13, 1); /*0x8e8521*/
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(a1 + 0x21C) + 4))( /*0x8e8537*/
    *(_DWORD *)(a1 + 0x21C),
    *(_DWORD *)a2 + 0x10,
    0x10,
    0,
    0);
  if ( *(_DWORD *)(a1 + 4) < 6u ) /*0x8e8540*/
  {
    result = v12; /*0x8e8542*/
    if ( !v12 ) /*0x8e8548*/
      return result; /*0x8e8548*/
    v12 -= 0x30; /*0x8e8558*/
    v11 = *(_DWORD *)(a1 + 0x21C); /*0x8e8569*/
    v6 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(v11 + 4); /*0x8e856a*/
    v13 = 4; /*0x8e856d*/
    v6(v11, v14, 0x20, &v13, 1); /*0x8e8575*/
  }
  result = v12; /*0x8e857a*/
  if ( v12 ) /*0x8e8580*/
  {
    v7 = *(_DWORD *)a2 + 0x20; /*0x8e8587*/
    v8 = *(_DWORD *)(*(_DWORD *)a2 + 0x28) & 0x3FFFFFFF; /*0x8e858a*/
    v13 = v12; /*0x8e8592*/
    if ( v8 < v12 ) /*0x8e8596*/
    {
      v9 = 2 * v8; /*0x8e8598*/
      if ( v12 < v9 ) /*0x8e859c*/
        result = v9; /*0x8e859e*/
      sub_8A6E40((const void **)v7, result, 1); /*0x8e85a4*/
    }
    *(_DWORD *)(v7 + 4) = v13; /*0x8e85b0*/
    (*(void (__cdecl **)(_DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)(a1 + 0x21C) + 4))( /*0x8e85cc*/
      *(_DWORD *)(a1 + 0x21C),
      *(_DWORD *)(*(_DWORD *)a2 + 0x20),
      v12,
      0,
      0);
    return v12; /*0x8e85ce*/
  }
  return result; /*0x8e85d5*/
}
