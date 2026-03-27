int __thiscall sub_6BDF60(_BYTE *this, int a2)
{
  int v2; // edi
  void (__cdecl *v3)(int, _BYTE *, int, int *, int); // edx
  int (__cdecl *v5)(int, int *, int, int *, int); // eax
  int result; // eax
  int v7; // [esp-28h] [ebp-34h]
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  v3 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(*(_DWORD *)(a2 + 0x21C) + 4);
  v8 = *(_DWORD *)(a2 + 0x21C);
  v9 = 4;
  v3(v8, this, 4, &v9, 1);
  v7 = *(_DWORD *)(v2 + 0x21C);
  v5 = *(int (__cdecl **)(int, int *, int, int *, int))(v7 + 4);
  v9 = 1;
  result = v5(v7, &a2, 1, &v9, 1);
  *(this + 4) = (_BYTE)a2 != 0;
  return result;
}
