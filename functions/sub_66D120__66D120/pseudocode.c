void __userpurge sub_66D120(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        TESObjectREFR *a5,
        int a6,
        float a7)
{
  int v8; // ebx
  NiObject *v9; // eax
  bool v10; // al
  double v11; // st7
  TESObjectCELL *DwordAtOffset40; // edi
  BSExtraDataVtbl *v13; // edi
  __int32 parentCell; // eax
  double v15; // st7
  TESObjectCELL *HitInfoIfTyped; // eax
  double v17; // st7
  double v18; // st7
  NiTransform *v19; // eax
  __m128 *v20; // eax
  int v21; // ebx
  __m128 **v22; // edi
  float *CharProxy; // eax
  double v24; // st7
  int *v25; // ecx
  int v26; // edx
  unsigned __int8 (__thiscall *v27)(int *); // eax
  double v28; // st7
  double v29; // st7
  double v30; // st7
  double v31; // st7
  __m128 *v32; // eax
  TESObjectCELL *v33; // eax
  int v34; // eax
  TESObjectREFRVtbl *v35; // eax
  bhkRefObject *v36; // eax
  _DWORD *v37; // ebx
  void (__thiscall **v38)(_DWORD *, int); // edi
  TESObjectCELL *v39; // eax
  int v40; // eax
  TESObjectCELL *v41; // eax
  int v42; // eax
  __m128 *v43; // [esp-8h] [ebp-18Ch]
  TESObjectREFR v44; // [esp+18h] [ebp-16Ch] BYREF
  float v45[4]; // [esp+74h] [ebp-110h] BYREF
  float v46; // [esp+84h] [ebp-100h]
  float v47; // [esp+88h] [ebp-FCh]
  float v48; // [esp+8Ch] [ebp-F8h]
  float v49; // [esp+90h] [ebp-F4h]
  __m128 v50; // [esp+94h] [ebp-F0h] BYREF
  __m128 v51; // [esp+A4h] [ebp-E0h]
  __m128 v52; // [esp+B4h] [ebp-D0h] BYREF
  __m128 v53; // [esp+C4h] [ebp-C0h] BYREF
  __m128 v54; // [esp+D4h] [ebp-B0h] BYREF
  bhkWorldRayCastData v55; // [esp+E4h] [ebp-A0h] BYREF
  unsigned int v56; // [esp+180h] [ebp-4h]

  if ( (bAllowHavokGrabTheLiving || !a5->vtbl->IsActor(a5) || a5->vtbl->IsDead(a5, 0)) /*0x66d19e*/
    && a5
    && Shared_GetDwordAtOffset40(a5) )
  {
    v8 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetNiNode)( /*0x66d1b7*/
           a5,
           st7_0,
           a3,
           a2);
    v44.member.baseForm = (TESForm *)sub_4803C0(v8); /*0x66d1c4*/
    if ( v44.member.baseForm ) /*0x66d1c8*/
    {
      v9 = sub_6FA970((NiObjectNET *)v8); /*0x66d1cf*/
      if ( v9 && (v9[1].members.m_uiRefCount & 8) != 0 /*0x66d1f6*/
        || (v10 = a5->vtbl->IsActor(a5), v44.member.super.pad[2] = 0, v10) )
      {
        v44.member.super.pad[2] = 1; /*0x66d1f8*/
      }
      *(float *)(a1 + 0x584) = a7; /*0x66d207*/
      *(_DWORD *)(a1 + 0x578) = a5; /*0x66d20d*/
      *(_DWORD *)(a1 + 0x57C) = a6; /*0x66d213*/
      sub_47F9F0((float *)&v44.member.niNode); /*0x66d219*/
      v11 = 0.0; /*0x66d21e*/
      v44.member.rot.x = 0.0; /*0x66d225*/
      if ( v44.member.super.pad[2] ) /*0x66d230*/
      {
        sub_8A4000(v8, &v53, &v44.member.rot.x); /*0x66d239*/
      }
      else
      {
        ((void (__thiscall *)(TESForm *, __m128 *))v44.member.baseForm->vtbl->Unk_2A)(v44.member.baseForm, &v53); /*0x66d250*/
        v11 = sub_47DE30(&v44.member.baseForm->vtbl); /*0x66d256*/
        v44.member.rot.x = v11; /*0x66d25b*/
      }
      sub_5F11F0((MobileObject *)a1, v11, &v44.member.rot.y, &v44.member.pos[1]); /*0x66d26b*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x66d277*/
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x66d27b*/
        v13 = sub_424180(&DwordAtOffset40->members.extraData); /*0x66d28c*/
      else
        v13 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x66d290*/
      if ( *(_DWORD *)(a1 + 0x57C) == 1 && v13 ) /*0x66d2a5*/
      {
        if ( sub_5796F0() && unk_B365A8 ) /*0x66d2b8*/
        {
          sub_579640(v50.m128_f32); /*0x66d2cd*/
          if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x66d2db*/
          {
            *(float *)&v44.member.super.refID = v50.m128_f32[0] - v44.member.rot.y; /*0x66d2f3*/
            *(float *)&v44.member.super.flags = v50.m128_f32[1] - v44.member.rot.z; /*0x66d302*/
            *(float *)&v44.vtbl = v50.m128_f32[2] - v44.member.pos[0]; /*0x66d311*/
            v44.member.super.modlist.data = (Data *)v44.member.super.refID; /*0x66d319*/
            v44.member.super.modlist.next = (TESForm::ModReferenceList *)v44.member.super.flags; /*0x66d321*/
            v44.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))v44.vtbl; /*0x66d329*/
            *(float *)(a1 + 0x584) = NiPoint3_Length((float *)&v44.member.super.modlist); /*0x66d332*/
          }
          sub_47DD50(v45, v50.m128_f32); /*0x66d344*/
          if ( unk_B365A8 ) /*0x66d349*/
            parentCell = *(_DWORD *)(unk_B365A8 + 8); /*0x66d352*/
          else
            parentCell = 0; /*0x66d35a*/
LABEL_34:
          v44.member.parentCell = (TESObjectCELL *)parentCell; /*0x66d5c0*/
          goto LABEL_35; /*0x66d5c0*/
        }
        bhkWorldRayCastData::Init(&v55); /*0x66d368*/
        v55.WorldRayCastInput.FilterInfo = (HIWORD(MobileObject_GetCollisionFilterInfo((MobileObject *)a1, &v44)->vtbl) << 0x10) /*0x66d383*/
                                         | 0x19;
        bhkWorldRayCastData::SetCastInputFrom(&v55, (NiPoint3 *)&v44.member.rot.y); /*0x66d396*/
        v44.vtbl = *(TESObjectREFRVtbl **)(a1 + 0x584); /*0x66d3a6*/
        v15 = *(float *)&v44.vtbl; /*0x66d3bd*/
        *(float *)&v44.vtbl = v44.member.pos[1] * *(float *)&v44.vtbl; /*0x66d3bf*/
        *(float *)&v44.member.super.refID = v44.member.pos[2] * v15; /*0x66d3c9*/
        *(float *)&v44.member.super.flags = v15 * v44.member.scale; /*0x66d3d1*/
        v44.member.super.modlist.data = (Data *)v44.vtbl; /*0x66d3d9*/
        v44.member.super.modlist.next = (TESForm::ModReferenceList *)v44.member.super.refID; /*0x66d3e1*/
        v44.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))v44.member.super.flags; /*0x66d3e9*/
        sub_663FF0(&v55, (float *)&v44.member.super.modlist); /*0x66d3ed*/
        if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v13->Destructor + 0x22))( /*0x66d404*/
               v13,
               &v55) )
        {
          HitInfoIfTyped = (TESObjectCELL *)bhkWorldRayCastData_GetHitInfoIfTyped(&v55); /*0x66d415*/
          if ( HitInfoIfTyped ) /*0x66d41c*/
          {
            v44.member.parentCell = HitInfoIfTyped; /*0x66d429*/
            *(float *)&v44.vtbl = v55.WorldRayCastOutput.HitFraction * *(float *)(a1 + 0x584); /*0x66d43c*/
            v17 = *(float *)&v44.vtbl; /*0x66d440*/
            *(float *)(a1 + 0x584) = *(float *)&v44.vtbl; /*0x66d444*/
            *(float *)&v44.vtbl = v17; /*0x66d44a*/
            v18 = *(float *)&v44.vtbl; /*0x66d45a*/
            *(float *)&v44.vtbl = v44.member.pos[1] * *(float *)&v44.vtbl; /*0x66d45c*/
            *(float *)&v44.member.super.refID = v44.member.pos[2] * v18; /*0x66d466*/
            *(float *)&v44.member.super.flags = v18 * v44.member.scale; /*0x66d46e*/
            *(float *)&v44.vtbl = v44.member.rot.y + *(float *)&v44.vtbl; /*0x66d47a*/
            *(float *)&v44.member.super.refID = v44.member.rot.z + *(float *)&v44.member.super.refID; /*0x66d486*/
            *(float *)&v44.member.super.flags = v44.member.pos[0] + *(float *)&v44.member.super.flags; /*0x66d492*/
            v44.member.super.modlist.data = (Data *)v44.vtbl; /*0x66d49a*/
            v44.member.super.modlist.next = (TESForm::ModReferenceList *)v44.member.super.refID; /*0x66d4a2*/
            v44.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))v44.member.super.flags; /*0x66d4aa*/
            sub_47DD50(v45, (float *)&v44.member.super.modlist); /*0x66d4ae*/
            parentCell = (__int32)v44.member.parentCell; /*0x66d4b3*/
