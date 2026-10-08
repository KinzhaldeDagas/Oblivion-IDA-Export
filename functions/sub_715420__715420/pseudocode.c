int __thiscall sub_715420(char *this, signed int a2)
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

  v2 = a2; /*0x715423*/
  v3 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(a2 + 0x21C) + 4); /*0x71542d*/
  v12 = *(_DWORD *)(a2 + 0x21C); /*0x715440*/
  a2 = 4; /*0x715441*/
  v3(v12, this, 4, &a2, 1); /*0x715445*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x715459*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v11 + 4); /*0x71545a*/
  a2 = 4; /*0x71545d*/
  v5(v11, this + 4, 4, &a2, 1); /*0x715461*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x715475*/
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 4); /*0x715476*/
  a2 = 4; /*0x715479*/
  v6(v10, this + 8, 4, &a2, 1); /*0x71547d*/
  v7 = *(_DWORD *)(v2 + 0x21C); /*0x71547f*/
  v8 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v7 + 4); /*0x715485*/
  a2 = 4; /*0x715495*/
  return v8(v7, this + 0xC, 4, &a2, 1); /*0x71549e*/
}
