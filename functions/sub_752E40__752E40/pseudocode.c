int __thiscall sub_752E40(const char **this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, signed int *, int, int *, int); // eax
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2; /*0x752e43*/
  nullsub_returnvVoid_1arg(a2); /*0x752e4a*/
  sub_713720(v2, *(this + 2)); /*0x752e55*/
  v8 = v2[0x88]; /*0x752e6d*/
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v8 + 8); /*0x752e6e*/
  a2 = 4; /*0x752e71*/
  v4(v8, this + 3, 4, &a2, 1); /*0x752e79*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 4)); /*0x752e89*/
  v5 = v2[0x88]; /*0x752e8e*/
  LOBYTE(a2) = *((_BYTE *)this + 0x14); /*0x752ea2*/
  v6 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v5 + 8); /*0x752ea6*/
  v9 = 1; /*0x752eaa*/
  return v6(v5, &a2, 1, &v9, 1); /*0x752eb7*/
}
