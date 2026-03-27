double __userpurge sub_603500@<st0>(
        int *a1@<ecx>,
        TESObjectREFR *objectCode@<edi>,
        double st5_0@<st2>,
        double result@<st0>,
        double a5@<st1>,
        int a6)
{
  int v7; // ecx
  int v8; // ebp
  int v9; // ecx
  int *v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  double Distance; // st7
  int v20; // ecx
  TESObjectREFR *v21; // eax
  TESObjectREFR *v22; // ebx
  TESPackage *v23; // eax
  ObjectType v24; // eax
  bool v25; // zf
  int v26; // edi
  float *v27; // eax
  _BYTE *v28; // edi
  TESObjectREFR *v29; // eax
  bool v30; // bl
  int v31; // ecx
  double v32; // st7
  int v33; // eax
  double v34; // st7
  int v35; // eax
  bool v36; // bl
  _DWORD *v37; // eax
  _DWORD *v38; // eax
  _WORD *v39; // eax
  __int16 AnimGroupFromField8Value; // ax
  PlayerCharacter *v41; // ebp
  PlayerCharacter *v42; // ecx
  int v43; // eax
  float *v44; // eax
  float *v45; // eax
  int v46; // edx
  int v47; // ecx
  float v48; // eax
  int v49; // edx
  float v50; // ecx
  bool v51; // al
  _DWORD **v52; // edi
  int v53; // edi
  UInt32 v54; // eax
  UInt32 v55; // eax
  double v56; // [esp+44h] [ebp-6Ch]
  float v57; // [esp+44h] [ebp-6Ch]
  int v58; // [esp+48h] [ebp-68h]
  float v59; // [esp+4Ch] [ebp-64h]
  int v60; // [esp+4Ch] [ebp-64h]
  float *v61; // [esp+50h] [ebp-60h]
  int v62; // [esp+50h] [ebp-60h]
  int v63; // [esp+50h] [ebp-60h]
  int v64; // [esp+54h] [ebp-5Ch]
  _BYTE v65[5]; // [esp+67h] [ebp-49h] BYREF
  float v66; // [esp+6Ch] [ebp-44h]
  int v67; // [esp+70h] [ebp-40h] BYREF
  double v68; // [esp+74h] [ebp-3Ch] BYREF
  float v69; // [esp+7Ch] [ebp-34h]
  int v70; // [esp+80h] [ebp-30h] BYREF
  int v71; // [esp+84h] [ebp-2Ch] BYREF
  _DWORD *v72; // [esp+88h] [ebp-28h]
  float v73[4]; // [esp+8Ch] [ebp-24h] BYREF
  float v74[3]; // [esp+9Ch] [ebp-14h] BYREF
  float v75[2]; // [esp+A8h] [ebp-8h] BYREF

  v7 = a1[0x16];
  if ( v7 )
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) )
    {
      v8 = a1[0x16];
      if ( v8 )
      {
        if ( (*(int (__thiscall **)(int, int *))(*(_DWORD *)a1[0x16] + 0xE8))(a1[0x16], a1) )
        {
          v9 = a1[0xF];
          if ( v9 )
          {
            v10 = (int *)(*(int (__usercall **)@<eax>(int@<ecx>, const char *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v9 + 0x58))(
                           v9,
                           "Bip01 NonAccum",
                           result,
                           a5,
                           st5_0);
            v11 = *v10;
            v70 = (int)v10;
            v12 = (_DWORD *)(*(int (__thiscall **)(int *, const char *))(v11 + 0x58))(v10, "Bip01 Spine2");
            v13 = *v12;
            v72 = v12;
            *(float *)&v14 = COERCE_FLOAT((*(int (__thiscall **)(_DWORD *, const char *))(v13 + 0x58))(v12, "Bip01 Head"));
            v15 = ~a1[0x31];
            v71 = v14;
            if ( (v15 & 7) != 0 )
            {
              v16 = a1[0x16];
              *((_BYTE *)a1 + 0xE0) = 0;
              if ( v16 )
                *(_BYTE *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 0xE8))(v16, a1) + 0x1D5) = 0;
              else
                *(_BYTE *)0x1D5 = 0;
              return result;
            }
            if ( !*((_BYTE *)a1 + 0xE0) )
            {
              *(_BYTE *)(sub_5E12B0((Actor *)a1) + 0x1D4) = 1;
              *((_BYTE *)a1 + 0xE0) = 1;
            }
            if ( flt_B36AB8 < TesObjectREF_GetDistance(
                                (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                                (TESObjectREFR *)a1,
                                0) )
            {
              *(_BYTE *)(sub_5E12B0((Actor *)a1) + 0x1D5) = 0;
              return result;
            }
            if ( (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1[0x16]
                                                                                                  + 0x4CC))(
                   a1[0x16],
                   result,
                   a5,
                   st5_0) )
            {
              v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]);
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x188))(v17) )
              {
                v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]);
                if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x154))(v18) )
                  (*(void (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4B4))(a1[0x16]);
              }
            }
            *((float *)a1 + 0x40) = *((float *)a1 + 0x40) - flt_B33E9C;
            *((float *)a1 + 0x37) = *((float *)a1 + 0x37) - flt_B33E9C;
            Distance = 0.0;
            if ( *((float *)a1 + 0x40) <= 0.0 )
            {
              Distance = Rand4(flt_A3D9A4, flt_A47E6C) + *((float *)a1 + 0x40);
              v20 = a1[0x16];
              *((float *)a1 + 0x40) = Distance;
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 0x4BC))(v20) )
              {
                if ( *((float *)a1 + 0x37) < 0.0 )
                  *((float *)a1 + 0x37) = 0.0;
                Distance = sub_601670((PlayerCharacter *)a1, 0.0);
                v22 = v21;
                if ( sub_5E0380((Actor *)a1) )
                {
                  if ( sub_5E0380((Actor *)a1)->members.type == 6 || sub_5E0380((Actor *)a1)->members.type == 9 )
                  {
                    if ( sub_5E0380((Actor *)a1) )
                    {
                      if ( sub_5E0380((Actor *)a1)->members.target )
                      {
                        v23 = sub_5E0380((Actor *)a1);
                        v24.form = sub_569E60(v23->members.target).form;
                        objectCode = (TESObjectREFR *)v24.objectCode;
                        if ( v24.objectCode )
                        {
                          v25 = v24.objectCode == (_DWORD)TESDataHandler_g_PlayerRef;
                          *(float *)&v65[1] = flt_A2FE7C;
                          if ( v25 )
                            *(float *)&v65[1] = flt_A34A80;
                          Distance = TesObjectREF_GetDistance((TESObjectREFR *)a1, v24.form, 0);
                          a5 = *(float *)&v65[1];
                          if ( *(float *)&v65[1] > Distance )
                            v22 = objectCode;
                        }
                      }
                    }
                  }
                }
                if ( v22 != (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]) )
                {
                  (*(void (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)a1[0x16] + 0x480))(a1[0x16], v22);
                  Distance = Rand4(flt_A46B10, flt_A31C80);
                  *((float *)a1 + 0x37) = Distance;
                }
              }
            }
            if ( sub_5F7900((PlayerCharacter *)a1, (char)objectCode, st5_0, a5, Distance, 0) )
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x4D8))(v8, 1);
              v26 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]);
              v61 = (float *)(*(int (__thiscall **)(int *))(*a1 + 0x174))(a1);
              v27 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x174))(v26);
              sub_4121A0(v27, v73, v61);
              v66 = sub_683CB0(v73);
              *(float *)&v67 = 0.0;
              sub_683D80((int)a1, v66, (int)&v67);
              *(float *)&v68 = v66;
              *(float *)&v65[1] = (double)iActorTurnDegree * dbl_A31C78 * dbl_A6B088;
              if ( sub_5E0590(a1) )
                *(float *)&v65[1] = (double)iActorKeepTurnDegree * dbl_A31C78 * dbl_A6B088;
              *(float *)&v68 = fabs(*(float *)&v68);
              a5 = *(float *)&v65[1];
              if ( *(float *)&v65[1] >= (double)*(float *)&v68 )
                sub_5E05F0((Actor *)a1, 0x30);
              else
                sub_685530((Actor *)a1, v66, 1);
            }
            v28 = (_BYTE *)sub_5E12B0((Actor *)a1);
            v29 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x4CC))(v8);
            v68 = TesObjectREF_GetDistance((TESObjectREFR *)TESDataHandler_g_PlayerRef, v29, 0);
            result = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36AE0);
            v30 = result >= v68;
            if ( !v28 )
              goto LABEL_61;
            if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*a1 + 0x334))(a1, 1) )
            {
              if ( byte_B1206C )
              {
                if ( v30 )
                  v66 = sub_5E0DD0((int **)a1);
                else
                  v66 = flt_A3D8F0;
                result = v66;
LABEL_59:
                v59 = result;
                (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v28 + 0xD0))(v28, LODWORD(v59), 0);
LABEL_61:
                v35 = a1[0x2C];
                v36 = 0;
                if ( v35 )
                  v36 = v35 != 5;
                if ( a1[0x16] )
                {
                  if ( (*(int (__thiscall **)(int *))(*a1 + 0x168))(a1) )
                  {
                    v37 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 0x168))(a1);
                    v62 = sub_477EC0(v37, 0);
                    v38 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 0x154))(a1);
                    if ( sub_47F750(v38, v62) >= 0x5A )
                      v36 = 1;
                    v39 = (_WORD *)(*(int (__thiscall **)(int *))(*a1 + 0x164))(a1);
                    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v39, 3);
                    if ( sub_51AC80(AnimGroupFromField8Value) )
                      v36 = 1;
                  }
                }
                if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]) || v36 )
                {
                  v56 = *(double *)&Vector3_InitValue_;
                  v50 = dword_B3F9B0;
                }
                else
                {
                  v41 = (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]);
                  if ( Actor_IsSneaking(TESDataHandler_g_PlayerRef) )
                  {
                    v42 = TESDataHandler_g_PlayerRef;
                    if ( v41 == TESDataHandler_g_PlayerRef )
                    {
                      v65[0] = 1;
                      LOBYTE(v43) = PlayerCharacter_IsPlayerInCombat(v42, 0);
                      v36 = Actor_GetDetectionLevel(
                              (TESObjectREFR *)a1,
                              (int)v28,
                              st5_0,
                              a5,
                              result,
                              0,
                              (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                              v65,
                              v43,
                              0,
                              0,
                              v64) <= 0;
                    }
                  }
                  (*(void (__thiscall **)(int *, float *, int))(*a1 + 0x11C))(a1, v73, v64);
                  v44 = (float *)((int (__thiscall *)(PlayerCharacter *))v41->vtbl->super.super.super.Unk_47)(v41);
                  v45 = sub_4121A0(v44, v75, v74);
                  v46 = *((_DWORD *)v45 + 1);
                  v47 = *(_DWORD *)v45;
                  v48 = v45[2];
                  HIDWORD(v68) = v46;
                  v49 = *a1;
                  LODWORD(v68) = v47;
                  v69 = v48;
                  if ( (*(int (__thiscall **)(int *))(v49 + 0x380))(a1) )
                  {
                    if ( v41->vtbl->super.super.super.IsActor((TESObjectREFR *)v41) )
                    {
                      if ( v41->vtbl->super.GetMountedHorse((Actor *)v41) )
                        v69 = 0.0;
                    }
                  }
                  if ( v36 )
                    v69 = 0.0;
                  result = sub_43F350((float *)&v68);
                  v56 = v68;
                  v50 = v69;
                }
                (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, float, _DWORD))(*(_DWORD *)v28 + 0x84))(
                  v28,
                  LODWORD(v56),
                  HIDWORD(v56),
                  COERCE_FLOAT(LODWORD(v50)),
                  0);
                v51 = sub_5E05B0(a1);
                sub_54A0A0(v28, !v51);
                v52 = (_DWORD **)v70;
                (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(v70 + 0x1C) + 0x1C) + 0x74))(*(_DWORD *)(*(_DWORD *)(v70 + 0x1C) + 0x1C));
                (*(void (__thiscall **)(_DWORD *))(*v52[7] + 0x74))(v52[7]);
                ((void (__thiscall *)(_DWORD **))(*v52)[0x1D])(v52);
                if ( sub_5E12B0((Actor *)a1) )
                {
                  v63 = (int)v52;
                  v53 = v71;
                  v60 = v71;
                  *(float *)&v58 = flt_B33E9C;
                  v54 = sub_5E12B0((Actor *)a1);
                  sub_54B010(v54, v58, v60, v63);
                  if ( *(_BYTE *)(sub_5E12B0((Actor *)a1) + 0x1D5) )
                  {
                    if ( !byte_B148F4 )
                    {
                      v57 = flt_B33E9C;
                      v55 = sub_5E12B0((Actor *)a1);
                      sub_54B3E0(v55, v57, v53, (float *)&v71, (float *)&v70);
                      result = *(float *)&v71;
                      sub_47CAF0(v72[7], *(float *)&v71);
                    }
                  }
                }
                return result;
              }
            }
            else if ( byte_B1206C )
            {
              v31 = a1[0x16];
              if ( v31 )
              {
                if ( !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v31 + 0x33C))(v31, 0)
                  && !(*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x1DC))(a1[0x16]) )
                {
                  if ( v30 )
                    v32 = sub_5E0DD0((int **)a1);
                  else
                    v32 = flt_A3D8F0;
                  v33 = *(_DWORD *)v28;
                  v66 = v32;
                  result = v66;
                  (*(void (__thiscall **)(_BYTE *, float, _DWORD))(v33 + 0xD0))(v28, COERCE_FLOAT(LODWORD(v66)), 0);
                }
                goto LABEL_61;
              }
              if ( v30 )
                v34 = sub_5E0DD0((int **)a1);
              else
                v34 = flt_A3D8F0;
              v66 = v34;
              result = v66;
              goto LABEL_59;
            }
            result = 0.0;
            (*(void (__thiscall **)(_BYTE *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v28 + 0x78))(
              v28,
              0.0,
              1,
              0,
              0,
              0,
              0);
            goto LABEL_61;
          }
        }
      }
    }
  }
  return result;
}
