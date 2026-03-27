__int16 __thiscall sub_719110(int *this, int a2)
{
  int v2; // edi
  int v4; // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  void (__cdecl *v8)(int, int *, int, int *, int); // eax
  void (__cdecl *v9)(int, int *, int, int *, int); // eax
  void (__cdecl *v10)(int, int *, int, int *, int); // eax
  int v11; // eax
  int v12; // edi
  void (__cdecl *v13)(int, int *, int, int *, int); // edx
  __int16 result; // ax
  void (__cdecl *v15)(int, int *, int, int *, int); // edx
  void (__cdecl *v16)(int, int *, int, int *, int); // eax
  int v17; // edi
  __int16 (__cdecl *v18)(int, int *, int, int *, int); // edx
  int v19; // [esp-50h] [ebp-64h]
  int v20; // [esp-3Ch] [ebp-50h]
  int v21; // [esp-28h] [ebp-3Ch]
  int v22; // [esp-28h] [ebp-3Ch]
  int v23; // [esp-14h] [ebp-28h]
  int v24; // [esp-14h] [ebp-28h]
  int v25; // [esp-14h] [ebp-28h]
  int v26; // [esp+Ch] [ebp-8h] BYREF
  int v27; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_700AC0(this, (unsigned int *)a2);
  v4 = *(_DWORD *)(v2 + 0x21C);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14010002u )
  {
    v15 = *(void (__cdecl **)(int, int *, int, int *, int))(v4 + 4);
    a2 = 2;
    v15(v4, this + 6, 2, &a2, 1);
    v22 = *(_DWORD *)(v2 + 0x21C);
    v16 = *(void (__cdecl **)(int, int *, int, int *, int))(v22 + 4);
    a2 = 4;
    v16(v22, this + 7, 4, &a2, 1);
    v17 = *(_DWORD *)(v2 + 0x21C);
    v18 = *(__int16 (__cdecl **)(int, int *, int, int *, int))(v17 + 4);
    a2 = 4;
    return v18(v17, this + 8, 4, &a2, 1);
  }
  else
  {
    v23 = *(_DWORD *)(v2 + 0x21C);
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v4 + 4);
    v26 = 1;
    v5(v23, &a2, 1, &v26, 1);
    if ( (_BYTE)a2 )
      *((_WORD *)this + 0xC) |= 1u;
    else
      *((_WORD *)this + 0xC) &= ~1u;
    v24 = *(_DWORD *)(v2 + 0x21C);
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v24 + 4);
    v26 = 4;
    v6(v24, &v27, 4, &v26, 1);
    *((_WORD *)this + 0xC) = ((_WORD)v27 << 0xC) | *(_WORD *)(this + 6) & 0xFFF;
    v21 = *(_DWORD *)(v2 + 0x21C);
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v21 + 4);
    v27 = 4;
    v7(v21, this + 7, 4, &v27, 1);
    v20 = *(_DWORD *)(v2 + 0x21C);
    v8 = *(void (__cdecl **)(int, int *, int, int *, int))(v20 + 4);
    v27 = 4;
    v8(v20, this + 8, 4, &v27, 1);
    v19 = *(_DWORD *)(v2 + 0x21C);
    v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v19 + 4);
    v27 = 4;
    v9(v19, &v26, 4, &v27, 1);
    *((_WORD *)this + 0xC) = (2 * v26) | *(_WORD *)(this + 6) & 0xFFF1;
    v25 = *(_DWORD *)(v2 + 0x21C);
    v10 = *(void (__cdecl **)(int, int *, int, int *, int))(v25 + 4);
    v27 = 4;
    v10(v25, &v26, 4, &v27, 1);
    *((_WORD *)this + 0xC) = (0x10 * v26) | *(_WORD *)(this + 6) & 0xFF8F;
    v11 = *(_DWORD *)(v2 + 0x21C);
    v27 = 4;
    (*(void (__cdecl **)(int, int *, int, int *, int))(v11 + 4))(v11, &v26, 4, &v27, 1);
    *((_WORD *)this + 0xC) = ((_WORD)v26 << 7) | *(_WORD *)(this + 6) & 0xFC7F;
    v12 = *(_DWORD *)(v2 + 0x21C);
    v13 = *(void (__cdecl **)(int, int *, int, int *, int))(v12 + 4);
    v27 = 4;
    v13(v12, &v26, 4, &v27, 1);
    result = ((_WORD)v26 << 0xA) | *(_WORD *)(this + 6) & 0xF3FF;
    *((_WORD *)this + 0xC) = result;
  }
  return result;
}
