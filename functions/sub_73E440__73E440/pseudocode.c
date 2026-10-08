// Pass225: NiScreenTexture save writes records then serializes +0x14 object reference.
int __thiscall sub_73E440(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  void (__cdecl *v4)(int, unsigned int *, int, signed int *, int); // eax
  unsigned int v5; // ebp
  char *v6; // esi
  void (__cdecl *v7)(int, char *, int, int *, int); // edx
  void (__cdecl *v8)(int, char *, int, int *, int); // eax
  void (__cdecl *v9)(int, _DWORD *, int, int *, int); // eax
  void (__cdecl *v10)(int, char *, int, int *, int); // eax
  void (__cdecl *v11)(int, _DWORD *, int, int *, int); // eax
  void (__cdecl *v12)(int, char *, int, int *, int); // eax
  int v14; // [esp-54h] [ebp-7Ch]
  int v15; // [esp-40h] [ebp-68h]
  int v16; // [esp-2Ch] [ebp-54h]
  int v17; // [esp-2Ch] [ebp-54h]
  int v18; // [esp-18h] [ebp-40h]
  int v19; // [esp-18h] [ebp-40h]
  int v20; // [esp-14h] [ebp-3Ch]
  unsigned int v21; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD *v22; // [esp+10h] [ebp-18h]
  int v23; // [esp+14h] [ebp-14h] BYREF
  _DWORD v24[4]; // [esp+18h] [ebp-10h] BYREF

  v2 = (_DWORD *)a2; /*0x73e446*/
  v3 = this; /*0x73e44a*/
  v22 = this; /*0x73e44d*/
  nullsub_returnvVoid_1arg(a2); /*0x73e451*/
  v21 = v3[4]; /*0x73e460*/
  v20 = v2[0x88]; /*0x73e471*/
  v4 = *(void (__cdecl **)(int, unsigned int *, int, signed int *, int))(v20 + 8); /*0x73e472*/
  a2 = 4; /*0x73e475*/
  v4(v20, &v21, 4, &a2, 1); /*0x73e47d*/
  v5 = 0; /*0x73e47f*/
  if ( v21 ) /*0x73e488*/
  {
    a2 = 0; /*0x73e48f*/
    do /*0x73e588*/
    {
      v6 = (char *)(a2 + v3[2]); /*0x73e4a3*/
      v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v2[0x88] + 8); /*0x73e4ad*/
      v18 = v2[0x88]; /*0x73e4b9*/
      v23 = 2; /*0x73e4ba*/
      v7(v18, v6, 2, &v23, 1); /*0x73e4be*/
      v16 = v2[0x88]; /*0x73e4d2*/
      v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v16 + 8); /*0x73e4d3*/
      v23 = 2; /*0x73e4d6*/
      v8(v16, v6 + 2, 2, &v23, 1); /*0x73e4da*/
      v15 = v2[0x88]; /*0x73e4ee*/
      v9 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v15 + 8); /*0x73e4ef*/
      v23 = 2; /*0x73e4f2*/
      v9(v15, (_DWORD *)v6 + 1, 2, &v23, 1); /*0x73e4f6*/
      v14 = v2[0x88]; /*0x73e50a*/
      v10 = *(void (__cdecl **)(int, char *, int, int *, int))(v14 + 8); /*0x73e50b*/
      v23 = 2; /*0x73e50e*/
      v10(v14, v6 + 6, 2, &v23, 1); /*0x73e512*/
      v19 = v2[0x88]; /*0x73e529*/
      v11 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v19 + 8); /*0x73e52a*/
      v23 = 2; /*0x73e52d*/
      v11(v19, (_DWORD *)v6 + 2, 2, &v23, 1); /*0x73e531*/
      v17 = v2[0x88]; /*0x73e545*/
      v12 = *(void (__cdecl **)(int, char *, int, int *, int))(v17 + 8); /*0x73e546*/
      v23 = 2; /*0x73e549*/
      v12(v17, v6 + 0xA, 2, &v23, 1); /*0x73e54d*/
      v24[0] = *((_DWORD *)v6 + 3); /*0x73e552*/
      v24[1] = *((_DWORD *)v6 + 4); /*0x73e559*/
      v24[2] = *((_DWORD *)v6 + 5); /*0x73e560*/
      v24[3] = *((_DWORD *)v6 + 6); /*0x73e56a*/
      sub_709510((char *)v24, (signed int)v2); /*0x73e573*/
      ++v5; /*0x73e578*/
      a2 += 0x1C; /*0x73e57b*/
      v3 = v22; /*0x73e584*/
    }
    while ( v5 < v21 ); /*0x73e588*/
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, v3[5]); /*0x73e59c*/
}
