int __thiscall sub_703500(NiTriShapeData *this, signed int stream)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  void (__cdecl *v8)(int, int, int, signed int *, int); // edx
  void (__cdecl *v9)(int, int, int, signed int *, int); // edx
  void (__cdecl *v10)(int, char *, int, signed int *, int); // eax
  int v11; // eax
  void (__cdecl *v12)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v13)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v14)(int, char *, int, signed int *, int); // eax
  int v15; // edi
  int (__cdecl *v16)(int, char *, int, signed int *, int); // edx
  int v18; // [esp-50h] [ebp-60h]
  int v19; // [esp-44h] [ebp-54h]
  int v20; // [esp-40h] [ebp-50h]
  int v21; // [esp-3Ch] [ebp-4Ch]
  int v22; // [esp-30h] [ebp-40h]
  int v23; // [esp-14h] [ebp-24h]
  int v24; // [esp-14h] [ebp-24h]
  int v25; // [esp-14h] [ebp-24h]

  v2 = stream; /*0x703504*/
  NiTriShapeData_Load(this, (NiStream *)stream); /*0x70350b*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x703516*/
  v23 = *(_DWORD *)(v2 + 0x21C); /*0x70352a*/
  stream = 2; /*0x70352b*/
  v4(v23, (char *)this + 0x60, 2, &stream, 1); /*0x70352f*/
  *((_DWORD *)this + 0x16) = FormHeapAlloc(
                               (unsigned __int64)*((unsigned __int16 *)this + 0x30) >> 0x1D != 0
                             ? 0xFFFFFFFF
                             : 8 * *((unsigned __int16 *)this + 0x30));
  v5 = FormHeapAlloc(
         (unsigned __int64)*((unsigned __int16 *)this + 0x30) >> 0x1F != 0
       ? 0xFFFFFFFF
       : 2 * *((unsigned __int16 *)this + 0x30));
  v6 = *((unsigned __int16 *)this + 0x30); /*0x703565*/
  v7 = *((_DWORD *)this + 0x16); /*0x703570*/
  *((_DWORD *)this + 0x17) = v5; /*0x70357b*/
  v8 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x703584*/
  v22 = *(_DWORD *)(v2 + 0x21C); /*0x703588*/
  stream = 8; /*0x703589*/
  v8(v22, v7, 8 * v6, &stream, 1); /*0x703591*/
  v9 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x7035a8*/
  v20 = *((_DWORD *)this + 0x17); /*0x7035ab*/
  v19 = *(_DWORD *)(v2 + 0x21C); /*0x7035ac*/
  stream = 2; /*0x7035ad*/
  v9(v19, v20, 2 * v6, &stream, 1); /*0x7035b1*/
  v24 = *(_DWORD *)(v2 + 0x21C); /*0x7035c8*/
  v10 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v24 + 4); /*0x7035c9*/
  stream = 2; /*0x7035cc*/
  v10(v24, (char *)this + 0x62, 2, &stream, 1); /*0x7035d0*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x7035d2*/
  stream = 2; /*0x7035d8*/
  (*(void (__cdecl **)(int, int *, int, signed int *, int))(v11 + 4))(v11, (int *)this + 0x19, 2, &stream, 1); /*0x7035ec*/
  v21 = *(_DWORD *)(v2 + 0x21C); /*0x703600*/
  v12 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v21 + 4); /*0x703601*/
  stream = 2; /*0x703604*/
  v12(v21, (char *)this + 0x66, 2, &stream, 1); /*0x703608*/
  v18 = *(_DWORD *)(v2 + 0x21C); /*0x70361c*/
  v13 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v18 + 4); /*0x70361d*/
  stream = 2; /*0x703620*/
  v13(v18, (char *)this + 0x68, 2, &stream, 1); /*0x703624*/
  v25 = *(_DWORD *)(v2 + 0x21C); /*0x70363b*/
  v14 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v25 + 4); /*0x70363c*/
  stream = 2; /*0x70363f*/
  v14(v25, (char *)this + 0x6A, 2, &stream, 1); /*0x703643*/
  v15 = *(_DWORD *)(v2 + 0x21C); /*0x703645*/
  v16 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v15 + 4); /*0x70364b*/
  stream = 2; /*0x70365b*/
  return v16(v15, (char *)this + 0x6C, 2, &stream, 1); /*0x703664*/
}
