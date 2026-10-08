int __thiscall sub_7054D0(NiTexturingProperty_Map *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int v5; // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // edx
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  void (__cdecl *v8)(int, UInt16 *, int, int *, int); // eax
  int v9; // eax
  int (__cdecl *v10)(int, signed int *, int, int *, int); // edx
  int result; // eax
  char *unk0C; // ecx
  int v13; // [esp-3Ch] [ebp-54h]
  int v14; // [esp-14h] [ebp-2Ch]
  int v15; // [esp-14h] [ebp-2Ch]
  int v16; // [esp+8h] [ebp-10h] BYREF
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h] BYREF
  int unk04_low; // [esp+14h] [ebp-4h] BYREF

  v2 = a2; /*0x7054d5*/
  (*(void (__thiscall **)(signed int, char *))(*(_DWORD *)a2 + 0x2C))(a2, this->unk08); /*0x7054e6*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14010002u ) /*0x7054f4*/
  {
    v15 = *(_DWORD *)(v2 + 0x220); /*0x705595*/
    v8 = *(void (__cdecl **)(int, UInt16 *, int, int *, int))(v15 + 8); /*0x705596*/
    unk04_low = 2; /*0x705599*/
    v8(v15, &this->unk04, 2, &unk04_low, 1); /*0x7055a1*/
  }
  else
  {
    v17 = (this->unk04 >> 0xC) & 3; /*0x705509*/
    v14 = *(_DWORD *)(v2 + 0x220); /*0x70551a*/
    v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v14 + 8); /*0x70551b*/
    v16 = 4; /*0x70551e*/
    v4(v14, &v17, 4, &v16, 1); /*0x705526*/
    v5 = *(_DWORD *)(v2 + 0x220); /*0x70552c*/
    v18 = HIBYTE(this->unk04) & 0xF; /*0x70553c*/
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v5 + 8); /*0x705540*/
    v16 = 4; /*0x70554b*/
    v6(v5, &v18, 4, &v16, 1); /*0x705553*/
    unk04_low = LOBYTE(this->unk04); /*0x705560*/
    v13 = *(_DWORD *)(v2 + 0x220); /*0x705571*/
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v13 + 8); /*0x705572*/
    v16 = 4; /*0x705575*/
    v7(v13, &unk04_low, 4, &v16, 1); /*0x70557d*/
  }
  v9 = *(_DWORD *)(v2 + 0x220); /*0x7055aa*/
  LOBYTE(a2) = this->unk0C != 0; /*0x7055ba*/
  v10 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v9 + 8); /*0x7055be*/
  unk04_low = 1; /*0x7055c9*/
  result = v10(v9, &a2, 1, &unk04_low, 1); /*0x7055d1*/
  unk0C = (char *)this->unk0C; /*0x7055d3*/
  if ( unk0C ) /*0x7055db*/
    return sub_730010(unk0C, v2); /*0x7055de*/
  return result; /*0x7055e3*/
}
