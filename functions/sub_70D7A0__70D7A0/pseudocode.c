unsigned int __thiscall sub_70D7A0(int *this, int a2)
{
  unsigned int *v2; // esi
  void (__cdecl *v4)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v6)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v7)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v8)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v9)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v10)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v11)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v12)(unsigned int, int *, int, int *, int); // edx
  void (__cdecl *v13)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v14)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v15)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v16)(unsigned int, int *, int, int *, int); // edx
  unsigned int result; // eax
  unsigned int v18; // [esp-54h] [ebp-64h]
  unsigned int v19; // [esp-54h] [ebp-64h]
  unsigned int v20; // [esp-40h] [ebp-50h]
  unsigned int v21; // [esp-40h] [ebp-50h]
  unsigned int v22; // [esp-2Ch] [ebp-3Ch]
  unsigned int v23; // [esp-2Ch] [ebp-3Ch]
  unsigned int v24; // [esp-2Ch] [ebp-3Ch]
  unsigned int v25; // [esp-18h] [ebp-28h]
  unsigned int v26; // [esp-18h] [ebp-28h]
  unsigned int v27; // [esp-18h] [ebp-28h]
  unsigned int v28; // [esp-18h] [ebp-28h]
  unsigned int v29; // [esp-18h] [ebp-28h]
  unsigned int v30; // [esp-14h] [ebp-24h]
  int v31; // [esp+8h] [ebp-8h] BYREF
  int v32; // [esp+Ch] [ebp-4h] BYREF

  v2 = (unsigned int *)a2;
  sub_707F00(this, a2);
  if ( v2[0x36] >= 0xA000102 )
  {
    v30 = v2[0x87];
    v4 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v30 + 4);
    a2 = 2;
    v4(v30, &v31, 2, &a2, 1);
  }
  else
  {
    v31 = *((unsigned __int16 *)v2 + 0x12C);
  }
  v25 = v2[0x87];
  v5 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v25 + 4);
  a2 = 4;
  v5(v25, this + 0x3B, 4, &a2, 1);
  v22 = v2[0x87];
  v6 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v22 + 4);
  a2 = 4;
  v6(v22, this + 0x3C, 4, &a2, 1);
  v20 = v2[0x87];
  v7 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v20 + 4);
  a2 = 4;
  v7(v20, this + 0x3D, 4, &a2, 1);
  v18 = v2[0x87];
  v8 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v18 + 4);
  a2 = 4;
  v8(v18, this + 0x3E, 4, &a2, 1);
  v26 = v2[0x87];
  v9 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v26 + 4);
  a2 = 4;
  v9(v26, this + 0x3F, 4, &a2, 1);
  v23 = v2[0x87];
  v10 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v23 + 4);
  a2 = 4;
  v10(v23, this + 0x40, 4, &a2, 1);
  if ( v2[0x36] >= 0xA000105 )
  {
    v27 = v2[0x87];
    v11 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v27 + 4);
    v32 = 1;
    v11(v27, &a2, 1, &v32, 1);
    *((_BYTE *)this + 0x104) = (_BYTE)a2 != 0;
  }
  else
  {
    *((_BYTE *)this + 0x104) = 0;
  }
  v12 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v2[0x87] + 4);
  v28 = v2[0x87];
  a2 = 4;
  v12(v28, this + 0x44, 4, &a2, 1);
  v24 = v2[0x87];
  v13 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v24 + 4);
  a2 = 4;
  v13(v24, this + 0x45, 4, &a2, 1);
  v21 = v2[0x87];
  v14 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v21 + 4);
  a2 = 4;
  v14(v21, this + 0x46, 4, &a2, 1);
  v19 = v2[0x87];
  v15 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v19 + 4);
  a2 = 4;
  v15(v19, this + 0x47, 4, &a2, 1);
  v16 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v2[0x87] + 4);
  v29 = v2[0x87];
  a2 = 4;
  v16(v29, this + 0x48, 4, &a2, 1);
  sub_712A20(v2);
  result = sub_712AE0(v2);
  if ( v2[0x36] >= 0x4010004 )
  {
    sub_712AE0(v2);
    result = v2[0x36];
    if ( result >= 0xA000107 && result < 0xA00010F )
      return sub_712AE0(v2);
  }
  return result;
}
