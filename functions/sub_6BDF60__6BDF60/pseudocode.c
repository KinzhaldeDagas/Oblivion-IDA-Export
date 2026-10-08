int __thiscall sub_6BDF60(_BYTE *this, int a2)
{
  int v2; // edi
  void (__cdecl *v3)(int, _BYTE *, int, int *, int); // edx
  int (__cdecl *v5)(int, int *, int, int *, int); // eax
  int result; // eax
  int v7; // [esp-28h] [ebp-34h]
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x6bdf63*/
  v3 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(*(_DWORD *)(a2 + 0x21C) + 4); /*0x6bdf6d*/
  v8 = *(_DWORD *)(a2 + 0x21C); /*0x6bdf7c*/
  v9 = 4; /*0x6bdf7d*/
  v3(v8, this, 4, &v9, 1); /*0x6bdf85*/
  v7 = *(_DWORD *)(v2 + 0x21C); /*0x6bdf9b*/
  v5 = *(int (__cdecl **)(int, int *, int, int *, int))(v7 + 4); /*0x6bdf9c*/
  v9 = 1; /*0x6bdf9f*/
  result = v5(v7, &a2, 1, &v9, 1); /*0x6bdfa7*/
  *(this + 4) = (_BYTE)a2 != 0; /*0x6bdfb5*/
  return result; /*0x6bdfb1*/
}
