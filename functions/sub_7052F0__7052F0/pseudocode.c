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

  v2 = a2; /*0x7052f5*/
  sub_712A20((unsigned int *)a2); /*0x7052fe*/
  v4 = *(_DWORD *)(v2 + 0x21C); /*0x70530d*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14010002u ) /*0x70531a*/
  {
    v10 = *(int (__cdecl **)(int, UInt16 *, int, int *, int))(v4 + 4); /*0x7053c7*/
    a2 = 2; /*0x7053d0*/
    result = v10(v4, &this->unk04, 2, &a2, 1); /*0x7053d4*/
  }
  else
  {
    v19 = *(_DWORD *)(v2 + 0x21C); /*0x70532c*/
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v4 + 4); /*0x70532d*/
    a2 = 4; /*0x705330*/
    v5(v19, &v23, 4, &a2, 1); /*0x705338*/
    this->unk04 = ((_WORD)v23 << 0xC) | this->unk04 & 0xCFFF; /*0x70534d*/
    v17 = *(_DWORD *)(v2 + 0x21C); /*0x705365*/
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v17 + 4); /*0x705366*/
    a2 = 4; /*0x705369*/
    v6(v17, &v23, 4, &a2, 1); /*0x705371*/
    LOBYTE(v7) = 0; /*0x705377*/
    HIBYTE(v7) = v23; /*0x705379*/
    v8 = this->unk04 & 0xF0FF; /*0x70537d*/
    a2 = 4; /*0x705384*/
    this->unk04 = v7 | v8; /*0x70538f*/
    result = (*(int (__cdecl **)(_DWORD, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x7053a9*/
               *(_DWORD *)(v2 + 0x21C),
               &v24,
               4,
               &a2,
               1);
    this->unk04 = v24 | this->unk04 & 0xFF00; /*0x7053bc*/
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA030004u ) /*0x7053e3*/
  {
    v20 = *(_DWORD *)(v2 + 0x21C); /*0x7053f8*/
    v11 = *(void (__cdecl **)(int, int *, int, int *, int))(v20 + 4); /*0x7053f9*/
    v24 = 2; /*0x7053fc*/
    v11(v20, &a2, 2, &v24, 1); /*0x705400*/
    v18 = *(_DWORD *)(v2 + 0x21C); /*0x705415*/
    v12 = *(int (__cdecl **)(int, int *, int, int *, int))(v18 + 4); /*0x705416*/
    v24 = 2; /*0x705419*/
    result = v12(v18, &a2, 2, &v24, 1); /*0x70541d*/
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0x4010010u ) /*0x70542c*/
  {
    v21 = *(_DWORD *)(v2 + 0x21C); /*0x705441*/
    v13 = *(int (__cdecl **)(int, int *, int, int *, int))(v21 + 4); /*0x705442*/
    v24 = 2; /*0x705445*/
    result = v13(v21, &a2, 2, &v24, 1); /*0x705449*/
  }
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA00010Au ) /*0x705458*/
  {
    this->unk0C = 0; /*0x705461*/
    v22 = *(_DWORD *)(v2 + 0x21C); /*0x705475*/
    v14 = *(int (__cdecl **)(int, int *, int, int *, int))(v22 + 4); /*0x705476*/
    v24 = 1; /*0x705479*/
    result = v14(v22, &a2, 1, &v24, 1); /*0x705481*/
    if ( (_BYTE)a2 == 1 ) /*0x70548b*/
    {
      v15 = (float *)FormHeapAlloc(0x48u); /*0x70548f*/
      if ( v15 ) /*0x705499*/
      {
        v16 = sub_703A30(v15); /*0x70549d*/
        this->unk0C = v16; /*0x7054a5*/
        return sub_72FF90((char *)v16, v2); /*0x7054a8*/
      }
      else
      {
        this->unk0C = 0; /*0x7054bb*/
        return sub_72FF90(0, v2); /*0x7054be*/
      }
    }
  }
  return result; /*0x7054ad*/
}
