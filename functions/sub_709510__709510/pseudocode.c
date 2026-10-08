int __thiscall sub_709510(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v3)(int, char *, int, signed int *, int); // edx
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, char *, int, signed int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, char *, int, signed int *, int); // edx
  int v10; // [esp-3Ch] [ebp-48h]
  int v11; // [esp-28h] [ebp-34h]
  int v12; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x709513*/
  v3 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(a2 + 0x220) + 8); /*0x70951d*/
  v12 = *(_DWORD *)(a2 + 0x220); /*0x709530*/
  a2 = 4; /*0x709531*/
  v3(v12, this, 4, &a2, 1); /*0x709535*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x709549*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v11 + 8); /*0x70954a*/
  a2 = 4; /*0x70954d*/
  v5(v11, this + 4, 4, &a2, 1); /*0x709551*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x709565*/
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 8); /*0x709566*/
  a2 = 4; /*0x709569*/
  v6(v10, this + 8, 4, &a2, 1); /*0x70956d*/
  v7 = *(_DWORD *)(v2 + 0x220); /*0x70956f*/
  v8 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v7 + 8); /*0x709575*/
  a2 = 4; /*0x709585*/
  return v8(v7, this + 0xC, 4, &a2, 1); /*0x70958e*/
}
