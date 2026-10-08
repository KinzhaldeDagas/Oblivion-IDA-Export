int __thiscall sub_713180(const char *this)
{
  void (__cdecl *v2)(int, int *, int, int *, int); // edx
  void (__cdecl *v3)(int, const char *, int, int *, int); // edx
  const char *v4; // edi
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
  const char *v29; // [esp+1Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x88) + 8))(*((_DWORD *)this + 0x88), 0); /*0x713196*/
  sub_7483C0(*((_DWORD **)this + 0x88), (signed int)"Gamebryo File Format, Version 20.0.0.5\n"); /*0x7131a3*/
  v2 = *(void (__cdecl **)(int, int *, int, int *, int))(*((_DWORD *)this + 0x88) + 8); /*0x7131ae*/
  v21 = *((_DWORD *)this + 0x88); /*0x7131c7*/
  v27 = 4; /*0x7131c8*/
  v2(v21, &dword_B26DF4, 4, &v27, 1); /*0x7131cc*/
  v3 = *(void (__cdecl **)(int, const char *, int, int *, int))(*((_DWORD *)this + 0x88) + 8); /*0x7131d4*/
  v4 = this + 0x1E4; /*0x7131dd*/
  v17 = *((_DWORD *)this + 0x88); /*0x7131e5*/
  v27 = 1; /*0x7131e6*/
  v29 = this + 0x1E4; /*0x7131ea*/
  v3(v17, this + 0x1E4, 1, &v27, 1); /*0x7131ee*/
  v5 = *(void (__cdecl **)(int, int *, int, int *, int))(*((_DWORD *)this + 0x88) + 8); /*0x7131f6*/
  v16 = *((_DWORD *)this + 0x88); /*0x713205*/
  v27 = 4; /*0x713206*/
  v5(v16, &dword_B26DF8, 4, &v27, 1); /*0x71320a*/
  v28 = *((_DWORD *)this + 0x7E); /*0x713218*/
  v15 = *((_DWORD *)this + 0x88); /*0x713228*/
  v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v15 + 8); /*0x713229*/
  v27 = 4; /*0x71322c*/
  v6(v15, &v28, 4, &v27, 1); /*0x713230*/
  if ( dword_B26DF8 ) /*0x713235*/
  {
    v22 = *((_DWORD *)this + 0x88); /*0x713253*/
    v7 = *(void (__cdecl **)(int, const char *, int, int *, int))(v22 + 8); /*0x713254*/
    v28 = 4; /*0x713257*/
    v7(v22, this + 4, 4, &v28, 1); /*0x71325b*/
    HIBYTE(v26) = strlen(this + 8) + 1; /*0x71327b*/
    v23 = *((_DWORD *)this + 0x88); /*0x71328b*/
    v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v23 + 8); /*0x71328c*/
    v28 = 1; /*0x71328f*/
    v8(v23, (char *)&v26 + 3, 1, &v28, 1); /*0x713293*/
    v18 = *((_DWORD *)this + 0x88); /*0x7132a8*/
    v9 = *(void (__cdecl **)(int, const char *, _DWORD, int *, int))(v18 + 8); /*0x7132a9*/
    v28 = 1; /*0x7132ac*/
    v9(v18, this + 8, HIBYTE(v26), &v28, 1); /*0x7132b0*/
    HIBYTE(v26) = strlen(this + 0x48) + 1; /*0x7132d3*/
    v24 = *((_DWORD *)this + 0x88); /*0x7132e3*/
    v10 = *(void (__cdecl **)(int, char *, int, int *, int))(v24 + 8); /*0x7132e4*/
    v28 = 1; /*0x7132e7*/
    v10(v24, (char *)&v26 + 3, 1, &v28, 1); /*0x7132eb*/
    v19 = *((_DWORD *)this + 0x88); /*0x713300*/
    v11 = *(void (__cdecl **)(int, const char *, _DWORD, int *, int))(v19 + 8); /*0x713301*/
    v28 = 1; /*0x713304*/
    v11(v19, this + 0x48, HIBYTE(v26), &v28, 1); /*0x713308*/
    HIBYTE(v26) = strlen(this + 0x88) + 1; /*0x71332b*/
    v25 = *((_DWORD *)this + 0x88); /*0x71333b*/
    v12 = *(void (__cdecl **)(int, char *, int, int *, int))(v25 + 8); /*0x71333c*/
    v28 = 1; /*0x71333f*/
    v12(v25, (char *)&v26 + 3, 1, &v28, 1); /*0x713343*/
    v20 = *((_DWORD *)this + 0x88); /*0x713358*/
    v13 = *(void (__cdecl **)(int, const char *, _DWORD, int *, int))(v20 + 8); /*0x713359*/
    v28 = 1; /*0x71335c*/
    v13(v20, this + 0x88, HIBYTE(v26), &v28, 1); /*0x713360*/
    v4 = v29; /*0x713362*/
  }
  return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x88) + 8))(*((_DWORD *)this + 0x88), *v4 ^ 1); /*0x71337e*/
}
