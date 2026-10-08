int __thiscall sub_703670(NiTriShapeData *this, int stream)
{
  int v2; // edi
  void (__cdecl *v4)(int, char *, int, int *, int); // edx
  int v5; // ebp
  void (__cdecl *v6)(int, int, int, int *, int); // edx
  void (__cdecl *v7)(int, int, int, int *, int); // edx
  void (__cdecl *v8)(int, char *, int, int *, int); // eax
  void (__cdecl *v9)(int, char *, int, int *, int); // eax
  void (__cdecl *v10)(int, char *, int, int *, int); // eax
  int v11; // eax
  void (__cdecl *v12)(int, char *, int, int *, int); // eax
  int v13; // edi
  int (__cdecl *v14)(int, char *, int, int *, int); // edx
  int v16; // [esp-50h] [ebp-60h]
  int v17; // [esp-50h] [ebp-60h]
  int v18; // [esp-3Ch] [ebp-4Ch]
  int v19; // [esp-38h] [ebp-48h]
  int v20; // [esp-28h] [ebp-38h]
  int v21; // [esp-28h] [ebp-38h]
  int v22; // [esp-24h] [ebp-34h]
  int v23; // [esp-14h] [ebp-24h]
  int v24; // [esp-14h] [ebp-24h]

  v2 = stream; /*0x703674*/
  NiTriShapeData_Save(this, (NiStream *)stream); /*0x70367b*/
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x703686*/
  v23 = *(_DWORD *)(v2 + 0x220); /*0x70369a*/
  stream = 2; /*0x70369b*/
  v4(v23, (char *)this + 0x60, 2, &stream, 1); /*0x70369f*/
  v5 = *((unsigned __int16 *)this + 0x30); /*0x7036a1*/
  v6 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x7036bd*/
  v22 = *((_DWORD *)this + 0x16); /*0x7036c0*/
  v20 = *(_DWORD *)(v2 + 0x220); /*0x7036c1*/
  stream = 8; /*0x7036c2*/
  v6(v20, v22, 8 * v5, &stream, 1); /*0x7036ca*/
  v7 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x7036e1*/
  v19 = *((_DWORD *)this + 0x17); /*0x7036e4*/
  v18 = *(_DWORD *)(v2 + 0x220); /*0x7036e5*/
  stream = 2; /*0x7036e6*/
  v7(v18, v19, 2 * v5, &stream, 1); /*0x7036ea*/
  v16 = *(_DWORD *)(v2 + 0x220); /*0x7036fe*/
  v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v16 + 8); /*0x7036ff*/
  stream = 2; /*0x703702*/
  v8(v16, (char *)this + 0x62, 2, &stream, 1); /*0x703706*/
  v24 = *(_DWORD *)(v2 + 0x220); /*0x70371d*/
  v9 = *(void (__cdecl **)(int, char *, int, int *, int))(v24 + 8); /*0x70371e*/
  stream = 2; /*0x703721*/
  v9(v24, (char *)this + 0x64, 2, &stream, 1); /*0x703725*/
  v21 = *(_DWORD *)(v2 + 0x220); /*0x703739*/
  v10 = *(void (__cdecl **)(int, char *, int, int *, int))(v21 + 8); /*0x70373a*/
  stream = 2; /*0x70373d*/
  v10(v21, (char *)this + 0x66, 2, &stream, 1); /*0x703741*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x703743*/
  stream = 2; /*0x703749*/
  (*(void (__cdecl **)(int, char *, int, int *, int))(v11 + 8))(v11, (char *)this + 0x68, 2, &stream, 1); /*0x70375d*/
  v17 = *(_DWORD *)(v2 + 0x220); /*0x703771*/
  v12 = *(void (__cdecl **)(int, char *, int, int *, int))(v17 + 8); /*0x703772*/
  stream = 2; /*0x703775*/
  v12(v17, (char *)this + 0x6A, 2, &stream, 1); /*0x703779*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x70377b*/
  v14 = *(int (__cdecl **)(int, char *, int, int *, int))(v13 + 8); /*0x703781*/
  stream = 2; /*0x703794*/
  return v14(v13, (char *)this + 0x6C, 2, &stream, 1); /*0x70379d*/
}
