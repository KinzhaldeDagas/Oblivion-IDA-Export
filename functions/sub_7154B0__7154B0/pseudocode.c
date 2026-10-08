int __thiscall sub_7154B0(float *this, signed int a2)
{
  signed int v3; // edi
  void (__cdecl *v4)(int, float *, int, signed int *, int); // edx
  void (__cdecl *v5)(int, float *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, float *, int, signed int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, float *, int, signed int *, int); // edx
  int v10; // [esp-3Ch] [ebp-48h]
  int v11; // [esp-28h] [ebp-34h]
  int v12; // [esp-14h] [ebp-20h]

  sub_7152A0(this); /*0x7154b5*/
  v3 = a2; /*0x7154ba*/
  v4 = *(void (__cdecl **)(int, float *, int, signed int *, int))(*(_DWORD *)(a2 + 0x220) + 8); /*0x7154c4*/
  v12 = *(_DWORD *)(a2 + 0x220); /*0x7154d5*/
  a2 = 4; /*0x7154d6*/
  v4(v12, this, 4, &a2, 1); /*0x7154da*/
  v11 = *(_DWORD *)(v3 + 0x220); /*0x7154ee*/
  v5 = *(void (__cdecl **)(int, float *, int, signed int *, int))(v11 + 8); /*0x7154ef*/
  a2 = 4; /*0x7154f2*/
  v5(v11, this + 1, 4, &a2, 1); /*0x7154f6*/
  v10 = *(_DWORD *)(v3 + 0x220); /*0x71550a*/
  v6 = *(void (__cdecl **)(int, float *, int, signed int *, int))(v10 + 8); /*0x71550b*/
  a2 = 4; /*0x71550e*/
  v6(v10, this + 2, 4, &a2, 1); /*0x715512*/
  v7 = *(_DWORD *)(v3 + 0x220); /*0x715514*/
  v8 = *(int (__cdecl **)(int, float *, int, signed int *, int))(v7 + 8); /*0x71551a*/
  a2 = 4; /*0x71552a*/
  return v8(v7, this + 3, 4, &a2, 1); /*0x715533*/
}
