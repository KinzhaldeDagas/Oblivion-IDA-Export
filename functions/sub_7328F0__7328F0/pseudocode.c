int __thiscall sub_7328F0(_BYTE *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v5)(int, _BYTE *, int, signed int *, int); // edx
  int v6; // edi
  int (__cdecl *v7)(int, int, int, signed int *, int); // eax
  int v9; // [esp-38h] [ebp-48h]
  int v10; // [esp-34h] [ebp-44h]
  int v11; // [esp-28h] [ebp-38h]
  int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x7328f4*/
  nullsub_returnvVoid_1arg(a2); /*0x7328fb*/
  LOBYTE(a2) = *(this + 8); /*0x73290a*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x73291b*/
  v4 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v12 + 8); /*0x73291c*/
  v13 = 1; /*0x73291f*/
  v4(v12, &a2, 1, &v13, 1); /*0x732927*/
  v5 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x73292f*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x73293f*/
  a2 = 4; /*0x732940*/
  v5(v11, this + 0xC, 4, &a2, 1); /*0x732948*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x73294f*/
  v7 = *(int (__cdecl **)(int, int, int, signed int *, int))(v6 + 8); /*0x73295c*/
  v10 = 4 * *((_DWORD *)this + 3); /*0x732963*/
  v9 = *((_DWORD *)this + 5); /*0x732964*/
  a2 = 1; /*0x732966*/
  return v7(v6, v9, v10, &a2, 1); /*0x732973*/
}
