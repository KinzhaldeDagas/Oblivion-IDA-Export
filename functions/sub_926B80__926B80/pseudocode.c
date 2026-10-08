int __thiscall sub_926B80(char *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  char *v4; // esi
  void (__cdecl *v5)(int, _DWORD **, int, int *, int); // eax
  int v6; // edi
  void (__cdecl *v7)(int, char *, int, int *, int); // eax
  int v9; // [esp-14h] [ebp-20h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x926b83*/
  sub_8B30D0(this, (int)a2); /*0x926b8a*/
  v4 = *((char **)this + 1); /*0x926b95*/
  v9 = v2[0x87]; /*0x926ba6*/
  v5 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v9 + 4); /*0x926ba7*/
  v10 = 1; /*0x926baa*/
  v5(v9, &a2, 1, &v10, 1); /*0x926bb2*/
  v6 = v2[0x87]; /*0x926bb4*/
  v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v6 + 4); /*0x926bba*/
  v10 = 1; /*0x926bce*/
  v7(v6, v4 + 0x91, 1, &v10, 1); /*0x926bd6*/
  return sub_924960(v4, 0); /*0x926be4*/
}
