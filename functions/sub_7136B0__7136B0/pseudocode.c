int __thiscall sub_7136B0(_DWORD *this, int a2)
{
  void (__cdecl *v3)(int, int *, int, int *, int); // eax
  int v4; // esi
  int (__cdecl *v5)(int, int, int, int *, int); // eax
  int result; // eax
  int v7; // [esp-14h] [ebp-24h]
  int v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v7 = *(this + 0x87);
  v3 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 4);
  v9 = 4;
  v3(v7, &v8, 4, &v9, 1);
  v4 = *(this + 0x87);
  v5 = *(int (__cdecl **)(int, int, int, int *, int))(v4 + 4);
  v9 = 1;
  result = v5(v4, a2, v8, &v9, 1);
  *(_BYTE *)(v8 + a2) = 0;
  return result;
}
