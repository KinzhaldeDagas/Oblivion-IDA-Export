char __usercall Cmd_PlaceAtMe@<al>(
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        va_list a6,
        ScriptEventList *a7,
        double *a8,
        UInt32 *a9)
{
  float y; // ecx
  float z; // edx
  TESObjectREFRVtbl *vtbl; // eax
  float *v14; // eax
  NiNode *v15; // eax
  double v16; // st7
  UInt32 **v17; // edi
  double v18; // st6
  float v19; // eax
  bool v20; // zf
  double v21; // rt0
  double v22; // st5
  double v23; // st6
  long double v24; // st6
  double v25; // st6
  char *v26; // edi
  Actor *v27; // ecx
  int Level; // eax
  TESContainer_Entry *p_list; // eax
  TESContainer_Data *data; // edi
  TESObjectCELL *ParentCell; // eax
  va_list v32; // eax
  int *v33; // esi
  int v34; // edi
  TESObjectCELL *v35; // eax
  int v36; // edi
  TESObjectREFRVtbl *v37; // eax
  hkVector4 v38; // xmm0
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  int v40; // eax
  float v41; // ecx
  float v42; // edx
  double v43; // st6
  float *v44; // eax
  float v45; // ecx
  float v46; // edx
  float v47; // eax
  double v48; // st7
  double v49; // rt2
  double v50; // st5
  double v51; // st4
  long double v52; // st3
  double v53; // st2
  double v54; // st6
  double v55; // st5
  BaseFormComponentVtbl *v56; // eax
  float v57; // ecx
  TESContainer_Data *v58; // edx
  TESObjectREFRVtbl *v59; // eax
  float *(__thiscall *v60)(TESObjectREFR *); // edx
  int v61; // eax
  double v62; // st6
  TESObjectCELL *v63; // eax
  va_list v64; // eax
  TESWorldSpace *WorldSpace; // [esp-8h] [ebp-22Ch]
  TESWorldSpace *v66; // [esp-8h] [ebp-22Ch]
  float lc; // [esp+1Ch] [ebp-208h]
  float ld; // [esp+1Ch] [ebp-208h]
  int l; // [esp+1Ch] [ebp-208h]
  TESContainer_Data *la; // [esp+1Ch] [ebp-208h]
  char *lb; // [esp+1Ch] [ebp-208h]
  float x; // [esp+20h] [ebp-204h] BYREF
  float v73; // [esp+24h] [ebp-200h]
  float v74; // [esp+28h] [ebp-1FCh]
  UInt32 *a3[2]; // [esp+2Ch] [ebp-1F8h]
  double v76; // [esp+34h] [ebp-1F0h]
  float v77; // [esp+3Ch] [ebp-1E8h]
  TESChildCELL *v78[2]; // [esp+44h] [ebp-1E0h]
  UInt16 v79[2]; // [esp+4Ch] [ebp-1D8h] BYREF
  int v80; // [esp+50h] [ebp-1D4h] BYREF
  va_list v81[2]; // [esp+54h] [ebp-1D0h]
  float v82; // [esp+5Ch] [ebp-1C8h] BYREF
  float v83; // [esp+60h] [ebp-1C4h]
  float v84; // [esp+64h] [ebp-1C0h]
  int v85; // [esp+68h] [ebp-1BCh] BYREF
  float v86; // [esp+6Ch] [ebp-1B8h]
  float v87; // [esp+70h] [ebp-1B4h]
  float v88; // [esp+74h] [ebp-1B0h]
  TESContainer v89; // [esp+78h] [ebp-1ACh] BYREF
  int v90; // [esp+88h] [ebp-19Ch] BYREF
  long double v91; // [esp+8Ch] [ebp-198h]
  int v92; // [esp+98h] [ebp-18Ch] BYREF
  float v93; // [esp+9Ch] [ebp-188h]
  float v94; // [esp+A0h] [ebp-184h]
  float v95; // [esp+A4h] [ebp-180h]
  float v96; // [esp+A8h] [ebp-17Ch]
  float v97; // [esp+ACh] [ebp-178h]
  float v98; // [esp+B0h] [ebp-174h]
  double v99; // [esp+B4h] [ebp-170h]
  _DWORD *v100; // [esp+C0h] [ebp-164h]
  _DWORD v101[3]; // [esp+C4h] [ebp-160h] BYREF
  float v102[9]; // [esp+D0h] [ebp-154h] BYREF
  _DWORD v103[3]; // [esp+F4h] [ebp-130h] BYREF
  char v104; // [esp+100h] [ebp-124h] BYREF
  hkVector4 v105; // [esp+164h] [ebp-C0h]
  hkVector4 v106; // [esp+174h] [ebp-B0h]
  bhkWorldRayCastData a2; // [esp+184h] [ebp-A0h] BYREF
  unsigned int v108; // [esp+220h] [ebp-4h]

  a3[0] = a9;
  v81[0] = a6;
  *a8 = 0.0;
  v100 = a8;
  *(_DWORD *)v79 = 0;
  v80 = 1;
  v85 = 0;
  v90 = 0;
  if ( !Script_ExtractArgs(a1, arg4, a3[0], a4, a5, (Script *)v81[0], a7, v79, &v80, &v85, &v90) )
    return 0;
  v81[0] = 0;
  if ( a4 )
  {
    y = a4->member.rot.y;
    z = a4->member.rot.z;
    v101[0] = LODWORD(a4->member.rot.x);
    vtbl = a4->vtbl;
    *(float *)&v101[1] = y;
    *(float *)&v101[2] = z;
    v14 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>))vtbl->GetPos)(a4, st7_0);
    x = *v14;
    v73 = v14[1];
    v74 = v14[2];
    if ( v85 )
    {
      v15 = a4->vtbl->GetNiNode(a4);
      if ( v15 )
      {
        qmemcpy(v102, &v15->members.super.m_localTransform, sizeof(v102));
        x = v15->members.super.m_localTransform.pos.x;
        v73 = v15->members.super.m_localTransform.pos.y;
        v74 = v15->members.super.m_localTransform.pos.z;
        if ( v90 < 2 || v90 > 3 )
        {
          *(float *)&v76 = v102[1];
          *((float *)&v76 + 1) = v102[4];
          v16 = v102[7];
        }
        else
        {
          *(float *)&v76 = v102[0];
          *((float *)&v76 + 1) = v102[3];
          v16 = v102[6];
        }
        v77 = v16;
        lc = (float)v85;
        *(float *)&v76 = *(float *)&v76 * lc;
        *((float *)&v76 + 1) = *((float *)&v76 + 1) * lc;
        v77 = lc * v77;
        if ( v90 <= 0 || v90 > 2 )
        {
          x = x + *(float *)&v76;
          v73 = v73 + *((float *)&v76 + 1);
          st7_0 = v74 + v77;
        }
        else
        {
          x = x - *(float *)&v76;
          v73 = v73 - *((float *)&v76 + 1);
          st7_0 = v74 - v77;
        }
        v74 = st7_0;
      }
    }
    *(float *)v103 = x;
    *(float *)&v103[1] = v73;
    *(float *)&v103[2] = v74;
    v17 = (UInt32 **)&v104;
    *(float *)a3 = (double)GetRandomLargeInteger_(0) * dbl_A4D918 / dbl_A3D5A8;
    ld = 0.0 * fCostant_100;
    v99 = x;
    v76 = v73;
    v18 = ld;
    l = 8;
    v84 = v18 + v74;
    do
    {
      v91 = *(float *)a3;
      *(float *)a3 = sin(*(float *)a3);
      v78[0] = (TESChildCELL *)a3[0];
      *(float *)a3 = cos(v91);
      v19 = v84;
      v89.vtbl = (BaseFormComponentVtbl *)a3[0];
      v17 += 3;
      v20 = l-- == 1;
      v21 = fCostant_100;
      v22 = *(float *)a3 * v21;
      *(float *)a3 = v22;
      *(float *)v78 = v21 * *(float *)v78;
      *(float *)a3 = *(float *)a3 + v99;
      *(float *)v78 = *(float *)v78 + v76;
      v82 = *(float *)a3;
      v23 = *(float *)v78;
      v17[0xFFFFFFFD] = a3[0];
      v83 = v23;
      v24 = v91;
      *((float *)v17 + 0xFFFFFFFE) = v83;
      v25 = v24 + dbl_A4D918;
      *((float *)v17 + 0xFFFFFFFF) = v19;
      *(float *)a3 = v25;
    }
    while ( !v20 );
    v26 = *(char **)v79;
    if ( *(_BYTE *)(*(_DWORD *)v79 + 4) == 0x25 )
    {
      v78[0] = *(TESChildCELL **)v79;
      TESContainer_constr(&v89);
      v27 = (Actor *)TESDataHandler_g_PlayerRef;
      v108 = 0;
      Level = Actor_GetLevel(v27, v80);
      TESLeveledList_CalcLeveledForm(v26 + 0x24, Level, (int)&v89);
      if ( nullsub_returnFalse_1arg(0) )
        sub_4AFA80(v26, (BSSimpleList_VoidPtr *)&v89);
      p_list = &v89.list;
      for ( a3[0] = (UInt32 *)&v89.list; p_list->next || p_list->data; p_list = (TESContainer_Entry *)a3[0] )
      {
        data = p_list->data;
        la = p_list->data;
        if ( p_list->data )
        {
          if ( data->type )
          {
            if ( data->count > 0 )
            {
              do
              {
                WorldSpace = TESObjectREFR_GetWorldSpace(a4);
                ParentCell = TESObjectREFR_GetParentCell(a4);
                TESDataHandler_PlaceObjectRef(
                  v22,
                  v25,
                  (int)data->type,
                  (int)&x,
                  (int)v101,
                  ParentCell,
                  (int)WorldSpace,
                  0);
                v33 = (int *)v32;
                v81[0] = v32;
                if ( v32 )
                {
                  v34 = *(_DWORD *)v32;
                  v35 = TESObjectREFR_GetParentCell((TESObjectREFR *)v78[0]);
                  (*(void (__thiscall **)(int *, TESObjectCELL *))(v34 + 0x12C))(v33, v35);
                  sub_4D7A90(v33, 1);
                  data = la;
                }
                --data->count;
              }
              while ( data->count > 0 );
              p_list = (TESContainer_Entry *)a3[0];
            }
          }
        }
        a3[0] = (UInt32 *)p_list->next;
        if ( !a3[0] )
          break;
      }
      v108 = 0xFFFFFFFF;
      TESContainer_destr(&v89);
    }
    else
    {
      v36 = 0;
      lb = 0;
      if ( v80 > 0 )
      {
        do
        {
          v37 = a4->vtbl;
          v38 = stru_BA7A40;
          a2.WorldRayCastOutput.HitFraction = 1.0;
          GetPos = v37->GetPos;
          a2.WorldRayCastInput.EnableShapeCollectionFilter = 0;
          a2.WorldRayCastOutput.RootCollidable = 0;
          memset(&a2.BroadPhaseAabbCache, 0, 0xC);
          a2.unk60 = v38;
          a2.WorldRayCastInput.FilterInfo = 0x3001B;
          v40 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>))GetPos)(a4, st7_0);
          v41 = *(float *)v40;
          v42 = *(float *)(v40 + 4);
          v95 = *(float *)(v40 + 8);
          v43 = dbl_A4D910;
          v44 = (float *)&v103[3 * v36];
          v93 = v41;
          v45 = *v44;
          v95 = v95 + v43;
          v94 = v42;
          v46 = v44[1];
          v47 = v44[2];
          v86 = v45;
          v87 = v46;
          v88 = v43 + v47;
          v48 = v93;
          v76 = v93;
          v49 = hkFactor;
          v105.x = v93 * v49;
          v50 = v94;
          *(double *)v78 = v94;
          v105.y = v94 * v49;
          v51 = v95;
          v99 = v95;
          v105.z = v95 * v49;
          v52 = v45;
          a2.WorldRayCastInput.From = v105;
          v91 = v45;
          a2.unk60 = stru_BA7A40;
          v106.x = v45 * v49;
          v53 = v46;
          *(double *)v81 = v46;
          v106.y = v46 * v49;
          *(double *)a3 = v88;
          v54 = v88;
          v106.z = v49 * v88;
          a2.WorldRayCastInput.To = v106;
          if ( v45 != v93 || v53 != v50 || v54 != v51 )
          {
            TES::CastRay(TES, &a2);
            v48 = v76;
            v54 = *(double *)a3;
            v52 = v91;
            v50 = *(double *)v78;
            v53 = *(double *)v81;
            v51 = v99;
          }
          if ( a2.WorldRayCastOutput.RootCollidable )
          {
            v82 = v52 - v48;
            v55 = v53 - v50;
            v83 = v55;
            v84 = v54 - v51;
            sub_43F350(&v82);
            *(float *)v78 = sub_46D5C0(*(void **)v79);
            v96 = v82 * *(float *)v78;
            v97 = v83 * *(float *)v78;
            v98 = *(float *)v78 * v84;
            *(float *)&v89.vtbl = v91 - v96;
            v56 = v89.vtbl;
            *(float *)&v89.type = *(double *)v81 - v97;
            v57 = *(float *)&v89.type;
            st7_0 = *(double *)a3 - v98;
            *(float *)&v89.list.data = st7_0;
            v58 = v89.list.data;
          }
          else
          {
            *(float *)&v56 = v86;
            v57 = v87;
            *(float *)&v58 = v88;
            v55 = v51;
            st7_0 = v54;
          }
          x = *(float *)&v56;
          v59 = a4->vtbl;
          v74 = *(float *)&v58;
          v60 = v59->GetPos;
          v73 = v57;
          v61 = (int)v60(a4);
          v62 = *(float *)(v61 + 8);
          v74 = *(float *)(v61 + 8);
          v66 = TESObjectREFR_GetWorldSpace(a4);
          v63 = TESObjectREFR_GetParentCell(a4);
          TESDataHandler_PlaceObjectRef(v55, v62, *(int *)v79, (int)&x, (int)v101, v63, (int)v66, 0);
          v81[0] = v64;
          if ( !v64 )
            return 0;
          if ( ++v36 == 9 )
            v36 = 0;
        }
        while ( (int)++lb < v80 );
      }
    }
    v92 = 0;
    if ( v81[0] )
    {
      v92 = *((_DWORD *)v81[0] + 3);
      sub_4F9FB0(&v92, v100);
    }
  }
  return 1;
}
