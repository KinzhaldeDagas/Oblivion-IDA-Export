char __cdecl sub_6814B0(TESObjectREFR *a1, PlayerCharacter *a2, float a3)
{
  TESObjectREFRVtbl *vtbl; // ecx
  int v4; // esi
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  double v9; // st7
  int v10; // eax
  int v11; // edx
  TESObjectREFRVtbl *v12; // edx
  void (__thiscall *Unk_0E)(TESForm *); // eax
  NiTransform *v14; // eax
  float v15; // eax
  float v16; // edx
  __m128 v17; // xmm0
  float v18; // xmm1_4
  float v19; // xmm3_4
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  double v22; // st7
  int v23; // eax
  int v24; // eax
  float v26; // [esp+4h] [ebp-168h]
  float v27; // [esp+24h] [ebp-148h]
  float v28; // [esp+24h] [ebp-148h]
  float v29; // [esp+24h] [ebp-148h]
  float v30; // [esp+24h] [ebp-148h]
  float x; // [esp+24h] [ebp-148h]
  char v32; // [esp+2Bh] [ebp-141h]
  float v33; // [esp+2Ch] [ebp-140h]
  float v34; // [esp+2Ch] [ebp-140h]
  __m128 *v35; // [esp+2Ch] [ebp-140h]
  float v36; // [esp+30h] [ebp-13Ch]
  float v37; // [esp+30h] [ebp-13Ch]
  NiPoint3 v38; // [esp+34h] [ebp-138h] BYREF
  float v39[2]; // [esp+40h] [ebp-12Ch] BYREF
  float v40; // [esp+48h] [ebp-124h]
  float v41[3]; // [esp+4Ch] [ebp-120h] BYREF
  NiTransform v42; // [esp+58h] [ebp-114h] BYREF
  float v43[15]; // [esp+8Ch] [ebp-E0h] BYREF
  char v44[40]; // [esp+C8h] [ebp-A4h] BYREF
  unsigned int v45; // [esp+F0h] [ebp-7Ch]
  int v46; // [esp+11Ch] [ebp-50h]
  _DWORD v47[17]; // [esp+128h] [ebp-44h]

  v32 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      vtbl = a1[1].vtbl;
      if ( vtbl )
      {
        v4 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x104))(vtbl);
        if ( v4 )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0xC))(v4) )
          {
            sub_68B3F0(v4);
            v6 = *v5;
            v7 = v5[1];
            v8 = v5[2];
            v42.pos.x = v6;
            v9 = v6 - a1->member.pos[0];
            v42.pos.y = v7;
            v42.pos.z = v8;
            v36 = v9;
            v33 = v7 - a1->member.pos[1];
            v27 = v8 - a1->member.pos[2];
            v41[0] = v36;
            v41[1] = v33;
            v41[2] = v27;
            v37 = flt_A74A70;
            if ( sub_683AA0(v4) )
              v37 = sub_404C90(v41) * hkFactor;
            v28 = ((double (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_0E)(a1);
            if ( sub_5E0630(a1, 2u) )
            {
              v28 = v28 - dbl_A3D5B8;
              if ( v28 < 0.0 )
                v28 = v28 + dbl_A3D5B0;
            }
            v34 = flt_A34BA0;
            if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].GetSleepState)(a1, 1) )
              v34 = flt_A2FAAC;
            v29 = sub_683CB0(v41) - v28;
            v30 = fabs(v29);
            if ( v34 > (double)v30 )
            {
              LODWORD(v43[0]) = &hkClosestRayHitCollector::`vftable';
              v43[9] = 1.0;
              v43[0xC] = 0.0;
              v43[1] = 1.0;
              v47[0x10] = 0;
              bhkWorldRayCastData::Init((bhkWorldRayCastData *)&v44[4]);
              v10 = sub_680F30((MobileObject *)a1);
              v11 = *(_DWORD *)(v10 + 0x30);
              v38.x = 0.0;
              v38.y = 1.0;
              v35 = (__m128 *)v10;
              v47[7] = 0;
              v45 = v11 & 0xFFFFFFC0 | 0x15;
              v12 = a1->vtbl;
              v38.z = 0.0;
              v47[6] = v43;
              Unk_0E = v12[1].super.Unk_0E;
              qmemcpy(&v42, &stru_B26AF0[0xA].unk2C, 0x24u);
              v26 = ((double (__thiscall *)(TESObjectREFR *))Unk_0E)(a1);
              NiMatrix33_InitRotationTransform((float *)&v42, v26);
              v14 = sub_7101F0(&v42, (NiTransform *)&v42.pos, &v38);
              v38.x = v14->rot.data[0][0];
              v38.y = v14->rot.data[0][1];
              v38.z = v14->rot.data[0][2];
              v42.pos.x = _mm_shuffle_ps(v35[8], v35[8], 0x55).m128_f32[0]
                        - _mm_shuffle_ps(v35[7], v35[7], 0x55).m128_f32[0];
              x = v42.pos.x;
              if ( !sub_4D8B90(a1) )
                x = v42.pos.x + dbl_A74B18;
              if ( v37 < (double)x )
                x = v37;
              sub_4529E0(&v42.pos.x, &v38.x);
              v15 = a1->member.pos[0];
              v16 = a1->member.pos[2];
              v17 = _mm_mul_ps(*(__m128 *)&v42.pos.x, *(__m128 *)&v42.pos.x);
              v17.m128_f32[0] = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
                              + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
              v18 = 1.0 / fsqrt(v17.m128_f32[0]);
              v19 = *(float *)&dword_A46C30 - (float)((float)(v17.m128_f32[0] * v18) * v18);
              v20 = 0;
              v20.m128_f32[0] = (float)(flt_A3D65C * v18) * v19;
              v21 = 0;
              v21.m128_f32[0] = x;
              v39[1] = a1->member.pos[1];
              *(__m128 *)&v47[1] = _mm_mul_ps(
                                     _mm_shuffle_ps(v21, v21, 0),
                                     _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), *(__m128 *)&v42.pos.x));
              v39[0] = v15;
              v40 = v16;
              v22 = sub_5E0660(a1);
              v40 = v22 * a3 + v40;
              sub_4529E0(&v42.pos.x, v39);
              *(_OWORD *)&v44[4] = *(_OWORD *)&v42.pos.x;
              v23 = sub_531DE0(v35->m128_i32[2]);
              if ( v23 )
              {
                if ( (*(unsigned __int8 (__thiscall **)(int, char *))(*(_DWORD *)v23 + 0x88))(v23, &v44[4]) )
                {
                  sub_4806E0(v46);
                  if ( sub_4DC270(v24) == a2 )
                    return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return v32;
}
