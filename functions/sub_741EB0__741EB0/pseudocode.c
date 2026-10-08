int __thiscall sub_741EB0(const char **this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x741eb3*/
  sub_6FE000(this, a2); /*0x741eba*/
  LOBYTE(a2) = *((_BYTE *)this + 0xC); /*0x741ec9*/
  v6 = v2[0x88]; /*0x741eda*/
  v4 = *(int (__cdecl **)(int, _DWORD **, int, int *, int))(v6 + 8); /*0x741edb*/
  v7 = 1; /*0x741ede*/
  return v4(v6, &a2, 1, &v7, 1); /*0x741eeb*/
}
