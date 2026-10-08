int __thiscall sub_70ECD0(char *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  unsigned int i; // ebp
  int v7; // edx
  int v8; // eax
  void (__cdecl *v9)(int, int, int, signed int *, int); // eax
  void (__cdecl *v10)(int, int, int, signed int *, int); // eax
  void (__cdecl *v11)(int, int, int, signed int *, int); // eax
  void (__cdecl *v12)(int, char *, int, signed int *, int); // edx
  int v13; // edi
  int (__cdecl *v14)(int, int, int, signed int *, int); // edx
  int v16; // [esp-3Ch] [ebp-4Ch]
  int v17; // [esp-38h] [ebp-48h]
  int v18; // [esp-38h] [ebp-48h]
  int v19; // [esp-34h] [ebp-44h]
  int v20; // [esp-28h] [ebp-38h]
  int v21; // [esp-28h] [ebp-38h]
  int v22; // [esp-28h] [ebp-38h]
  int v23; // [esp-24h] [ebp-34h]
  int v24; // [esp-14h] [ebp-24h]
  int v25; // [esp-14h] [ebp-24h]
  int v26; // [esp-10h] [ebp-20h]

  v2 = (_DWORD *)a2; /*0x70ecd4*/
  nullsub_returnvVoid_1arg(a2); /*0x70ecdb*/
  sub_70F7B0(this + 8, (signed int)v2); /*0x70ece4*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0x13)); /*0x70ecf4*/
  v24 = v2[0x88]; /*0x70ed0d*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v24 + 8); /*0x70ed0e*/
  a2 = 4; /*0x70ed11*/
  v4(v24, this + 0x60, 4, &a2, 1); /*0x70ed15*/
  v20 = v2[0x88]; /*0x70ed29*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v20 + 8); /*0x70ed2a*/
  a2 = 4; /*0x70ed2d*/
  v5(v20, this + 0x64, 4, &a2, 1); /*0x70ed31*/
  for ( i = 0; i < *((_DWORD *)this + 0x18); ++i ) /*0x70ed38*/
  {
    v7 = *((_DWORD *)this + 0x15); /*0x70ed40*/
    v8 = v2[0x88]; /*0x70ed43*/
    a2 = 4; /*0x70ed50*/
    (*(void (__cdecl **)(int, unsigned int, int, signed int *, int))(v8 + 8))(v8, 4 * i + v7, 4, &a2, 1); /*0x70ed64*/
    v23 = 4 * i + *((_DWORD *)this + 0x16); /*0x70ed7a*/
    v21 = v2[0x88]; /*0x70ed7b*/
    v9 = *(void (__cdecl **)(int, int, int, signed int *, int))(v21 + 8); /*0x70ed7c*/
    a2 = 4; /*0x70ed7f*/
    v9(v21, v23, 4, &a2, 1); /*0x70ed87*/
    v17 = 4 * i + *((_DWORD *)this + 0x17); /*0x70ed9d*/
    v16 = v2[0x88]; /*0x70ed9e*/
    v10 = *(void (__cdecl **)(int, int, int, signed int *, int))(v16 + 8); /*0x70ed9f*/
    a2 = 4; /*0x70eda2*/
    v10(v16, v17, 4, &a2, 1); /*0x70edaa*/
  }
  v26 = *((_DWORD *)this + 0x17) + 4 * *((_DWORD *)this + 0x18); /*0x70edd3*/
  v25 = v2[0x88]; /*0x70edd4*/
  v11 = *(void (__cdecl **)(int, int, int, signed int *, int))(v25 + 8); /*0x70edd5*/
  a2 = 4; /*0x70edd8*/
  v11(v25, v26, 4, &a2, 1); /*0x70eddc*/
  v12 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v2[0x88] + 8); /*0x70ede4*/
  v22 = v2[0x88]; /*0x70edf3*/
  a2 = 4; /*0x70edf4*/
  v12(v22, this + 0x6C, 4, &a2, 1); /*0x70edf8*/
  v13 = v2[0x88]; /*0x70ee00*/
  v14 = *(int (__cdecl **)(int, int, int, signed int *, int))(v13 + 8); /*0x70ee17*/
  v19 = *((_DWORD *)this + 0x1B) * *(_DWORD *)(*((_DWORD *)this + 0x17) + 4 * *((_DWORD *)this + 0x18)); /*0x70ee1a*/
  v18 = *((_DWORD *)this + 0x14); /*0x70ee1b*/
  a2 = 1; /*0x70ee1d*/
  return v14(v13, v18, v19, &a2, 1); /*0x70ee2a*/
}
