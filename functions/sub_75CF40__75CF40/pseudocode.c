int __thiscall sub_75CF40(const char **this, _DWORD *a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, const char **, int, int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, int *, int); // eax
  int v6; // eax
  void (__cdecl *v7)(int, _DWORD **, int, int *, int); // edx
  void (__cdecl *v8)(int, _DWORD **, int, int *, int); // eax
  int v9; // eax
  void (__cdecl *v10)(int, _DWORD **, int, int *, int); // edx
  int v11; // edi
  int (__cdecl *v12)(int, const char **, int, int *, int); // ecx
  int v14; // [esp-50h] [ebp-5Ch]
  int v15; // [esp-28h] [ebp-34h]
  int v16; // [esp-14h] [ebp-20h]
  int v17; // [esp+8h] [ebp-4h] BYREF

  v2 = (signed int)a2; /*0x75cf43*/
  sub_75E9E0(this, a2); /*0x75cf4a*/
  sub_7094A0((char *)this + 0x40, v2); /*0x75cf53*/
  v16 = *(_DWORD *)(v2 + 0x220); /*0x75cf6b*/
  v4 = *(void (__cdecl **)(int, const char **, int, int *, int))(v16 + 8); /*0x75cf6c*/
  v17 = 4; /*0x75cf6f*/
  v4(v16, this + 0x16, 4, &v17, 1); /*0x75cf77*/
  v15 = *(_DWORD *)(v2 + 0x220); /*0x75cf8c*/
  v5 = *(void (__cdecl **)(int, const char **, int, int *, int))(v15 + 8); /*0x75cf8d*/
  v17 = 4; /*0x75cf90*/
  v5(v15, this + 0x17, 4, &v17, 1); /*0x75cf98*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x75cf9e*/
  LOBYTE(a2) = *((_BYTE *)this + 0x60); /*0x75cfab*/
  v7 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v6 + 8); /*0x75cfaf*/
  v17 = 1; /*0x75cfba*/
  v7(v6, &a2, 1, &v17, 1); /*0x75cfc2*/
  LOBYTE(a2) = *((_BYTE *)this + 0x61); /*0x75cfce*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x75cfdf*/
  v8 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v14 + 8); /*0x75cfe0*/
  v17 = 1; /*0x75cfe3*/
  v8(v14, &a2, 1, &v17, 1); /*0x75cfeb*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x75cff1*/
  LOBYTE(a2) = *((_BYTE *)this + 0x62); /*0x75d001*/
  v10 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v9 + 8); /*0x75d005*/
  v17 = 1; /*0x75d010*/
  v10(v9, &a2, 1, &v17, 1); /*0x75d018*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x75d01a*/
  v12 = *(int (__cdecl **)(int, const char **, int, int *, int))(v11 + 8); /*0x75d020*/
  v17 = 4; /*0x75d030*/
  return v12(v11, this + 0x19, 4, &v17, 1); /*0x75d03e*/
}
