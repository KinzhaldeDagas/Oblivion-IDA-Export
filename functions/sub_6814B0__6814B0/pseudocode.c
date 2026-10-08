char __cdecl sub_6814B0(MobileObject *a1, PlayerCharacter *a2, float a3)
{
  TESObjectREFRVtbl *process; // ecx
  int v4; // esi
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  double v9; // st7
  int v10; // eax
  int v11; // edx
  TESObjectREFRVtbl *p_super; // edx
  void (__thiscall *Unk_0E)(TESForm *); // eax
  NiTransform *v14; // eax
  float v15; // eax
  float v16; // edx
  __m128 v17; // xmm0
  float v18; // xmm1_4
  float v19; // xmm3_4
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  double ScaledCollisionHeight; // st7
  int v23; // eax
  int v24; // eax
  float angleZ; // [esp+4h] [ebp-168h]
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

  v32 = 0; /*0x6814f7*/
  if ( a1 ) /*0x6814fc*/
  {
    if ( a2 ) /*0x681505*/
    {
      process = (TESObjectREFRVtbl *)a1->process; /*0x68150b*/
      if ( process ) /*0x681510*/
      {
        v4 = (*((int (__thiscall **)(TESObjectREFRVtbl *))process->super.super.InitializeComponent + 0x104))(process); /*0x681520*/
        if ( v4 ) /*0x681524*/
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0xC))(v4) ) /*0x681531*/
          {
            sub_68B3F0(v4); /*0x68153d*/
            v6 = *v5; /*0x681542*/
            v7 = v5[1]; /*0x681544*/
            v8 = v5[2]; /*0x681547*/
            v42.pos.x = v6; /*0x68154a*/
            v9 = v6 - a1->super.pos[0]; /*0x681552*/
            v42.pos.y = v7; /*0x681555*/
            v42.pos.z = v8; /*0x681559*/
            v36 = v9; /*0x68155f*/
            v33 = v7 - a1->super.pos[1]; /*0x68156a*/
            v27 = v8 - a1->super.pos[2]; /*0x681575*/
            v41[0] = v36; /*0x68157d*/
            v41[1] = v33; /*0x681585*/
            v41[2] = v27; /*0x68158d*/
            v37 = flt_A74A70; /*0x681597*/
            if ( sub_683AA0(v4) ) /*0x68159b*/
              v37 = NiPoint3_Length(v41) * hkFactor; /*0x6815b3*/
            v28 = a1->vtbl->GetZRotation(a1); /*0x6815c3*/
            if ( sub_5E0630(a1, 2u) ) /*0x6815cb*/
            {
              v28 = v28 - dbl_A3D5B8; /*0x6815de*/
              if ( v28 < 0.0 ) /*0x6815f1*/
                v28 = v28 + dbl_A3D5B0; /*0x6815f9*/
            }
            v34 = flt_A34BA0; /*0x68160f*/
            if ( ((unsigned __int8 (__thiscall *)(MobileObject *, int))a1->vtbl[1].super.Unk_4C)(a1, 1) ) /*0x681617*/
              v34 = kFaceEarNormalMatchRadius; /*0x681623*/
            v29 = Vector3_CalculateHeadingRadiansXY(v41) - v28; /*0x681638*/
            v30 = fabs(v29); /*0x681642*/
            if ( v34 > (double)v30 ) /*0x681655*/
            {
              LODWORD(v43[0]) = &hkClosestRayHitCollector::`vftable'; /*0x68165d*/
              v43[9] = 1.0; /*0x681668*/
              v43[0xC] = 0.0; /*0x68166f*/
              v43[1] = 1.0; /*0x681676*/
              v47[0x10] = 0; /*0x681684*/
              bhkWorldRayCastData::Init((bhkWorldRayCastData *)&v44[4]); /*0x68168b*/
              v10 = sub_680F30(a1); /*0x681691*/
              v11 = *(_DWORD *)(v10 + 0x30); /*0x681698*/
              v38.x = 0.0; /*0x68169b*/
              v38.y = 1.0; /*0x6816a7*/
              v35 = (__m128 *)v10; /*0x6816ab*/
              v47[7] = 0; /*0x6816af*/
              v45 = v11 & 0xFFFFFFC0 | 0x15; /*0x6816b6*/
              p_super = &a1->vtbl->super; /*0x6816bd*/
              v38.z = 0.0; /*0x6816bf*/
              v47[6] = v43; /*0x6816d8*/
              Unk_0E = p_super[1].super.Unk_0E; /*0x6816df*/
              qmemcpy(&v42, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x6816e5*/
              angleZ = ((double (__thiscall *)(MobileObject *))Unk_0E)(a1); /*0x6816f3*/
              NiMatrix33_InitRotationZ(&v42.rot, angleZ); /*0x6816f6*/
              v14 = sub_7101F0(&v42, (NiTransform *)&v42.pos, &v38); /*0x681709*/
              v38.x = v14->rot.data[0][0]; /*0x681714*/
              v38.y = v14->rot.data[0][1]; /*0x68171b*/
              v38.z = v14->rot.data[0][2]; /*0x681722*/
              v42.pos.x = _mm_shuffle_ps(v35[8], v35[8], 0x55).m128_f32[0] /*0x68173d*/
                        - _mm_shuffle_ps(v35[7], v35[7], 0x55).m128_f32[0];
              x = v42.pos.x; /*0x681749*/
              if ( !sub_4D8B90((TESObjectREFR *)a1) ) /*0x68174d*/
                x = v42.pos.x + dbl_A74B18; /*0x681760*/
              if ( v37 < (double)x ) /*0x681775*/
                x = v37; /*0x681777*/
              sub_4529E0(&v42.pos.x, &v38.x); /*0x681789*/
              v15 = a1->super.pos[0]; /*0x68179e*/
              v16 = a1->super.pos[2]; /*0x6817a1*/
              v17 = _mm_mul_ps(*(__m128 *)&v42.pos.x, *(__m128 *)&v42.pos.x); /*0x6817a7*/
              v17.m128_f32[0] = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x6817b9*/
                              + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
              v18 = 1.0 / fsqrt(v17.m128_f32[0]); /*0x6817c0*/
              v19 = *(float *)&dword_A46C30 - (float)((float)(v17.m128_f32[0] * v18) * v18); /*0x6817db*/
              v20 = 0; /*0x6817df*/
              v20.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v18) * v19; /*0x6817ea*/
              v21 = 0; /*0x6817fb*/
              v21.m128_f32[0] = x; /*0x6817fe*/
              v39[1] = a1->super.pos[1]; /*0x681809*/
              *(__m128 *)&v47[1] = _mm_mul_ps( /*0x681815*/
                                     _mm_shuffle_ps(v21, v21, 0),
                                     _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), *(__m128 *)&v42.pos.x));
              v39[0] = v15; /*0x68181d*/
              v40 = v16; /*0x681821*/
              ScaledCollisionHeight = Actor_GetScaledCollisionHeight(a1); /*0x681825*/
              v40 = ScaledCollisionHeight * a3 + v40; /*0x68183b*/
              sub_4529E0(&v42.pos.x, v39); /*0x68183f*/
              *(_OWORD *)&v44[4] = *(_OWORD *)&v42.pos.x; /*0x681849*/
              v23 = sub_531DE0(v35->m128_i32[2]); /*0x681855*/
              if ( v23 ) /*0x68185f*/
              {
                if ( (*(unsigned __int8 (__thiscall **)(int, char *))(*(_DWORD *)v23 + 0x88))(v23, &v44[4]) ) /*0x681873*/
                {
                  sub_4806E0(v46); /*0x681881*/
                  if ( sub_4DC270(v24) == a2 ) /*0x681892*/
                    return 1; /*0x681894*/
                }
              }
            }
          }
        }
      }
    }
  }
  return v32; /*0x68189d*/
}
