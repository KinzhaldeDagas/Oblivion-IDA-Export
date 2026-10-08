int __thiscall sub_7094A0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v3)(int, char *, int, signed int *, int); // edx
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x7094a2*/
  v3 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(a2 + 0x220) + 8); /*0x7094ac*/
  v10 = *(_DWORD *)(a2 + 0x220); /*0x7094bb*/
  a2 = 4; /*0x7094bc*/
  v3(v10, this, 4, &a2, 1); /*0x7094c4*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x7094d9*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 8); /*0x7094da*/
  a2 = 4; /*0x7094dd*/
  v5(v9, this + 4, 4, &a2, 1); /*0x7094e5*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x7094e7*/
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 8); /*0x7094ed*/
  a2 = 4; /*0x7094fe*/
  return v7(v6, this + 8, 4, &a2, 1); /*0x70950b*/
}
