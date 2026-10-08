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
  TESPackage *CurrentPackage; // eax
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
  ActorSkinInfo *v37; // eax
  _DWORD *v38; // eax
  ActorAnimData *v39; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  PlayerCharacter *v41; // ebp
  TESObjectREFR ***v42; // ecx
  int v43; // eax
  int v44; // eax
  float *v45; // eax
  float *v46; // eax
  int v47; // edx
  int v48; // ecx
  float v49; // eax
  int v50; // edx
  float z; // ecx
  bool v52; // al
  _DWORD **v53; // edi
  int v54; // edi
  UInt32 v55; // eax
  UInt32 v56; // eax
  double v57; // [esp+44h] [ebp-6Ch]
  float v58; // [esp+44h] [ebp-6Ch]
  int v59; // [esp+48h] [ebp-68h]
  float v60; // [esp+4Ch] [ebp-64h]
  int v61; // [esp+4Ch] [ebp-64h]
  float *v62; // [esp+50h] [ebp-60h]
  NiNode *CachedNode; // [esp+50h] [ebp-60h]
  int v64; // [esp+50h] [ebp-60h]
  int v65; // [esp+54h] [ebp-5Ch]
  _BYTE v66[5]; // [esp+67h] [ebp-49h] BYREF
  float v67; // [esp+6Ch] [ebp-44h]
  int v68; // [esp+70h] [ebp-40h] BYREF
  double v69; // [esp+74h] [ebp-3Ch] BYREF
  float v70; // [esp+7Ch] [ebp-34h]
  int v71; // [esp+80h] [ebp-30h] BYREF
  int v72; // [esp+84h] [ebp-2Ch] BYREF
  _DWORD *v73; // [esp+88h] [ebp-28h]
  float v74[4]; // [esp+8Ch] [ebp-24h] BYREF
  float v75[3]; // [esp+9Ch] [ebp-14h] BYREF
  float v76[2]; // [esp+A8h] [ebp-8h] BYREF

  v7 = a1[0x16]; /*0x603508*/
  if ( v7 ) /*0x60350e*/
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) ) /*0x603519*/
    {
      v8 = a1[0x16]; /*0x603526*/
      if ( v8 ) /*0x60352a*/
      {
        if ( (*(int (__thiscall **)(int, int *))(*(_DWORD *)a1[0x16] + 0xE8))(a1[0x16], a1) ) /*0x603541*/
        {
          v9 = a1[0xF]; /*0x60354b*/
          if ( v9 ) /*0x603550*/
          {
            v10 = (int *)(*(int (__usercall **)@<eax>(int@<ecx>, const char *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v9 + 0x58))( /*0x603560*/
                           v9,
                           "Bip01 NonAccum",
                           result,
                           a5,
                           st5_0);
            v11 = *v10; /*0x603562*/
            v71 = (int)v10; /*0x603564*/
            v12 = (_DWORD *)(*(int (__thiscall **)(int *, const char *))(v11 + 0x58))(v10, "Bip01 Spine2"); /*0x603572*/
            v13 = *v12; /*0x603574*/
            v73 = v12; /*0x603576*/
            *(float *)&v14 = COERCE_FLOAT((*(int (__thiscall **)(_DWORD *, const char *))(v13 + 0x58))(v12, "Bip01 Head")); /*0x603584*/
            v15 = ~a1[0x31]; /*0x60358c*/
            v72 = v14; /*0x603591*/
            if ( (v15 & 7) != 0 ) /*0x603595*/
            {
              v16 = a1[0x16]; /*0x603597*/
              *((_BYTE *)a1 + 0xE0) = 0; /*0x60359c*/
              if ( v16 ) /*0x6035a3*/
                *(_BYTE *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 0xE8))(v16, a1) + 0x1D5) = 0; /*0x6035b0*/
              else
                *(_BYTE *)0x1D5 = 0; /*0x6035c3*/
              return result; /*0x6035be*/
            }
            if ( !*((_BYTE *)a1 + 0xE0) ) /*0x6035d3*/
            {
              *(_BYTE *)(sub_5E12B0((Actor *)a1) + 0x1D4) = 1; /*0x6035e3*/
              *((_BYTE *)a1 + 0xE0) = 1; /*0x6035ea*/
            }
            if ( unk_B36AB8 < TesObjectREF_GetDistance((TESObjectREFR *)reference, (TESObjectREFR *)a1, 0) ) /*0x60360c*/
            {
              *(_BYTE *)(sub_5E12B0((Actor *)a1) + 0x1D5) = 0; /*0x603615*/
              return result; /*0x603623*/
            }
            if ( (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1[0x16] /*0x603631*/
                                                                                                  + 0x4CC))(
                   a1[0x16],
                   result,
                   a5,
                   st5_0) )
            {
              v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]); /*0x603642*/
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x188))(v17) ) /*0x60364e*/
              {
                v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]); /*0x60365f*/
                if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x154))(v18) ) /*0x60366b*/
                  (*(void (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4B4))(a1[0x16]); /*0x60367c*/
              }
            }
            *((float *)a1 + 0x40) = *((float *)a1 + 0x40) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x60368a*/
            *((float *)a1 + 0x37) = *((float *)a1 + 0x37) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x60369c*/
            Distance = 0.0; /*0x6036a2*/
            if ( *((float *)a1 + 0x40) <= 0.0 ) /*0x6036af*/
            {
              Distance = Rand4(flt_A3D9A4, flt_A47E6C) + *((float *)a1 + 0x40); /*0x6036d0*/
              v20 = a1[0x16]; /*0x6036d6*/
              *((float *)a1 + 0x40) = Distance; /*0x6036dc*/
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 0x4BC))(v20) ) /*0x6036ea*/
              {
                if ( *((float *)a1 + 0x37) < 0.0 ) /*0x603701*/
                  *((float *)a1 + 0x37) = 0.0; /*0x603703*/
                Distance = sub_601670((PlayerCharacter *)a1, 0.0); /*0x60370f*/
                v22 = v21; /*0x603716*/
                if ( Actor::GetCurrentPackage((Actor *)a1) ) /*0x603718*/
                {
                  if ( Actor::GetCurrentPackage((Actor *)a1)->members.type == kPackageType_Travel /*0x603739*/
                    || Actor::GetCurrentPackage((Actor *)a1)->members.type == kPackageType_Ambush )
                  {
                    if ( Actor::GetCurrentPackage((Actor *)a1) ) /*0x60373d*/
                    {
                      if ( Actor::GetCurrentPackage((Actor *)a1)->members.target ) /*0x60374d*/
                      {
                        CurrentPackage = Actor::GetCurrentPackage((Actor *)a1); /*0x603755*/
                        v24.form = sub_569E60(CurrentPackage->members.target).form; /*0x60375d*/
                        objectCode = (TESObjectREFR *)v24.objectCode; /*0x603762*/
                        if ( v24.objectCode ) /*0x603766*/
                        {
                          v25 = v24.objectCode == (_DWORD)reference; /*0x603768*/
                          *(float *)&v66[1] = flt_A2FE7C; /*0x603774*/
                          if ( v25 ) /*0x603778*/
                            *(float *)&v66[1] = flt_A34A80; /*0x603780*/
                          Distance = TesObjectREF_GetDistance((TESObjectREFR *)a1, v24.form, 0); /*0x603789*/
                          a5 = *(float *)&v66[1]; /*0x60378e*/
                          if ( *(float *)&v66[1] > Distance ) /*0x603799*/
                            v22 = objectCode; /*0x60379b*/
                        }
                      }
                    }
                  }
                }
                if ( v22 != (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]) ) /*0x6037ac*/
                {
                  (*(void (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)a1[0x16] + 0x480))(a1[0x16], v22); /*0x6037ba*/
                  Distance = Rand4(flt_A46B10, flt_A31C80); /*0x6037d2*/
                  *((float *)a1 + 0x37) = Distance; /*0x6037d7*/
                }
              }
            }
            if ( sub_5F7900((PlayerCharacter *)a1, (char)objectCode, st5_0, a5, Distance, 0) ) /*0x6037e4*/
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x4D8))(v8, 1); /*0x6037fe*/
              v26 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]); /*0x60380f*/
              v62 = (float *)(*(int (__thiscall **)(int *))(*a1 + 0x174))(a1); /*0x60381d*/
              v27 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x174))(v26); /*0x60382b*/
              sub_4121A0(v27, v74, v62); /*0x60382f*/
              v67 = Vector3_CalculateHeadingRadiansXY(v74); /*0x60383e*/
              *(float *)&v68 = 0.0; /*0x60384b*/
              sub_683D80((int)a1, v67, (float *)&v68); /*0x603859*/
              *(float *)&v69 = v67; /*0x60385e*/
              *(float *)&v66[1] = (double)(int)MEMORY[0xB36C10].value * dbl_A31C78 * dbl_A6B088; /*0x603879*/
              if ( sub_5E0590(a1) ) /*0x60387d*/
                *(float *)&v66[1] = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78 * dbl_A6B088; /*0x603898*/
              *(float *)&v69 = fabs(*(float *)&v69); /*0x6038a2*/
              a5 = *(float *)&v66[1]; /*0x6038aa*/
              if ( *(float *)&v66[1] >= (double)*(float *)&v69 ) /*0x6038b5*/
                sub_5E05F0((Actor *)a1, 0x30); /*0x6038d0*/
              else
                sub_685530((Actor *)a1, v67, 1); /*0x6038c2*/
            }
            v28 = (_BYTE *)sub_5E12B0((Actor *)a1); /*0x6038dc*/
            v29 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x4CC))(v8); /*0x6038eb*/
            v69 = TesObjectREF_GetDistance((TESObjectREFR *)reference, v29, 0); /*0x6038f9*/
            result = *GameSetting_GetSafeFloatPointer(unk_B36AE0); /*0x603907*/
            v30 = result >= v69; /*0x603912*/
            if ( !v28 ) /*0x60391c*/
              goto LABEL_61; /*0x60391c*/
            if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*a1 + 0x334))(a1, 1) ) /*0x60392e*/
            {
              if ( byte_B1206C ) /*0x603934*/
              {
                if ( v30 ) /*0x603943*/
                  v67 = sub_5E0DD0((int **)a1); /*0x60394c*/
                else
                  v67 = flt_A3D8F0; /*0x60395f*/
                result = v67; /*0x603950*/
LABEL_59:
                v60 = result; /*0x6039ef*/
                (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v28 + 0xD0))(v28, LODWORD(v60), 0); /*0x6039ff*/
LABEL_61:
                v35 = a1[0x2C]; /*0x603a1c*/
                v36 = 0; /*0x603a22*/
                if ( v35 ) /*0x603a26*/
                  v36 = v35 != 5; /*0x603a2d*/
                if ( a1[0x16] ) /*0x603a2f*/
                {
                  if ( (*(int (__thiscall **)(int *))(*a1 + 0x168))(a1) ) /*0x603a3f*/
                  {
                    v37 = (ActorSkinInfo *)(*(int (__thiscall **)(int *))(*a1 + 0x168))(a1); /*0x603a51*/
                    CachedNode = ActorSkinInfo_GetCachedNode(v37, 0); /*0x603a5a*/
                    v38 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 0x154))(a1); /*0x603a65*/
                    if ( sub_47F750(v38, (int)CachedNode) >= 0x5A ) /*0x603a73*/
                      v36 = 1; /*0x603a75*/
                    v39 = (ActorAnimData *)(*(int (__thiscall **)(int *))(*a1 + 0x164))(a1); /*0x603a83*/
                    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v39, 3); /*0x603a87*/
                    if ( AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value) ) /*0x603a8d*/
                      v36 = 1; /*0x603a99*/
                  }
                }
                if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]) || v36 ) /*0x603ab2*/
                {
                  v57 = *(double *)&g_zeroNiPoint3.x; /*0x603bc4*/
                  z = g_zeroNiPoint3.z; /*0x603bcf*/
                }
                else
                {
                  v41 = (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]); /*0x603acb*/
                  if ( Actor_IsSneaking(reference) ) /*0x603acd*/
                  {
                    v42 = (TESObjectREFR ***)reference; /*0x603ad6*/
                    if ( v41 == reference ) /*0x603ade*/
                    {
                      v66[0] = 1; /*0x603ae6*/
                      LOBYTE(v43) = PlayerCharacter_IsPlayerInCombat(v42, 0); /*0x603aeb*/
                      Actor_GetDetectionLevelAgainstActor( /*0x603b01*/
                        (TESObjectREFR *)a1,
                        (int)v28,
                        st5_0,
                        a5,
                        result,
                        0,
                        (TESObjectREFR *)reference,
                        v66,
                        v43,
                        0,
                        0,
                        v65);
                      v36 = v44 <= 0; /*0x603b0a*/
                    }
                  }
                  (*(void (__thiscall **)(int *, float *, int))(*a1 + 0x11C))(a1, v74, v65); /*0x603b1b*/
                  v45 = (float *)((int (__thiscall *)(PlayerCharacter *))v41->vtbl->super.super.super.Unk_47)(v41); /*0x603b33*/
                  v46 = sub_4121A0(v45, v76, v75); /*0x603b37*/
                  v47 = *((_DWORD *)v46 + 1); /*0x603b3c*/
                  v48 = *(_DWORD *)v46; /*0x603b3f*/
                  v49 = v46[2]; /*0x603b41*/
                  HIDWORD(v69) = v47; /*0x603b44*/
                  v50 = *a1; /*0x603b48*/
                  LODWORD(v69) = v48; /*0x603b4a*/
                  v70 = v49; /*0x603b4e*/
                  if ( (*(int (__thiscall **)(int *))(v50 + 0x380))(a1) ) /*0x603b5a*/
                  {
                    if ( v41->vtbl->super.super.super.IsActor((TESObjectREFR *)v41) ) /*0x603b6b*/
                    {
                      if ( v41->vtbl->super.GetMountedHorse((Actor *)v41) ) /*0x603b7c*/
                        v70 = 0.0; /*0x603b84*/
                    }
                  }
                  if ( v36 ) /*0x603b8a*/
                    v70 = 0.0; /*0x603b8e*/
                  result = Vector3_NormalizeInPlace((float *)&v69); /*0x603b96*/
                  v57 = v69; /*0x603ba8*/
                  z = v70; /*0x603bb1*/
                }
                (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, float, _DWORD))(*(_DWORD *)v28 + 0x84))( /*0x603be2*/
                  v28,
                  LODWORD(v57),
                  HIDWORD(v57),
                  COERCE_FLOAT(LODWORD(z)),
                  0);
                v52 = sub_5E05B0(a1); /*0x603be6*/
                sub_54A0A0(v28, !v52); /*0x603bf3*/
                v53 = (_DWORD **)v71; /*0x603bf8*/
                (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(v71 + 0x1C) + 0x1C) + 0x74))(*(_DWORD *)(*(_DWORD *)(v71 + 0x1C) + 0x1C)); /*0x603c07*/
                (*(void (__thiscall **)(_DWORD *))(*v53[7] + 0x74))(v53[7]); /*0x603c11*/
                ((void (__thiscall *)(_DWORD **))(*v53)[0x1D])(v53); /*0x603c1a*/
                if ( sub_5E12B0((Actor *)a1) ) /*0x603c1e*/
                {
                  v64 = (int)v53; /*0x603c2d*/
                  v54 = v72; /*0x603c2e*/
                  v61 = v72; /*0x603c32*/
                  v59 = *(int *)&MEMORY[0xB33E90][0xC]; /*0x603c36*/
                  v55 = sub_5E12B0((Actor *)a1); /*0x603c39*/
                  sub_54B010(v55, v59, v61, v64); /*0x603c40*/
                  if ( *(_BYTE *)(sub_5E12B0((Actor *)a1) + 0x1D5) ) /*0x603c4c*/
                  {
                    if ( !byte_B148F4 ) /*0x603c55*/
                    {
                      v58 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x603c72*/
                      v56 = sub_5E12B0((Actor *)a1); /*0x603c75*/
                      sub_54B3E0(v56, v58, v54, (float *)&v72, (float *)&v71); /*0x603c7c*/
                      result = *(float *)&v72; /*0x603c81*/
                      sub_47CAF0(v73[7], *(float *)&v72); /*0x603c90*/
                    }
                  }
                }
                return result; /*0x603c90*/
              }
            }
            else if ( byte_B1206C ) /*0x60396c*/
            {
              v31 = a1[0x16]; /*0x603979*/
              if ( v31 ) /*0x60397e*/
              {
                if ( !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v31 + 0x33C))(v31, 0) /*0x60399f*/
                  && !(*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x1DC))(a1[0x16]) )
                {
                  if ( v30 ) /*0x6039a7*/
                    v32 = sub_5E0DD0((int **)a1); /*0x6039ab*/
                  else
                    v32 = flt_A3D8F0; /*0x6039b2*/
                  v33 = *(_DWORD *)v28; /*0x6039b8*/
                  v67 = v32; /*0x6039ba*/
                  result = v67; /*0x6039be*/
                  (*(void (__thiscall **)(_BYTE *, float, _DWORD))(v33 + 0xD0))(v28, COERCE_FLOAT(LODWORD(v67)), 0); /*0x6039d0*/
                }
                goto LABEL_61; /*0x6039d2*/
              }
              if ( v30 ) /*0x6039d6*/
                v34 = sub_5E0DD0((int **)a1); /*0x6039da*/
              else
                v34 = flt_A3D8F0; /*0x6039e1*/
              v67 = v34; /*0x6039e7*/
              result = v67; /*0x6039eb*/
              goto LABEL_59; /*0x6039eb*/
            }
            result = 0.0; /*0x603a05*/
            (*(void (__thiscall **)(_BYTE *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v28 + 0x78))( /*0x603a1a*/
              v28,
              0.0,
              1,
              0,
              0,
              0,
              0);
            goto LABEL_61; /*0x603a1a*/
          }
        }
      }
    }
  }
  return result; /*0x6035b7*/
}
