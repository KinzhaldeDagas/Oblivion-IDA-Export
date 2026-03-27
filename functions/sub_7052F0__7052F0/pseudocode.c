int __thiscall sub_7052F0(NiTexturingProperty_Map *this, int a2)
{
  signed int v2; // esi
  int v4; // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  __int16 v7; // dx
  __int16 v8; // cx
  int result; // eax
  int (__cdecl *v10)(int, UInt16 *, int, int *, int); // edx
  void (__cdecl *v11)(int, int *, int, int *, int); // eax
  int (__cdecl *v12)(int, int *, int, int *, int); // eax
  int (__cdecl *v13)(int, int *, int, int *, int); // eax
  int (__cdecl *v14)(int, int *, int, int *, int); // eax
  float *v15; // eax
  float *v16; // eax
  int v17; // [esp-28h] [ebp-3Ch]
  int v18; // [esp-28h] [ebp-3Ch]
  int v19; // [esp-14h] [ebp-28h]
  int v20; // [esp-14h] [ebp-28h]
  int v21; // [esp-14h] [ebp-28h]
  int v22; // [esp-14h] [ebp-28h]
  int v23; // [esp+Ch] [ebp-8h] BYREF
  int v24; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_712A20((unsigned int *)a2);
  v4 = *(_DWORD *)(v2 + 0x21C);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14010002u )
  {
    v10 = *(int (__cdecl **)(int, UInt16 *, int, int *, int))(v4 + 4);
    a2 = 2;
    result = v10(v4, &this->unk04, 2, &a2, 1);
  }
  else
  {
    v19 = *(_DWORD *)(v2 + 0x21C);
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v4 + 4);
    a2 = 4;
    v5(v19, &v23, 4, &a2, 1);
    this->unk04 = ((_WORD)v23 << 0xC) | this->unk04 & 0xCFFF;
    v17 = *(_DWORD *)(v2 + 0x21C);
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v17 + 4);
    a2 = 4;
    v6(v17, &v23, 4, &a2, 1);
    LOBYTE(v7) = 0;
    HIBYTE(v7) = v23;
    v8 = this->unk04 & 0xF0FF;
    a2 = 4;
    this->unk04 = v7 | v8;
    result = (*(int (__cdecl **)(_DWORD, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4))(
               *(_DWORD *)(v2 + 0x21C),
               &v24,
               4,
               &a2,
               1);
    this->unk04 = v24 | this->unk04 & 0xFF00;
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA030004u )
  {
    v20 = *(_DWORD *)(v2 + 0x21C);
    v11 = *(void (__cdecl **)(int, int *, int, int *, int))(v20 + 4);
    v24 = 2;
    v11(v20, &a2, 2, &v24, 1);
    v18 = *(_DWORD *)(v2 + 0x21C);
    v12 = *(int (__cdecl **)(int, int *, int, int *, int))(v18 + 4);
    v24 = 2;
    result = v12(v18, &a2, 2, &v24, 1);
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0x4010010u )
  {
    v21 = *(_DWORD *)(v2 + 0x21C);
    v13 = *(int (__cdecl **)(int, int *, int, int *, int))(v21 + 4);
    v24 = 2;
    result = v13(v21, &a2, 2, &v24, 1);
  }
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA00010Au )
  {
    this->unk0C = 0;
    v22 = *(_DWORD *)(v2 + 0x21C);
    v14 = *(int (__cdecl **)(int, int *, int, int *, int))(v22 + 4);
    v24 = 1;
    result = v14(v22, &a2, 1, &v24, 1);
    if ( (_BYTE)a2 == 1 )
    {
      v15 = (float *)FormHeapAlloc(0x48u);
      if ( v15 )
      {
        v16 = sub_703A30(v15);
        this->unk0C = v16;
        return sub_72FF90((char *)v16, v2);
      }
      else
      {
        this->unk0C = 0;
        return sub_72FF90(0, v2);
      }
    }
  }
  return result;
}
