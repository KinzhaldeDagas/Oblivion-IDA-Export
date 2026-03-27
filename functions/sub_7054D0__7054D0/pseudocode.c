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

  v2 = a2;
  (*(void (__thiscall **)(signed int, char *))(*(_DWORD *)a2 + 0x2C))(a2, this->unk08);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14010002u )
  {
    v15 = *(_DWORD *)(v2 + 0x220);
    v8 = *(void (__cdecl **)(int, UInt16 *, int, int *, int))(v15 + 8);
    unk04_low = 2;
    v8(v15, &this->unk04, 2, &unk04_low, 1);
  }
  else
  {
    v17 = (this->unk04 >> 0xC) & 3;
    v14 = *(_DWORD *)(v2 + 0x220);
    v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v14 + 8);
    v16 = 4;
    v4(v14, &v17, 4, &v16, 1);
    v5 = *(_DWORD *)(v2 + 0x220);
    v18 = HIBYTE(this->unk04) & 0xF;
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v5 + 8);
    v16 = 4;
    v6(v5, &v18, 4, &v16, 1);
    unk04_low = LOBYTE(this->unk04);
    v13 = *(_DWORD *)(v2 + 0x220);
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v13 + 8);
    v16 = 4;
    v7(v13, &unk04_low, 4, &v16, 1);
  }
  v9 = *(_DWORD *)(v2 + 0x220);
  LOBYTE(a2) = this->unk0C != 0;
  v10 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v9 + 8);
  unk04_low = 1;
  result = v10(v9, &a2, 1, &unk04_low, 1);
  unk0C = (char *)this->unk0C;
  if ( unk0C )
    return sub_730010(unk0C, v2);
  return result;
}
