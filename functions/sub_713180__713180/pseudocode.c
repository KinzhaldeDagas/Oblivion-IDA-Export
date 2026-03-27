int __thiscall sub_713180(const char *this)
{
  void (__cdecl *v2)(int, int *, int, int *, int); // edx
  void (__cdecl *v3)(int, const char *, int, int *, int); // edx
  _BYTE *v4; // edi
  void (__cdecl *v5)(int, int *, int, int *, int); // edx
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  void (__cdecl *v7)(int, const char *, int, int *, int); // eax
  void (__cdecl *v8)(int, char *, int, int *, int); // eax
  void (__cdecl *v9)(int, const char *, _DWORD, int *, int); // eax
  void (__cdecl *v10)(int, char *, int, int *, int); // eax
  void (__cdecl *v11)(int, const char *, _DWORD, int *, int); // eax
  void (__cdecl *v12)(int, char *, int, int *, int); // eax
  void (__cdecl *v13)(int, const char *, _DWORD, int *, int); // eax
  int v15; // [esp-50h] [ebp-70h]
  int v16; // [esp-3Ch] [ebp-5Ch]
  int v17; // [esp-28h] [ebp-48h]
  int v18; // [esp-28h] [ebp-48h]
  int v19; // [esp-28h] [ebp-48h]
  int v20; // [esp-28h] [ebp-48h]
  int v21; // [esp-14h] [ebp-34h]
  int v22; // [esp-14h] [ebp-34h]
  int v23; // [esp-14h] [ebp-34h]
  int v24; // [esp-14h] [ebp-34h]
  int v25; // [esp-14h] [ebp-34h]
  int v26; // [esp+10h] [ebp-10h] BYREF
  int v27; // [esp+14h] [ebp-Ch] BYREF
  int v28; // [esp+18h] [ebp-8h] BYREF
  _DWORD **v29; // [esp+1Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x88) + 8))(*((_DWORD *)this + 0x88), 0);
  sub_7483C0(*((_DWORD **)this + 0x88), (signed int)"Gamebryo File Format, Version 20.0.0.5\n");
  v2 = *(void (__cdecl **)(int, int *, int, int *, int))(*((_DWORD *)this + 0x88) + 8);
  v21 = *((_DWORD *)this + 0x88);
  v27 = 4;
  v2(v21, &dword_B26DF4, 4, &v27, 1);
  v3 = *(void (__cdecl **)(int, const char *, int, int *, int))(*((_DWORD *)this + 0x88) + 8);
  v4 = this + 0x1E4;
  v17 = *((_DWORD *)this + 0x88);
  v27 = 1;
  v29 = (_DWORD **)(this + 0x1E4);
  v3(v17, this + 0x1E4, 1, &v27, 1);
  v5 = *(void (__cdecl **)(int, int *, int, int *, int))(*((_DWORD *)this + 0x88) + 8);
  v16 = *((_DWORD *)this + 0x88);
  v27 = 4;
  v5(v16, &dword_B26DF8, 4, &v27, 1);
  v28 = *((_DWORD *)this + 0x7E);
  v15 = *((_DWORD *)this + 0x88);
  v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v15 + 8);
  v27 = 4;
  v6(v15, &v28, 4, &v27, 1);
  if ( dword_B26DF8 )
  {
    v22 = *((_DWORD *)this + 0x88);
    v7 = *(void (__cdecl **)(int, const char *, int, int *, int))(v22 + 8);
    v28 = 4;
    v7(v22, this + 4, 4, &v28, 1);
    HIBYTE(v26) = strlen(this + 8) + 1;
    v23 = *((_DWORD *)this + 0x88);
    v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v23 + 8);
    v28 = 1;
    v8(v23, (char *)&v26 + 3, 1, &v28, 1);
    v18 = *((_DWORD *)this + 0x88);
    v9 = *(void (__cdecl **)(int, const char *, _DWORD, int *, int))(v18 + 8);
    v28 = 1;
    v9(v18, this + 8, HIBYTE(v26), &v28, 1);
    HIBYTE(v26) = strlen(this + 0x48) + 1;
    v24 = *((_DWORD *)this + 0x88);
    v10 = *(void (__cdecl **)(int, char *, int, int *, int))(v24 + 8);
    v28 = 1;
    v10(v24, (char *)&v26 + 3, 1, &v28, 1);
    v19 = *((_DWORD *)this + 0x88);
    v11 = *(void (__cdecl **)(int, const char *, _DWORD, int *, int))(v19 + 8);
    v28 = 1;
    v11(v19, this + 0x48, HIBYTE(v26), &v28, 1);
    HIBYTE(v26) = strlen(this + 0x88) + 1;
    v25 = *((_DWORD *)this + 0x88);
    v12 = *(void (__cdecl **)(int, char *, int, int *, int))(v25 + 8);
    v28 = 1;
    v12(v25, (char *)&v26 + 3, 1, &v28, 1);
    v20 = *((_DWORD *)this + 0x88);
    v13 = *(void (__cdecl **)(int, const char *, _DWORD, int *, int))(v20 + 8);
    v28 = 1;
    v13(v20, this + 0x88, HIBYTE(v26), &v28, 1);
    v4 = v29;
  }
  return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x88) + 8))(*((_DWORD *)this + 0x88), *v4 ^ 1);
}