LABEL_35:
            v21 = parentCell; /*0x66d5c4*/
            if ( !*(_DWORD *)(parentCell + 8) /*0x66d5f2*/
              || (v22 = (__m128 **)(parentCell + 0x50),
                  (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(parentCell + 0x50) + 8))(*(_DWORD *)(parentCell + 0x50)) == 7)
              || (*(int (__thiscall **)(__m128 *))((*v22)->m128_i32[0] + 8))(*v22) == 6 )
            {
              sub_66A670((TESObjectREFR *)a1); /*0x66d8d5*/
              return; /*0x66d8da*/
            }
            CharProxy = (float *)MobileObject_GetCharProxy((MobileObject *)a1); /*0x66d5fa*/
            if ( CharProxy ) /*0x66d601*/
            {
              *(float *)&v44.vtbl = bhkCharacterController_GetRadius(CharProxy); /*0x66d60a*/
              *(float *)&v44.vtbl = *(float *)&v44.vtbl * dbl_A372E0; /*0x66d618*/
              *(float *)&v44.vtbl = *(float *)&v44.vtbl + dbl_A3F3F0; /*0x66d626*/
              if ( *(float *)&v44.vtbl > (double)*(float *)(a1 + 0x584) ) /*0x66d63d*/
                *(float *)(a1 + 0x584) = *(float *)&v44.vtbl; /*0x66d63f*/
            }
            if ( *(_DWORD *)(a1 + 0x57C) == 3 ) /*0x66d650*/
            {
              if ( v44.member.super.pad[2] ) /*0x66d65b*/
              {
                v46 = *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x68]); /*0x66d66e*/
                v47 = *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x6A]); /*0x66d681*/
                v49 = *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x6C]); /*0x66d694*/
                v24 = *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x6E]); /*0x66d6a0*/
              }
              else
              {
                v46 = *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x60]); /*0x66d6b8*/
                v47 = *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x62]); /*0x66d6cb*/
                v49 = *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x64]); /*0x66d6de*/
                v24 = *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x66]); /*0x66d6ea*/
              }
              goto LABEL_54; /*0x66d6a2*/
            }
            v25 = *(int **)(a1 + 0x578); /*0x66d6f1*/
            v26 = *v25; /*0x66d6f9*/
            *(float *)&v44.member.super.flags = 1.0; /*0x66d6fb*/
            v27 = *(unsigned __int8 (__thiscall **)(int *))(v26 + 0x190); /*0x66d6ff*/
            *(float *)&v44.member.super.refID = 1.0; /*0x66d705*/
            if ( v27(v25) ) /*0x66d709*/
            {
              *(float *)&v44.vtbl = sub_89DA90((*v22)->m128_f32); /*0x66d716*/
              v28 = *(float *)&v44.vtbl; /*0x66d724*/
              if ( *(float *)&v44.vtbl <= 0.0 || v44.member.rot.x <= v28 ) /*0x66d736*/
              {
                v31 = sub_536460(v21); /*0x66d756*/
                v30 = v31 * *(float *)&v44.member.super.flags; /*0x66d75b*/
              }
              else
              {
                *(float *)&v44.member.super.flags = 1.0 - v28 / v44.member.rot.x; /*0x66d73f*/
                v29 = sub_536460(v21); /*0x66d743*/
                v30 = v29 * *(float *)&v44.member.super.flags; /*0x66d748*/
              }
            }
            else
            {
              if ( (*(_BYTE *)sub_497340(&v44.member.baseForm->vtbl, &v44.member.baseForm) & 0x3F) != 0xE ) /*0x66d77a*/
              {
LABEL_53:
                v46 = kHeadBodyNormalMatchRadius; /*0x66d790*/
                v47 = *(float *)&v44.member.super.refID * dbl_A38538; /*0x66d7a7*/
                v49 = flt_A41328; /*0x66d7b4*/
                v24 = *(float *)&v44.member.super.flags * dbl_A2FC70; /*0x66d7bf*/
LABEL_54:
                v48 = v24; /*0x66d7c5*/
                sub_47F950(v45, v52.m128_f32); /*0x66d7d8*/
                v52 = _mm_sub_ps(v52, (*v22)[4]); /*0x66d7ee*/
                v43 = *v22 + 1; /*0x66d803*/
                v32 = (__m128 *)sub_47F950((float *)v44.member.baseExtraList.members.m_presenceBitfield, v54.m128_f32); /*0x66d810*/
                hkBasis_ProjectVector(v32, v43, &v52); /*0x66d817*/
                sub_47DCD0((float *)v44.member.baseExtraList.members.m_presenceBitfield, &v54); /*0x66d828*/
                v33 = (TESObjectCELL *)Shared_GetDwordAtOffset40(*(void **)(a1 + 0x578)); /*0x66d833*/
                sub_4440C0(v33); /*0x66d83a*/
                if ( v34 ) /*0x66d841*/
                  (*(void (__thiscall **)(int))(*(_DWORD *)v34 + 0x58))(v34); /*0x66d84a*/
                v35 = (TESObjectREFRVtbl *)FormHeapAlloc(0x10u); /*0x66d84e*/
                v44.vtbl = v35; /*0x66d856*/
                v56 = 0; /*0x66d85c*/
                if ( v35 ) /*0x66d867*/
                  v36 = sub_47DE90((bhkRefObject *)v35, (int)&v44.member.niNode); /*0x66d870*/
                else
                  v36 = 0; /*0x66d877*/
                v56 = 0xFFFFFFFF; /*0x66d882*/
                NiSmartPointer_Set__((Ni2DBuffer **)(a1 + 0x574), (Ni2DBuffer *)v36); /*0x66d88d*/
                v37 = *(_DWORD **)(a1 + 0x574); /*0x66d892*/
                v38 = (void (__thiscall **)(_DWORD *, int))(*v37 + 0x5C); /*0x66d89c*/
                v39 = (TESObjectCELL *)Shared_GetDwordAtOffset40(*(void **)(a1 + 0x578)); /*0x66d89f*/
                sub_4440C0(v39); /*0x66d8a6*/
                (*v38)(v37, v40); /*0x66d8b0*/
                v41 = (TESObjectCELL *)Shared_GetDwordAtOffset40(*(void **)(a1 + 0x578)); /*0x66d8b8*/
                sub_4440C0(v41); /*0x66d8bf*/
                if ( v42 ) /*0x66d8c6*/
                  (*(void (__thiscall **)(int))(*(_DWORD *)v42 + 0x58))(v42); /*0x66d8cf*/
                return; /*0x66d8d1*/
              }
              *(float *)&v44.member.super.refID = kFaceEarNormalMatchRadius; /*0x66d782*/
              v30 = kHeadBodyNormalMatchRadius; /*0x66d786*/
            }
            *(float *)&v44.member.super.flags = v30; /*0x66d78c*/
            goto LABEL_53; /*0x66d78c*/
          }
        }
      }
      sub_47DCD0(v45, &v53); /*0x66d4c8*/
      if ( v44.member.super.pad[2] ) /*0x66d4d2*/
      {
        v19 = sub_7101F0((NiTransform *)(v8 + 0x64), (NiTransform *)&v44.member.super.modlist, &rhs); /*0x66d4e1*/
        v51.m128_f32[0] = v19->rot.data[0][0]; /*0x66d4e8*/
        v51.m128_f32[1] = v19->rot.data[0][1]; /*0x66d4f6*/
        v51.m128_f32[2] = v19->rot.data[0][2]; /*0x66d508*/
        sub_47F950(v45, v50.m128_f32); /*0x66d50f*/
        v50 = _mm_add_ps(v50, v51); /*0x66d533*/
        sub_47DCD0(v45, &v50); /*0x66d53b*/
      }
      if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x66d546*/
      {
        v20 = (__m128 *)sub_47F950(v45, v50.m128_f32); /*0x66d55b*/
        HavokVector_ToWorldVector((float *)&v44.member.super.modlist, v20); /*0x66d566*/
        *(float *)&v44.vtbl = *(float *)&v44.member.super.modlist.data - v44.member.rot.y; /*0x66d57a*/
        *(float *)&v44.member.super.refID = *(float *)&v44.member.super.modlist.next - v44.member.rot.z; /*0x66d586*/
        *(float *)&v44.member.super.flags = *(float *)&v44.member.childCell.GetChildCell - v44.member.pos[0]; /*0x66d592*/
        v44.member.super.modlist.data = (Data *)v44.vtbl; /*0x66d59a*/
        v44.member.super.modlist.next = (TESForm::ModReferenceList *)v44.member.super.refID; /*0x66d5a2*/
        v44.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))v44.member.super.flags; /*0x66d5aa*/
        *(float *)(a1 + 0x584) = NiPoint3_Length((float *)&v44.member.super.modlist); /*0x66d5b3*/
      }
      parentCell = v44.member.baseForm->member.flags; /*0x66d5bd*/
      goto LABEL_34; /*0x66d5bd*/
    }
    if ( a6 == 2 ) /*0x66d8e4*/
    {
      *(_DWORD *)(a1 + 0x578) = a5; /*0x66d8e9*/
      *(float *)(a1 + 0x584) = a7; /*0x66d8ef*/
      *(_DWORD *)(a1 + 0x57C) = 2; /*0x66d8f5*/
    }
  }
}
