double __userpurge sub_614550@<st0>(
        int a1@<ecx>,
        float a2@<edi>,
        double result@<st0>,
        double a4@<st1>,
        double a5@<st2>,
        int a6)
{
  int v7; // eax
  int v8; // eax
  unsigned __int8 AnimGroup; // al
  unsigned __int8 v10; // al
  int GroupID; // eax
  TESObjectREFR *v12; // ecx
  unsigned __int8 v13; // al
  int v14; // eax
  TESObjectREFR *v15; // ecx
  unsigned __int8 v16; // al
  char v17; // cl
  int v18; // eax
  float *v19; // eax
  int *SafeFloatPointer; // edi
  _DWORD *v21; // eax
  int v22; // ecx
  int *v23; // edi
  double v24; // st7
  int v25; // eax
  int v26; // edi
  double v27; // st6
  double v28; // st5
  double v29; // st4
  int v30; // eax
  NiTransform *v31; // eax
  NiTransform *v32; // eax
  NiTransform *v33; // eax
  NiTransform *v34; // eax
  bool v35; // zf
  char v36; // al
  char v37; // al
  char v38; // al
  char v39; // al
  float v40; // [esp+0h] [ebp-94h]
  float v42; // [esp+8h] [ebp-8Ch]
  _BYTE v43[20]; // [esp+Ch] [ebp-88h] BYREF
  float v44; // [esp+20h] [ebp-74h]
  NiPoint3 v45; // [esp+24h] [ebp-70h] BYREF
  NiPoint3 v46; // [esp+30h] [ebp-64h] BYREF
  NiPoint3 v47; // [esp+3Ch] [ebp-58h] BYREF
  _BYTE v48[8]; // [esp+4Ch] [ebp-48h] BYREF
  NiTransform v49; // [esp+54h] [ebp-40h] BYREF

  v7 = *(_DWORD *)(a1 + 0x3C); /*0x614559*/
  if ( v7 ) /*0x61455e*/
  {
    v8 = *(_DWORD *)(v7 + 0x58); /*0x614564*/
    if ( v8 ) /*0x614569*/
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) ) /*0x614576*/
      {
        if ( !*(_BYTE *)(a1 + 0x190) ) /*0x614580*/
        {
          AnimGroup = Actor_LoadAnimGroup_(*(TESObjectREFR **)(a1 + 0x3C), 5, 0, 0); /*0x61459a*/
          *(_BYTE *)(a1 + 0x194) = AnimKey_GetGroupID(AnimGroup) == 5; /*0x6145b2*/
          v10 = Actor_LoadAnimGroup_(*(TESObjectREFR **)(a1 + 0x3C), 6, 0, 0); /*0x6145bd*/
          GroupID = AnimKey_GetGroupID(v10); /*0x6145c3*/
          v12 = *(TESObjectREFR **)(a1 + 0x3C); /*0x6145c8*/
          *(_BYTE *)(a1 + 0x195) = GroupID == 6; /*0x6145da*/
          v13 = Actor_LoadAnimGroup_(v12, 3, 0, 0); /*0x6145e0*/
          v14 = AnimKey_GetGroupID(v13); /*0x6145e6*/
          v15 = *(TESObjectREFR **)(a1 + 0x3C); /*0x6145eb*/
          *(_BYTE *)(a1 + 0x196) = v14 == 3; /*0x6145fd*/
          v16 = Actor_LoadAnimGroup_(v15, 4, 0, 0); /*0x614603*/
          *(_BYTE *)(a1 + 0x197) = AnimKey_GetGroupID(v16) == 4; /*0x614617*/
          *(_BYTE *)(a1 + 0x190) = 1; /*0x61461d*/
        }
        v17 = *(_BYTE *)(a1 + 0x191); /*0x614620*/
        if ( v17 || (v18 = *(_DWORD *)(a1 + 0x6C), v18 != 4) && v18 != 7 && v18 != 9 && v18 != 8 ) /*0x61463f*/
        {
          if ( !v17 && !a6 ) /*0x614660*/
          {
            v19 = (float *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x3C) /*0x61466d*/
                                                                                                 + 0x174))(
                             *(_DWORD *)(a1 + 0x3C),
                             result,
                             a4);
            sub_4121A0((float *)(a1 + 0x198), (float *)&v43[0x10], v19); /*0x61467b*/
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x17C]); /*0x61468e*/
            result = NiPoint3_Length((float *)&v43[0x10]); /*0x614690*/
            if ( *(float *)SafeFloatPointer > a5 ) /*0x61469e*/
