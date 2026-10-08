int __thiscall sub_73C0B0(int *this, unsigned int *a2)
{
  unsigned int *v2; // esi
  void (__cdecl *v4)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, int *, int); // edx
  void (__cdecl *v6)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v7)(unsigned int, int *, int, int *, int); // edx
  void (__cdecl *v8)(unsigned int, unsigned int **, int, int *, int); // eax
  int result; // eax
  void (__cdecl *v10)(unsigned int, int *, int, int *, int); // edx
  int (__cdecl *v11)(unsigned int, int *, int, int *, int); // eax
  unsigned int v12; // esi
  int (__cdecl *v13)(unsigned int, int *, int, int *, int); // eax
  unsigned int v14; // [esp-50h] [ebp-64h]
  unsigned int v15; // [esp-3Ch] [ebp-50h]
  unsigned int v16; // [esp-28h] [ebp-3Ch]
  unsigned int v17; // [esp-28h] [ebp-3Ch]
  unsigned int v18; // [esp-14h] [ebp-28h]
  unsigned int v19; // [esp-14h] [ebp-28h]
  unsigned int v20; // [esp-14h] [ebp-28h]
  int v21; // [esp+Ch] [ebp-8h] BYREF
  int v22; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x73c0b5*/
  sub_708EB0(this, a2); /*0x73c0bd*/
  sub_711B90((char *)this + 0xDC, (int)v2); /*0x73c0c9*/
  sub_709430((char *)this + 0x100, (signed int)v2); /*0x73c0d5*/
  v18 = v2[0x87]; /*0x73c0f2*/
  v4 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v18 + 4); /*0x73c0f3*/
  v21 = 4; /*0x73c0f6*/
  v4(v18, &v22, 4, &v21, 1); /*0x73c0fa*/
  *(this + 0x50) = v22; /*0x73c107*/
  v5 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v2[0x87] + 4); /*0x73c113*/
  v16 = v2[0x87]; /*0x73c11c*/
  v22 = 4; /*0x73c11d*/
  v5(v16, &v21, 4, &v22, 1); /*0x73c121*/
  *(this + 0x51) = v21; /*0x73c12e*/
  v15 = v2[0x87]; /*0x73c140*/
  v6 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v15 + 4); /*0x73c141*/
  v22 = 4; /*0x73c144*/
  v6(v15, &v21, 4, &v22, 1); /*0x73c148*/
  *(this + 0x52) = v21; /*0x73c155*/
  v7 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v2[0x87] + 4); /*0x73c161*/
  v14 = v2[0x87]; /*0x73c16a*/
  v22 = 4; /*0x73c16b*/
  v7(v14, &v21, 4, &v22, 1); /*0x73c16f*/
  *(this + 0x53) = v21; /*0x73c17a*/
  sub_712A20(v2); /*0x73c180*/
  v19 = v2[0x87]; /*0x73c199*/
  v8 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v19 + 4); /*0x73c19a*/
  v22 = 1; /*0x73c19d*/
  v8(v19, &a2, 1, &v22, 1); /*0x73c1a5*/
  *((_BYTE *)this + 0x150) = (_BYTE)a2 != 0; /*0x73c1b3*/
  result = sub_716EA0((char *)this + 0x154, (signed int)v2); /*0x73c1bf*/
  if ( v2[0x36] < 0xA030004 ) /*0x73c1d3*/
  {
    v10 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v2[0x87] + 4); /*0x73c1e2*/
    v20 = v2[0x87]; /*0x73c1eb*/
    v22 = 2; /*0x73c1ec*/
    v10(v20, &v21, 2, &v22, 1); /*0x73c1f0*/
    v17 = v2[0x87]; /*0x73c205*/
    v11 = *(int (__cdecl **)(unsigned int, int *, int, int *, int))(v17 + 4); /*0x73c206*/
    v22 = 2; /*0x73c209*/
    result = v11(v17, &v21, 2, &v22, 1); /*0x73c20d*/
  }
  if ( v2[0x36] < 0x4010010 ) /*0x73c21c*/
  {
    v12 = v2[0x87]; /*0x73c21e*/
    v13 = *(int (__cdecl **)(unsigned int, int *, int, int *, int))(v12 + 4); /*0x73c224*/
    v22 = 2; /*0x73c235*/
    return v13(v12, &v21, 2, &v22, 1); /*0x73c239*/
  }
  return result; /*0x73c23e*/
}
