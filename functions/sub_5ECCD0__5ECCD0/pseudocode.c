void __userpurge sub_5ECCD0(Actor *a1@<ecx>, int a2@<edi>, double x@<st2>, int a4, __m128 *a5)
{
  int v5; // edi
  BSExtraDataVtbl *ExtraScript; // eax
  PlayerCharacter *v8; // ecx
  bool v9; // zf
  ExtraScript *ExtraScriptEventList; // edi
  Script *v11; // ebx
  double v12; // st7
  __m128 *v13; // edi
  bhkCharacterProxy *CharProxy; // ecx
  int v15; // eax
  int v16; // ebx
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 *v20; // eax
  double v21; // st7
  double v22; // st6
  __m128 v23; // xmm0
  char *v24; // ecx
  __m128 *v25; // eax
  bool v26; // c3
  __m128 v27; // xmm0
  double v28; // st7
  __m128 v29; // xmm0
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v31; // eax
  double v32; // rt1
  char v33; // al
  int v34; // edi
  void (__thiscall *GetAV_F)(TESObjectREFR *); // edx
  int v36; // edi
  double v37; // st7
  double v38; // st7
  double v39; // st7
  double v40; // st6
  double v41; // st7
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  double v43; // st6
  float *v44; // eax
  double v45; // st7
  double v46; // st7
  float v47; // edx
  float v48; // ecx
  float *v49; // eax
  double v50; // st7
  int v51; // ecx
  __m128 v52; // xmm0
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // eax
  __int8 v56; // bl
  bool v57; // cl
  double v58; // st7
  NiNode *v59; // eax
  NiNode *v60; // eax
  NiNode *(__thiscall *v61)(TESObjectREFR *); // eax
  __m128 v62; // xmm0
  float v63; // xmm1_4
  float v64; // xmm3_4
  __m128 v65; // xmm0
  __m128 v66; // xmm1
  int v67; // eax
  __m128 *v68; // esi
  float v69; // [esp+34h] [ebp-CCh]
  int v70; // [esp+3Ch] [ebp-C4h]
  bool v72; // [esp+4Fh] [ebp-B1h]
  char v73[4]; // [esp+50h] [ebp-B0h] BYREF
  float v74; // [esp+54h] [ebp-ACh]
  float v75; // [esp+58h] [ebp-A8h]
  float v76; // [esp+5Ch] [ebp-A4h]
  char v77[4]; // [esp+60h] [ebp-A0h] BYREF
  char ArgList[4]; // [esp+64h] [ebp-9Ch] BYREF
  float v79; // [esp+68h] [ebp-98h]
  char v80; // [esp+6Fh] [ebp-91h]
  __m128 *v81; // [esp+70h] [ebp-90h]
  NiPoint3 v82; // [esp+74h] [ebp-8Ch] BYREF
  int v83; // [esp+84h] [ebp-7Ch]
  int Level; // [esp+88h] [ebp-78h]
  char v85[4]; // [esp+8Ch] [ebp-74h] BYREF
  double v86; // [esp+90h] [ebp-70h] BYREF
  float v87; // [esp+98h] [ebp-68h]
  char v88[4]; // [esp+A4h] [ebp-5Ch] BYREF
  char v89[4]; // [esp+A8h] [ebp-58h] BYREF
  _DWORD v90[5]; // [esp+ACh] [ebp-54h] BYREF
  char v91; // [esp+C0h] [ebp-40h]
  __int8 v92; // [esp+C1h] [ebp-3Fh]
  __int64 v93; // [esp+C4h] [ebp-3Ch]
  _DWORD v94[5]; // [esp+CCh] [ebp-34h] BYREF
  __m128 v95; // [esp+E0h] [ebp-20h] BYREF
  int savedregs; // [esp+100h] [ebp+0h] BYREF

  v75 = 0.0;
  v79 = 0.0;
  *(float *)v77 = 0.0;
  v5 = *(_DWORD *)(a4 + 0xC);
  v74 = 0.0;
  v76 = 1.0;
  v81 = a5;
  v83 = a4;
  v72 = 0;
  ExtraScript = ExtraDataList_GetExtraScript((ExtraDataList *)(v5 + 0x44));
  v8 = TESDataHandler_g_PlayerRef;
  v9 = a1 == (Actor *)TESDataHandler_g_PlayerRef;
  *(_DWORD *)ArgList = ExtraScript;
  if ( !v9 || !v5 || v5 != v8->unk578 )
  {
    if ( !ExtraScript )
      goto LABEL_22;
    ExtraScriptEventList = ExtraDataList_GetExtraScriptEventList((ExtraDataList *)(v5 + 0x44));
    if ( !ExtraScriptEventList )
      goto LABEL_22;
    v11 = *(Script **)ArgList;
    if ( sub_4FAA90(*(Script **)ArgList, "fTrapDamage", (UInt32 *)ArgList) )
      v75 = sub_4FA110((ScriptEventList *)ExtraScriptEventList, *(int *)ArgList, 0);
    if ( sub_4FAA90(v11, "fLevelledDamage", (UInt32 *)v77) )
    {
      *(float *)&Level = sub_4FA110((ScriptEventList *)ExtraScriptEventList, *(int *)v77, 0);
      v86 = *(float *)&Level;
      Level = (unsigned __int16)Actor_GetLevel(a1);
      v75 = (double)Level * v86 + v75;
    }
    if ( sub_4FAA90(v11, "fTrapPushBack", (UInt32 *)v88) )
      v79 = sub_4FA110((ScriptEventList *)ExtraScriptEventList, *(int *)v88, 0);
    if ( sub_4FAA90(v11, "fTrapMinVelocity", (UInt32 *)v89) )
    {
      v74 = sub_4FA110((ScriptEventList *)ExtraScriptEventList, *(int *)v89, 0);
      v12 = 0.0;
      if ( v74 >= 0.0 )
        v12 = v74 * hkFactor;
      v74 = v12;
    }
    if ( sub_4FAA90(v11, "bTrapContinuous", (UInt32 *)v85) )
      v72 = sub_4FA110((ScriptEventList *)ExtraScriptEventList, *(int *)v85, 0) != dbl_A2FC68;
    *(float *)v77 = sub_4FAA90(v11, "fTrapDeathPushBack", (UInt32 *)v73)
                  ? sub_4FA110((ScriptEventList *)ExtraScriptEventList, *(int *)v73, 0)
                  : v79 / dbl_A3F3E8;
    if ( v72 )
    {
      v13 = v81;
    }
    else
    {
LABEL_22:
      v13 = v81;
      if ( (v81->m128_i8[0] & 1) != 0 )
        return;
    }
    CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
    v15 = *(_DWORD *)(v83 + 8);
    v9 = *(_BYTE *)(v15 + 0x18) == 1;
    *(_DWORD *)v85 = CharProxy;
    if ( v9 )
    {
      *(_DWORD *)ArgList = v15 + *(_DWORD *)(v15 + 0x10);
      v16 = *(_DWORD *)ArgList;
      if ( *(_DWORD *)ArgList )
      {
        if ( (v13->m128_i8[0] & 1) != 0 )
        {
          v20 = *(__m128 **)(*(_DWORD *)ArgList + 0x50);
          v17 = v20[0xD];
          v18 = v20[4];
        }
        else
        {
          v17 = v13[2];
          v18 = v13[1];
        }
        v21 = 0.0;
        v95 = v18;
        *(__m128 *)&v94[1] = v17;
        x = v74;
        v22 = v74;
        if ( v74 == 0.0
          || (v23 = _mm_mul_ps(v17, v17),
              v82.x = fsqrt(
                        _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0])),
              x = v82.x,
              v82.x >= v22) )
        {
          if ( CharProxy )
          {
            v24 = *((char **)CharProxy + 2);
            if ( v24 )
            {
              v25 = (__m128 *)sub_8AC0A0(v24);
              v17 = *(__m128 *)&v94[1];
              v22 = v74;
              v21 = 0.0;
            }
            else
            {
              v25 = (__m128 *)&stru_BA7A40;
            }
            v26 = v22 == v21;
            v27 = _mm_sub_ps(*v25, v17);
            v28 = v22;
            if ( v26 )
              v28 = flt_A31C80;
            v29 = _mm_mul_ps(v27, v27);
            v76 = v28;
            v82.x = fsqrt(
                      _mm_shuffle_ps(v29, v29, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]));
            v76 = v82.x / v76;
            if ( fConstant_2 < (double)v76 )
              v76 = fConstant_2;
          }
        }
        else
        {
          v75 = 0.0;
        }
LABEL_46:
        v33 = ((int (__thiscall *)(Actor *, _DWORD, int))a1->vtbl->super.super.IsDead)(a1, 0, a2);
        v34 = *(_DWORD *)(*(_DWORD *)(Level + 8) + 0x1C);
        GetAV_F = (void (__thiscall *)(TESObjectREFR *))a1->vtbl->GetAV_F;
        HIBYTE(v81) = v33 == 0;
        v36 = v34 & 0x3F;
        if ( v36 == 0x10 )
        {
          *(float *)v73 = ((double (__thiscall *)(Actor *, int))GetAV_F)(a1, 0x43) / fCostant_100;
          v37 = 1.0;
          if ( *(float *)v73 < 1.0 )
            v37 = *(float *)v73;
          v74 = v37;
          *(float *)v73 = 1.0 - v74;
          v38 = *(float *)v73;
        }
        else
        {
          *(float *)v73 = ((double (__thiscall *)(Actor *, int))GetAV_F)(a1, 0x41) / fCostant_100;
          v39 = 1.0;
          if ( *(float *)v73 < 1.0 )
            v39 = *(float *)v73;
          v74 = v39;
          *(float *)v73 = 1.0 - v74;
          v38 = *(float *)v73;
        }
        v75 = v38 * v75;
        v40 = v75;
        if ( v75 > 0.0 )
        {
          if ( v72 )
          {
            x = flt_B33E9C * v76;
            v75 = v40 * x;
            v40 = v75;
          }
          v69 = v40;
          ((void (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))a1->vtbl->ApplyDamage)(a1, LODWORD(v69), 0.0, 0);
          v41 = sub_5E0660(a1);
          GetNiNode = a1->vtbl->super.super.GetNiNode;
          *(float *)v73 = v41 * dbl_A2FAA0;
          *(float *)&v86 = *(float *)v73 * *(float *)&dword_B258E8;
          v43 = *(float *)v73 * *(float *)&dword_B258EC;
          *((float *)&v86 + 1) = v43;
          v87 = *(float *)v73 * *(float *)&dword_B258F0;
          v44 = (float *)GetNiNode((TESObjectREFR *)a1);
          v45 = v44[0x22];
          v44 += 0x22;
          v82.x = v45 + *(float *)&v86;
          v82.y = v44[1] + *((float *)&v86 + 1);
          v46 = v44[2] + v87;
          v82.z = v46;
          sub_43F3E0((float *)&v86, &v95);
          if ( v36 != 0x10 )
          {
            v47 = Vector3_InitValue_;
            v48 = *(&Vector3_InitValue_ + 1);
            *(float *)v73 = v75 + v75;
            v46 = *(float *)v73;
            sub_5EC400(
              (TESObjectREFR *)a1,
              COERCE_FLOAT(&savedregs),
              *(float *)v73,
              *(float *)&v86,
              *((float *)&v86 + 1),
              v87,
              SLODWORD(v82.x),
              LODWORD(v82.y),
              (const char *)LODWORD(v82.z),
              v47,
              v48,
              dword_B3F9B0,
              0);
            if ( !v72 )
            {
              if ( v16 )
              {
                if ( v81[3].m128_i32[0] != 0x1F )
                {
                  v49 = sub_43F3E0(&v82.x, &v95);
                  v50 = flt_A3D65C;
                  v51 = *(_DWORD *)(*(_DWORD *)ArgList + 0xC);
                  v52 = _mm_mul_ps(*(__m128 *)&v94[1], *(__m128 *)&v94[1]);
                  v82.x = *v49;
                  v53 = _mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0];
                  v54 = _mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0];
                  v52.m128_i32[0] = dword_A46C30;
                  v82.y = v49[1];
                  v55 = v49[2];
                  *(float *)&v90[4] = v50;
                  v91 = 0x1F;
                  v56 = v81[3].m128_i8[0];
                  v82.z = v55;
                  *(float *)&v90[2] = v55;
                  v90[0] = LODWORD(v82.x);
                  *(float *)&v86 = fsqrt(v53 + v54) * v52.m128_f32[0];
                  v46 = *(float *)&v86;
                  *(float *)&v90[3] = *(float *)&v86;
                  v94[0] = v51;
                  v92 = v56;
                  v90[1] = LODWORD(v82.y);
                  v93 = (unsigned int)a1 + v51;
                  sub_6B0C70(x, COERCE_FLOAT(v90));
                }
              }
            }
          }
          Actor_PlayPainFX((TESObjectREFR *)a1, x, v46, v43, (int *)1, 1);
          v57 = v80 && a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0);
          v58 = v79;
          if ( v79 > 0.0 )
          {
            if ( *(float *)v77 > fConst_200 )
              *(float *)v77 = flt_A57EF8;
            if ( !v57 || a1 == (Actor *)TESDataHandler_g_PlayerRef )
            {
              v68 = *(__m128 **)v85;
              if ( *(_DWORD *)v85 )
              {
                if ( v58 > dbl_A2FC70 )
                {
                  v79 = flt_A342A4;
                  v58 = v79;
                }
                if ( v72 )
                  v79 = v58 * (flt_B33E9C * v76);
                if ( *(_DWORD *)(v83 + 8) )
                {
                  sub_43F3E0(&v82.x, (__m128 *)&v94[1]);
                  sub_43F350(&v82.x);
                  NiPoint3::MutliplyByValue(&v82, v79);
                  sub_8907A0(v68, (int)&v82, flt_A3D65C);
                }
              }
            }
            else
            {
              v59 = a1->vtbl->super.super.GetNiNode(a1);
              sub_88D070(v59, 1, 1, 0);
              v60 = a1->vtbl->super.super.GetNiNode(a1);
              sub_8B8700(v60);
              v70 = *(int *)v77;
              v61 = a1->vtbl->super.super.GetNiNode;
              v62 = _mm_mul_ps(*(__m128 *)&v94[1], *(__m128 *)&v94[1]);
              v62.m128_f32[0] = _mm_shuffle_ps(v62, v62, 0xAA).m128_f32[0]
                              + (float)(_mm_shuffle_ps(v62, v62, 0x55).m128_f32[0] + v62.m128_f32[0]);
              v63 = 1.0 / fsqrt(v62.m128_f32[0]);
              v64 = *(float *)&dword_A46C30 - (float)((float)(v62.m128_f32[0] * v63) * v63);
              v65 = 0;
              v65.m128_f32[0] = (float)(flt_A3D65C * v63) * v64;
              v66 = 0;
              v66.m128_f32[0] = flt_A3F514;
              v95 = _mm_sub_ps(
                      v95,
                      _mm_mul_ps(
                        _mm_shuffle_ps(v66, v66, 0),
                        _mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), *(__m128 *)&v94[1])));
              v67 = (int)v61((TESObjectREFR *)a1);
              sub_5364B0(v67, &v95, *(float *)&v70);
            }
          }
        }
        v81->m128_i32[0] |= 1u;
        return;
      }
    }
    else
    {
      *(_DWORD *)ArgList = 0;
      v16 = 0;
    }
    if ( (v13->m128_i8[0] & 1) != 0 )
      v19 = *(__m128 *)(*(_DWORD *)(v15 + 8) + 0x30);
    else
      v19 = v13[1];
    GetPos = a1->vtbl->super.super.GetPos;
    v95 = v19;
    v31 = GetPos((TESObjectREFR *)a1);
    v32 = hkFactor;
    *(float *)&v94[1] = *v31 * v32;
    *(float *)&v94[2] = v31[1] * v32;
    *(float *)&v94[3] = v32 * v31[2];
    *(__m128 *)&v94[1] = _mm_sub_ps(*(__m128 *)&v94[1], v95);
    *(float *)v73 = sub_5E0660(a1) * dbl_A2FAA0;
    *(float *)v73 = *(float *)v73 * hkFactor;
    *(float *)&v94[3] = *(float *)v73 + *(float *)&v94[3];
    goto LABEL_46;
  }
}
