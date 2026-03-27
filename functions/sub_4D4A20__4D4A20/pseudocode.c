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
  __m128 *v10; // esi
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

  if ( (this->members.flags0 & 1) != 0 )
    v2 = sub_424180(&this->members.extraData);
  else
    v2 = (BSExtraDataVtbl *)bhkWorldM;
  if ( (this->members.flags0 & 1) != 0 && !v2 )
  {
    sub_88A4F0(v29[0].m128_f32);
    v28.m128_f32[0] = 0.0;
    v28.m128_f32[1] = 0.0;
    v3 = flt_A46B20;
    v31 = 0;
    v28.m128_f32[2] = v3;
    v28.m128_f32[3] = 0.0;
    v4 = flt_A3D8F4;
    v29[1] = v28;
    v23 = v4;
    sub_8A9460(v29, v23);
    v5 = iNumHavokThreads;
    v30 = 1.0;
    havokThreads = v5;
    v6 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000090uLL, v24);
    v7 = 0x10 - ((unsigned __int8)v6 & 0xF);
    v8 = (bhkWorld *)((char *)v6 + v7);
    HIBYTE(v8[0xFFFFFFFF].unk78) = v7;
    LOBYTE(v31) = 1;
    v9 = bhkWorld::bhkWorld(v8, (int)v29);
    v10 = (__m128 *)v9;
    LOBYTE(v31) = 0;
    if ( v9 )
      v9->__vftable[1].Unk_03(v9);
    v11 = (TESTrapListener *)FormHeapAlloc(0x20u);
    LOBYTE(v31) = 2;
    if ( v11 )
      v12 = TESTrapListener::TESTrapListener(v11);
    else
      v12 = 0;
    LOBYTE(v31) = 0;
    sub_4CD320(v10, (int)v12);
    if ( (this->members.flags0 & 2) != 0 )
    {
      v13 = (float *)FormHeapAlloc(0x2Cu);
      v25 = v13;
      LOBYTE(v31) = 3;
      if ( v13 )
      {
        if ( (this->members.flags0 & 2) != 0 )
        {
          CellWaterHeight = GetCellWaterHeight(&this->members.extraData);
          v13 = v25;
        }
        else
        {
          CellWaterHeight = flt_A3B888;
        }
        v26 = CellWaterHeight;
        v15 = sub_537E40(v13, v26);
      }
      else
      {
        v15 = 0;
      }
      LOBYTE(v31) = 0;
      sub_4CD2D0(v10, (int)v15);
    }
    v16 = (_DWORD *)FormHeapAlloc(0x14u);
    LOBYTE(v31) = 4;
    if ( v16 )
      v17 = sub_5360F0(v16);
    else
      v17 = 0;
    LOBYTE(v31) = 0;
    sub_4CD2D0(v10, (int)v17);
    sub_4CB7F0(this, v27);
    sub_88D260(v10, v27);
    sub_88B680((int *)v10, havokDebug);
    v18 = 1.0;
    if ( flt_B097C0 < 1.0 )
      v18 = flt_B097C0;
    fMaxTime = v18;
    sub_4240C0(&this->members.extraData, (Ni2DBuffer *)v10);
    if ( v10 )
      (*(void (__thiscall **)(__m128 *))(v10->m128_i32[0] + 0x58))(v10);
    (*(void (__thiscall **)(__m128 *))(v10->m128_i32[0] + 0x80))(v10);
    v19 = IsCollisionOn == 0;
    v31 = 0xFFFFFFFF;
    v10[1].m128_i8[9] = v19;
    v29[0].m128_i32[0] = (__int32)&hkBaseObject::`vftable';
  }
  result = (BSExtraData *)sub_41F950(&this->members.extraData);
  if ( !result )
  {
    v21 = (CellMopp *)FormHeapAlloc(0x18u);
    v31 = 5;
    if ( v21 )
      v22 = CellMopp::CellMopp(v21);
    else
      v22 = 0;
    v31 = 0xFFFFFFFF;
    return sub_41F890(&this->members.extraData, (int)v22);
  }
  return result;
}
