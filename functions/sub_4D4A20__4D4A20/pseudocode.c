BSExtraData *__thiscall sub_4D4A20(TESObjectCELL *this)
{
  BSExtraDataVtbl *v2; // eax
  double v3; // st6
  double v4; // st7
  int v5; // eax
  FreeEntry *v6; // eax
  unsigned __int8 v7; // cl
  bhkWorld *v8; // eax
  bhkWorld *v9; // eax
  bhkWorld *v10; // esi
  TESTrapListener *v11; // eax
  TESTrapListener *v12; // eax
  float *v13; // eax
  double CellWaterHeight; // st7
  float *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  double v18; // st7
  bool v19; // zf
  BSExtraData *result; // eax
  CellMopp *v21; // eax
  CellMopp *v22; // eax
  float v23; // [esp+0h] [ebp-F8h]
  int v24; // [esp+4h] [ebp-F4h]
  float *v25; // [esp+14h] [ebp-E4h]
  float v26; // [esp+18h] [ebp-E0h]
  float v27[3]; // [esp+1Ch] [ebp-DCh] BYREF
  __m128 v28; // [esp+28h] [ebp-D0h]
  __m128 v29[5]; // [esp+38h] [ebp-C0h] BYREF
  float v30; // [esp+88h] [ebp-70h]
  int v31; // [esp+F4h] [ebp-4h]
  int savedregs; // [esp+F8h] [ebp+0h] BYREF

  if ( (this->members.flags0 & 1) != 0 ) /*0x4d4a66*/
    v2 = sub_424180(&this->members.extraData); /*0x4d4a6b*/
  else
    v2 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4d4a72*/
  if ( (this->members.flags0 & 1) != 0 && !v2 ) /*0x4d4a85*/
  {
    sub_88A4F0(v29[0].m128_f32); /*0x4d4a8f*/
    v28.m128_f32[0] = 0.0; /*0x4d4a96*/
    v28.m128_f32[1] = 0.0; /*0x4d4a9b*/
    v3 = flt_A46B20; /*0x4d4aa3*/
    v31 = 0; /*0x4d4aa9*/
    v28.m128_f32[2] = v3; /*0x4d4ab0*/
    v28.m128_f32[3] = 0.0; /*0x4d4ab4*/
    v4 = flt_A3D8F4; /*0x4d4abd*/
    v29[1] = v28; /*0x4d4ac3*/
    v23 = v4; /*0x4d4ac8*/
    sub_8A9460(v29, v23); /*0x4d4acb*/
    v5 = iNumHavokThreads; /*0x4d4ad2*/
    v30 = 1.0; /*0x4d4ad9*/
    havokThreads = v5; /*0x4d4aea*/
    v6 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000090uLL, v24); /*0x4d4aef*/
    v7 = 0x10 - ((unsigned __int8)v6 & 0xF); /*0x4d4afb*/
    v8 = (bhkWorld *)((char *)v6 + v7); /*0x4d4b00*/
    HIBYTE(v8[0xFFFFFFFF].unk78) = v7; /*0x4d4b02*/
    LOBYTE(v31) = 1; /*0x4d4b10*/
    v9 = bhkWorld::bhkWorld(v8, (int)v29); /*0x4d4b18*/
    v10 = v9; /*0x4d4b1d*/
    LOBYTE(v31) = 0; /*0x4d4b21*/
    if ( v9 ) /*0x4d4b28*/
      v9->__vftable[1].Unk_03(v9); /*0x4d4b31*/
    v11 = (TESTrapListener *)FormHeapAlloc(0x20u); /*0x4d4b35*/
    LOBYTE(v31) = 2; /*0x4d4b43*/
    if ( v11 ) /*0x4d4b4b*/
      v12 = TESTrapListener::TESTrapListener(v11); /*0x4d4b4f*/
    else
      v12 = 0; /*0x4d4b56*/
    LOBYTE(v31) = 0; /*0x4d4b5b*/
    sub_4CD320((const void **)&v10->__vftable, v12); /*0x4d4b62*/
    if ( (this->members.flags0 & 2) != 0 ) /*0x4d4b70*/
    {
      v13 = (float *)FormHeapAlloc(0x2Cu); /*0x4d4b74*/
      v25 = v13; /*0x4d4b7c*/
      LOBYTE(v31) = 3; /*0x4d4b82*/
      if ( v13 ) /*0x4d4b8a*/
      {
        if ( (this->members.flags0 & 2) != 0 ) /*0x4d4b95*/
        {
          CellWaterHeight = GetCellWaterHeight(&this->members.extraData); /*0x4d4ba2*/
          v13 = v25; /*0x4d4ba7*/
        }
        else
        {
          CellWaterHeight = flt_A3B888; /*0x4d4b97*/
        }
        v26 = CellWaterHeight; /*0x4d4bab*/
        v15 = sub_537E40(v13, v26); /*0x4d4bb9*/
      }
      else
      {
        v15 = 0; /*0x4d4bc0*/
      }
      LOBYTE(v31) = 0; /*0x4d4bc5*/
      sub_4CD2D0((const void **)&v10->__vftable, (int)v15); /*0x4d4bcc*/
    }
    v16 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4d4bd3*/
    LOBYTE(v31) = 4; /*0x4d4be1*/
    if ( v16 ) /*0x4d4be9*/
      v17 = sub_5360F0(v16); /*0x4d4bed*/
    else
      v17 = 0; /*0x4d4bf4*/
    LOBYTE(v31) = 0; /*0x4d4bf9*/
    sub_4CD2D0((const void **)&v10->__vftable, (int)v17); /*0x4d4c00*/
    sub_4CB7F0(this, v27); /*0x4d4c0c*/
    sub_88D260((__m128 *)v10, v27); /*0x4d4c18*/
    sub_88B680((int *)v10, havokDebug); /*0x4d4c27*/
    v18 = 1.0; /*0x4d4c2c*/
    if ( flt_B097C0 < 1.0 ) /*0x4d4c3b*/
      v18 = flt_B097C0; /*0x4d4c3d*/
    fMaxTime = v18; /*0x4d4c44*/
    sub_4240C0(&this->members.extraData, (Ni2DBuffer *)v10); /*0x4d4c4d*/
    if ( v10 ) /*0x4d4c54*/
      v10->__vftable[1].Unk_03(v10); /*0x4d4c5d*/
    ((void (__thiscall *)(bhkWorld *))v10->__vftable[1].DumpChildAttributes)(v10); /*0x4d4c69*/
    v19 = MEMORY[0xB33A34] == 0; /*0x4d4c6b*/
    v31 = 0xFFFFFFFF; /*0x4d4c71*/
    v10->unk1D = v19; /*0x4d4c7f*/
    v29[0].m128_i32[0] = (__int32)&hkBaseObject::`vftable'; /*0x4d4c82*/
  }
  result = (BSExtraData *)sub_41F950(&this->members.extraData); /*0x4d4c8f*/
  if ( !result ) /*0x4d4c96*/
  {
    v21 = (CellMopp *)FormHeapAlloc(0x18u); /*0x4d4c9a*/
    v31 = 5; /*0x4d4ca8*/
    if ( v21 ) /*0x4d4cb3*/
      v22 = CellMopp::CellMopp(v21); /*0x4d4cb7*/
    else
      v22 = 0; /*0x4d4cbe*/
    v31 = 0xFFFFFFFF; /*0x4d4cc3*/
    return sub_41F890(&this->members.extraData, (int)v22); /*0x4d4cce*/
  }
  return result; /*0x4d4cd3*/
}