LABEL_57:
              JUMPOUT(0x614A75); /*0x614a75*/
          }
          v21 = (_DWORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x3C) /*0x6146af*/
                                                                                                + 0x174))(
                            *(_DWORD *)(a1 + 0x3C),
                            result,
                            a4);
          *(_DWORD *)(a1 + 0x198) = *v21; /*0x6146b3*/
          v22 = *(_DWORD *)(a1 + 0x3C); /*0x6146bc*/
          *(_DWORD *)(a1 + 0x19C) = v21[1]; /*0x6146bf*/
          *(_DWORD *)(a1 + 0x1A0) = v21[2]; /*0x6146c8*/
          v40 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v22 + 0x1E0))(v22); /*0x6146dd*/
          NiMatrix33_InitRotationZ(&v49.rot.data[2][1], v40); /*0x6146e0*/
          v23 = *(int **)(a1 + 0x3C); /*0x6146e5*/
          v24 = *(float *)(*(int (__thiscall **)(int *, float *))(*v23 + 0x15C))(v23, &v49.rot.data[0][1]); /*0x6146f9*/
          v25 = *v23; /*0x6146fb*/
          *(double *)&v43[0xC] = v24; /*0x6146fd*/
          *(float *)v43 = *(double *)&v43[8] /*0x614716*/
                        - *(float *)(*(int (__thiscall **)(int *, float *))(v25 + 0x158))(v23, v49.rot.data[1]);
          if ( 0.0 == *(float *)v43 ) /*0x614725*/
            *(float *)v43 = flt_A427E4; /*0x61472d*/
          v26 = *(_DWORD *)(a1 + 0x3C); /*0x614731*/
          *(double *)&v43[4] = *(float *)((*(int (__thiscall **)(int, float *))(*(_DWORD *)v26 + 0x15C))( /*0x61474a*/
                                            v26,
                                            &v49.rot.data[0][2])
                                        + 4);
          v42 = *(double *)v43 /*0x614764*/
              - *(float *)((*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v26 + 0x158))(v26, v48) + 4);
          if ( v42 == 0.0 ) /*0x614779*/
          {
            v27 = a2; /*0x61477d*/
            v42 = a2; /*0x614781*/
            v28 = a2; /*0x614785*/
          }
          else
          {
            v28 = v42; /*0x61478f*/
            v27 = a2; /*0x61478f*/
          }
          *(float *)v43 = v27 / v28; /*0x614795*/
          if ( *(float *)v43 > (double)kHeadBodyNormalMatchRadius && *(float *)v43 < (double)fConstant_2 ) /*0x6147b9*/
          {
            if ( v28 < v27 ) /*0x6147c2*/
            {
              v42 = v27; /*0x6147da*/
              v28 = v42; /*0x6147de*/
            }
            else
            {
              a2 = v28; /*0x6147c6*/
              v27 = a2; /*0x6147ca*/
              v42 = a2; /*0x6147ce*/
              v28 = a2; /*0x6147d2*/
            }
          }
          v29 = flt_A56670; /*0x6147e6*/
          if ( v29 < v27 ) /*0x6147f3*/
          {
            a2 = flt_A56670; /*0x6147f9*/
            v27 = a2; /*0x614801*/
          }
          if ( v29 < v28 ) /*0x61480c*/
          {
            v42 = flt_A56670; /*0x614810*/
            v28 = v42; /*0x614814*/
          }
          v30 = *(_DWORD *)(a1 + 0x3C); /*0x61481c*/
          v46.x = -v27; /*0x614823*/
          v46.y = 0.0; /*0x614829*/
          v46.z = 0.0; /*0x61482d*/
          v47.y = 0.0; /*0x614831*/
          v47.z = 0.0; /*0x614835*/
          v45.x = 0.0; /*0x614839*/
          v45.z = 0.0; /*0x61483d*/
          *(float *)&v43[0xC] = 0.0; /*0x614841*/
          v47.x = v27; /*0x614847*/
          v45.y = v28; /*0x61484d*/
          *(float *)&v43[0x10] = -v28; /*0x614853*/
          v44 = 0.0; /*0x614857*/
          if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v30 + 0x58) + 0x2C0))(*(_DWORD *)(v30 + 0x58)) & 2) != 0 ) /*0x61486a*/
            *(float *)&v43[0x10] = *(float *)&v43[0x10] - v42; /*0x614874*/
          if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) /*0x61488a*/
              & 1) != 0 )
            *(float *)&v43[0x10] = *(float *)&v43[0x10] + v42; /*0x614894*/
          if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) /*0x6148aa*/
              & 4) != 0 )
            *(float *)&v43[0xC] = *(float *)&v43[0xC] - a2; /*0x6148b4*/
          if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) /*0x6148ca*/
              & 8) != 0 )
            *(float *)&v43[0xC] = *(float *)&v43[0xC] + a2; /*0x6148d4*/
          v31 = sub_7101F0((NiTransform *)v49.rot.data[1], &v49, &v46); /*0x6148e6*/
          *(float *)v43 = *(float *)(a1 + 0x198) + v31->rot.data[0][0]; /*0x6148f3*/
          *(float *)&v43[4] = *(float *)(a1 + 0x19C) + v31->rot.data[0][1]; /*0x614900*/
          *(float *)&v43[8] = *(float *)(a1 + 0x1A0) + v31->rot.data[0][2]; /*0x614921*/
          v46 = *(NiPoint3 *)v43; /*0x614933*/
          v32 = sub_7101F0((NiTransform *)v49.rot.data[1], &v49, &v47); /*0x614937*/
          *(float *)v43 = *(float *)(a1 + 0x198) + v32->rot.data[0][0]; /*0x614944*/
          *(float *)&v43[4] = *(float *)(a1 + 0x19C) + v32->rot.data[0][1]; /*0x614955*/
          *(float *)&v43[8] = *(float *)(a1 + 0x1A0) + v32->rot.data[0][2]; /*0x61496e*/
          v47 = *(NiPoint3 *)v43; /*0x61497f*/
          v33 = sub_7101F0((NiTransform *)v49.rot.data[1], &v49, &v45); /*0x614988*/
          *(float *)v43 = *(float *)(a1 + 0x198) + v33->rot.data[0][0]; /*0x614995*/
          *(float *)&v43[4] = *(float *)(a1 + 0x19C) + v33->rot.data[0][1]; /*0x6149a6*/
          *(float *)&v43[8] = *(float *)(a1 + 0x1A0) + v33->rot.data[0][2]; /*0x6149c4*/
          v45 = *(NiPoint3 *)v43; /*0x6149d5*/
          v34 = sub_7101F0((NiTransform *)v49.rot.data[1], &v49, (NiPoint3 *)&v43[0xC]); /*0x6149d9*/
          *(float *)v43 = *(float *)(a1 + 0x198) + v34->rot.data[0][0]; /*0x6149e6*/
          *(float *)&v43[4] = *(float *)(a1 + 0x19C) + v34->rot.data[0][1]; /*0x6149f3*/
          result = *(float *)(a1 + 0x1A0) + v34->rot.data[0][2]; /*0x614a01*/
          *(_QWORD *)&v43[0xC] = *(_QWORD *)v43; /*0x614a08*/
          *(float *)&v43[8] = result; /*0x614a0c*/
          v35 = BYTE1(qword_B3BB2C[0x157]) == 0; /*0x614a10*/
          v44 = *(float *)&v43[8]; /*0x614a1f*/
          if ( v35 ) /*0x614a23*/
          {
            switch ( a6 ) /*0x614a8c*/
            {
              case 0: /*0x614a8c*/
                if ( *(_BYTE *)(a1 + 0x197) ) /*0x614a93*/
                  sub_5FA0A0(*(TESObjectREFR **)(a1 + 0x3C), (float *)&v43[0xC]); /*0x614aa4*/
                else
                  v36 = 0; /*0x614aab*/
                sub_612910((_WORD *)(a1 + 0x190), 2, v36); /*0x614ab2*/
                return result; /*0x614acc*/
              case 1: /*0x614a8c*/
                if ( *(_BYTE *)(a1 + 0x196) ) /*0x614acf*/
                  sub_5FA0A0(*(TESObjectREFR **)(a1 + 0x3C), &v45.x); /*0x614ae0*/
                else
                  v37 = 0; /*0x614ae7*/
                sub_612910((_WORD *)(a1 + 0x190), 1, v37); /*0x614aee*/
                return result; /*0x614b08*/
              case 2: /*0x614a8c*/
                if ( *(_BYTE *)(a1 + 0x194) ) /*0x614b0b*/
                  sub_5FA0A0(*(TESObjectREFR **)(a1 + 0x3C), &v46.x); /*0x614b1c*/
                else
                  v38 = 0; /*0x614b23*/
                sub_612910((_WORD *)(a1 + 0x190), 4, v38); /*0x614b2a*/
                return result; /*0x614b44*/
              case 3: /*0x614a8c*/
                if ( *(_BYTE *)(a1 + 0x195) ) /*0x614b47*/
                  sub_5FA0A0(*(TESObjectREFR **)(a1 + 0x3C), &v47.x); /*0x614b58*/
                else
                  v39 = 0; /*0x614b5f*/
                sub_612910((_WORD *)(a1 + 0x190), 8, v39); /*0x614b66*/
                return result; /*0x614b80*/
              default:
                goto LABEL_57;
            }
          }
          sub_612910((_WORD *)(a1 + 0x190), 4, *(_BYTE *)(a1 + 0x194) != 0); /*0x614a34*/
          sub_612910((_WORD *)(a1 + 0x190), 8, *(_BYTE *)(a1 + 0x195) != 0); /*0x614a48*/
          sub_612910((_WORD *)(a1 + 0x190), 1, *(_BYTE *)(a1 + 0x196) != 0); /*0x614a5c*/
          sub_612910((_WORD *)(a1 + 0x190), 2, *(_BYTE *)(a1 + 0x197) != 0); /*0x614a70*/
          def_614A8C(a6); /*0x614a71*/
        }
      }
    }
  }
  return result; /*0x614647*/
}
