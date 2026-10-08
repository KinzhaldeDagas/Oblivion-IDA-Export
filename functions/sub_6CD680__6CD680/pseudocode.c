int __thiscall sub_6CD680(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, _DWORD *, int, signed int *, int); // edx
  int v10; // [esp-3Ch] [ebp-44h]
  int v11; // [esp-28h] [ebp-30h]
  int v12; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6cd682*/
  (*(void (__thiscall **)(signed int, _DWORD))(*(_DWORD *)a2 + 0x2C))(a2, *this); /*0x6cd692*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x6cd6a7*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v12 + 8); /*0x6cd6a8*/
  a2 = 4; /*0x6cd6ab*/
  v4(v12, this + 1, 4, &a2, 1); /*0x6cd6b3*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x6cd6c8*/
  v5 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v11 + 8); /*0x6cd6c9*/
  a2 = 4; /*0x6cd6cc*/
  v5(v11, this + 2, 4, &a2, 1); /*0x6cd6d4*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x6cd6e9*/
  v6 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v10 + 8); /*0x6cd6ea*/
  a2 = 1; /*0x6cd6ed*/
  v6(v10, this + 3, 1, &a2, 1); /*0x6cd6f5*/
  v7 = *(_DWORD *)(v2 + 0x220); /*0x6cd6f7*/
  v8 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(v7 + 8); /*0x6cd6fd*/
  a2 = 4; /*0x6cd70e*/
  return v8(v7, this + 4, 4, &a2, 1); /*0x6cd71b*/
}
