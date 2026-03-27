int __thiscall sub_544EA0(void *this, int a2)
{
  float *v3; // eax
  double v4; // st7
  double v5; // rt0
  float v6; // edx
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  double v10; // rt0
  float v11; // edx
  float *v12; // eax
  float *v13; // ebx
  float *v14; // eax
  float *v15; // edi
  float *v16; // ebp
  NiAVObject *v17; // eax
  NiAVObject *v18; // ebx
  NiAVObject *v19; // ebp
  _WORD *v21; // [esp+14h] [ebp-34h]
  int v22; // [esp+18h] [ebp-30h]
  int v23; // [esp+1Ch] [ebp-2Ch]
  float *v24; // [esp+20h] [ebp-28h]
  float *v25; // [esp+24h] [ebp-24h]
  float v26; // [esp+2Ch] [ebp-1Ch]
  float v27; // [esp+2Ch] [ebp-1Ch]
  float v28; // [esp+2Ch] [ebp-1Ch]
  float v29; // [esp+30h] [ebp-18h]
  float v30; // [esp+30h] [ebp-18h]
  float v31; // [esp+30h] [ebp-18h]
  float v32; // [esp+34h] [ebp-14h]
  float v33; // [esp+38h] [ebp-10h]
  float v34; // [esp+4Ch] [ebp+4h]
  float v35; // [esp+4Ch] [ebp+4h]
  float v36; // [esp+4Ch] [ebp+4h]
  float v37; // [esp+4Ch] [ebp+4h]
  _WORD *v38; // [esp+4Ch] [ebp+4h]

  sub_543D30((Sky *)this, a2);
  NiObjectNET_SetName(*((NiObjectNET **)this + 1), "Sun Root");
  v3 = (float *)FormHeapAlloc(0x30u);
  v4 = flt_B11E2C;
  v23 = (int)v3;
  v5 = dbl_A3D360;
  v26 = v4 * v5;
  *v3 = v26;
  v29 = v4;
  v3[1] = v29;
  v3[2] = 0.0;
  v34 = flt_B11E2C * v5;
  v3[3] = v34;
  v3[4] = v34;
  v3[5] = 0.0;
  v6 = flt_B11E2C;
  v3[6] = flt_B11E2C;
  v3[7] = v6;
  v3[8] = 0.0;
  v35 = v5 * flt_B11E2C;
  v3[9] = flt_B11E2C;
  v3[0xA] = v35;
  v3[0xB] = 0.0;
  v7 = (float *)FormHeapAlloc(0x30u);
  *v7 = Vector3_InitValue_;
  v7[1] = *(&Vector3_InitValue_ + 1);
  v7[2] = dword_B3F9B0;
  v7[3] = Vector3_InitValue_;
  v22 = (int)v7;
  v7[4] = *(&Vector3_InitValue_ + 1);
  v7[5] = dword_B3F9B0;
  v7[6] = Vector3_InitValue_;
  v7[7] = *(&Vector3_InitValue_ + 1);
  v7[8] = dword_B3F9B0;
  v7[9] = Vector3_InitValue_;
  v7[0xA] = *(&Vector3_InitValue_ + 1);
  v7[0xB] = dword_B3F9B0;
  v8 = (float *)FormHeapAlloc(0x30u);
  v9 = flt_B11E34;
  v10 = dbl_A3D360;
  v27 = v9 * v10;
  *v8 = v27;
  v30 = v9;
  v8[1] = v30;
  v8[2] = 0.0;
  v36 = flt_B11E34 * v10;
  v8[3] = v36;
  v8[4] = v36;
  v8[5] = 0.0;
  v11 = flt_B11E34;
  v8[6] = flt_B11E34;
  v8[7] = v11;
  v8[8] = 0.0;
  v37 = v10 * flt_B11E34;
  v8[9] = flt_B11E34;
  v8[0xA] = v37;
  v8[0xB] = 0.0;
  v25 = (float *)FormHeapAlloc(0x30u);
  *v25 = Vector3_InitValue_;
  v25[1] = *(&Vector3_InitValue_ + 1);
  v28 = 1.0;
  v25[2] = dword_B3F9B0;
  v31 = 0.0;
  v32 = 0.0;
  v25[3] = Vector3_InitValue_;
  v25[4] = *(&Vector3_InitValue_ + 1);
  v33 = 1.0;
  v25[5] = dword_B3F9B0;
  v25[6] = Vector3_InitValue_;
  v25[7] = *(&Vector3_InitValue_ + 1);
  v25[8] = dword_B3F9B0;
  v25[9] = Vector3_InitValue_;
  v25[0xA] = *(&Vector3_InitValue_ + 1);
  v25[0xB] = dword_B3F9B0;
  v12 = (float *)FormHeapAlloc(0x40u);
  v13 = v12;
  if ( v12 )
    sub_401080(v12, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v13 = 0;
  *v13 = v28;
  v13[4] = v28;
  v13[8] = v28;
  v13[0xC] = v28;
  v13[1] = v31;
  v13[5] = v31;
  v13[9] = v31;
  v13[0xD] = v31;
  v13[2] = v32;
  v13[6] = v32;
  v13[0xA] = v32;
  v13[0xE] = v32;
  v13[3] = v33;
  v13[7] = v33;
  v13[0xB] = v33;
  v13[0xF] = v33;
  v14 = (float *)FormHeapAlloc(0x40u);
  v15 = v14;
  if ( v14 )
    sub_401080(v14, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v15 = 0;
  *v15 = v28;
  v15[4] = v28;
  v15[8] = v28;
  v15[0xC] = v28;
  v15[1] = v31;
  v15[5] = v31;
  v15[9] = v31;
  v15[0xD] = v31;
  v15[2] = v32;
  v15[6] = v32;
  v15[0xA] = v32;
  v15[0xE] = v32;
  v15[3] = v33;
  v15[7] = v33;
  v15[0xB] = v33;
  v15[0xF] = v33;
  v16 = (float *)FormHeapAlloc(0x20u);
  *v16 = 0.0;
  v16[1] = 0.0;
  v16[2] = 0.0;
  v16[3] = 1.0;
  v16[4] = 1.0;
  v16[5] = 0.0;
  v16[6] = 1.0;
  v16[7] = 1.0;
  v24 = (float *)FormHeapAlloc(0x20u);
  *v24 = 0.0;
  v24[1] = 0.0;
  v24[2] = 0.0;
  v24[3] = 1.0;
  v24[4] = 1.0;
  v24[5] = 0.0;
  v24[6] = 1.0;
  v24[7] = 1.0;
  v38 = (_WORD *)FormHeapAlloc(0xCu);
  *v38 = 0;
  v38[1] = 1;
  v38[2] = 2;
  v38[3] = 2;
  v38[4] = 1;
  v38[5] = 3;
  v21 = (_WORD *)FormHeapAlloc(0xCu);
  *v21 = 0;
  v21[1] = 1;
  v21[2] = 2;
  v21[3] = 2;
  v21[4] = 1;
  v21[5] = 3;
  v17 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v17 )
    v18 = sub_7174B0(v17, 4, v23, v22, (int)v13, (int)v16, 1, 0, 2, (int)v38);
  else
    v18 = 0;
  v19 = *((NiAVObject **)this + 4);
  if ( v19 != v18 )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->members) )
        v19->vtbl->super.super.Destructor((NiRefObject *)v19, 1);
    }
    *((_DWORD *)this + 4) = v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)&v18->members);
  }
  NiObjectNET_SetName(*((NiObjectNET **)this + 4), "Sun Geometry");
  *(_WORD *)(*((_DWORD *)this + 4) + 0x18) |= 2u;
  return sub_545450(v38);
}
