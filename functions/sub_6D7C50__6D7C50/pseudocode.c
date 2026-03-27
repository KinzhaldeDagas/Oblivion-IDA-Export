int __thiscall sub_6D7C50(_DWORD *this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int, int, int *, int); // edx
  int v6; // edi
  int (__cdecl *v7)(int, _DWORD *, int, int *, int); // ecx
  int v9; // [esp-14h] [ebp-24h]
  int v10; // [esp-14h] [ebp-24h]
  int v11; // [esp-10h] [ebp-20h]
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  nullsub_returnvVoid_1arg(a2);
  a2 = *(this + 4);
  v9 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v9 + 8);
  v12 = 4;
  v4(v9, &a2, 4, &v12, 1);
  if ( a2 )
  {
    v5 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
    v11 = *(this + 2);
    v10 = *(_DWORD *)(v2 + 0x220);
    v12 = 1;
    v5(v10, v11, a2, &v12, 1);
  }
  v6 = *(_DWORD *)(v2 + 0x220);
  v7 = *(int (__cdecl **)(int, _DWORD *, int, int *, int))(v6 + 8);
  v12 = 4;
  return v7(v6, this + 4, 4, &v12, 1);
}
