float *__thiscall sub_67C4A0(float **this, float *a2, TESObjectREFR *a3, char a4)
{
  float *v5; // eax
  float *v7; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  double v9; // st7
  double v10; // st7
  float v11; // edx
  float v12; // eax
  double v13; // st7
  double v14; // st7
  TESObjectCELL *v15; // eax
  TESObjectCELL *v16; // eax
  float *v17; // eax
  NiPoint3 v19; // [esp-1Ch] [ebp-4Ch]
  float v20; // [esp+Ch] [ebp-24h]
  float v21; // [esp+10h] [ebp-20h]
  float v22; // [esp+14h] [ebp-1Ch]
  float v23; // [esp+18h] [ebp-18h]
  float v24; // [esp+18h] [ebp-18h]
  float v25; // [esp+1Ch] [ebp-14h]
  float v26; // [esp+1Ch] [ebp-14h]
  float v27; // [esp+20h] [ebp-10h]
  float v28; // [esp+20h] [ebp-10h]
  int v29; // [esp+24h] [ebp-Ch] BYREF
  float v30; // [esp+28h] [ebp-8h]
  float v31; // [esp+2Ch] [ebp-4h]
  float v32; // [esp+38h] [ebp+8h]

  v5 = *(this + 0xF); /*0x67c4a6*/
  v25 = v5[6]; /*0x67c4bb*/
  v23 = v5[5]; /*0x67c4c1*/
  v27 = v5[7]; /*0x67c4c5*/
  v7 = a3->vtbl->GetPos(a3); /*0x67c4d1*/
  v20 = *v7; /*0x67c4db*/
  v21 = v7[1]; /*0x67c4e1*/
  v22 = v7[2]; /*0x67c4e5*/
  if ( Shared_GetDwordAtOffset40(a3) /*0x67c4fb*/
    && (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3), TESObjectCELL_IsInterior(DwordAtOffset40)) )
  {
    v9 = unk_B36B20; /*0x67c504*/
  }
  else
  {
    v9 = unk_B36B10; /*0x67c50c*/
  }
  v32 = v9 + v9 + dbl_A2FC68; /*0x67c523*/
  if ( a4 ) /*0x67c527*/
  {
    *(float *)&v29 = v23 - v20; /*0x67c531*/
    v30 = v25 - v21; /*0x67c53d*/
    v10 = v27 - v22; /*0x67c545*/
  }
  else
  {
    *(float *)&v29 = v20 - v23; /*0x67c553*/
    v30 = v21 - v25; /*0x67c55f*/
    v10 = v22 - v27; /*0x67c567*/
  }
  v31 = v10; /*0x67c56f*/
  v11 = v30; /*0x67c573*/
  v12 = v31; /*0x67c577*/
  *a2 = *(float *)&v29; /*0x67c57b*/
  a2[1] = v11; /*0x67c57d*/
  a2[2] = v12; /*0x67c582*/
  Vector3_NormalizeInPlace(a2); /*0x67c585*/
  *(float *)&v29 = *a2 * v32; /*0x67c598*/
  v30 = a2[1] * v32; /*0x67c5a1*/
  v31 = v32 * a2[2]; /*0x67c5a8*/
  v24 = *(float *)&v29 + v20; /*0x67c5b4*/
  v13 = v30; /*0x67c5bc*/
  *a2 = v24; /*0x67c5c0*/
  v26 = v13 + v21; /*0x67c5c8*/
  v14 = v31; /*0x67c5d0*/
  a2[1] = v26; /*0x67c5d4*/
  v28 = v14 + v22; /*0x67c5db*/
  a2[2] = v28; /*0x67c5e3*/
  if ( Shared_GetDwordAtOffset40(a3) ) /*0x67c5e6*/
  {
    v15 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3); /*0x67c5f1*/
    if ( TESObjectCELL_IsInterior(v15) ) /*0x67c5f8*/
    {
      v16 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3); /*0x67c603*/
      v19.x = *a2; /*0x67c619*/
      *(_QWORD *)&v19.y = *(_QWORD *)(a2 + 1); /*0x67c61e*/
      v17 = Actor_ChoosePathGridSteeringPosition(a3, (float *)&v29, v19, v16, 0.0, 0.0, 0); /*0x67c62b*/
      *a2 = *v17; /*0x67c632*/
      a2[1] = v17[1]; /*0x67c637*/
      a2[2] = v17[2]; /*0x67c63d*/
    }
  }
  *(this + 0x11) = *(float **)a2; /*0x67c642*/
  *(this + 0x12) = *((float **)a2 + 1); /*0x67c648*/
  *(this + 0x13) = *((float **)a2 + 2); /*0x67c64e*/
  return a2; /*0x67c651*/
}
