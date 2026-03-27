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
  int v9; // eax
  bool v10; // al
  double v11; // st7
  TESObjectCELL *ParentCell; // edi
  BSExtraDataVtbl *v13; // edi
  __int32 flags; // eax
  double v15; // st7
  TESObjectCELL *v16; // eax
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

  if ( (bAllowHavokGrabTheLiving || !a5->vtbl->IsActor(a5) || a5->vtbl->IsDead(a5, 0))
    && a5
    && TESObjectREFR_GetParentCell(a5) )
  {
    v8 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetNiNode)(
           a5,
           st7_0,
           a3,
           a2);
    v44.member.baseForm = (TESForm *)sub_4803C0(v8);
    if ( v44.member.baseForm )
    {
      v9 = sub_6FA970((_WORD *)v8);
      if ( v9 && (*(_DWORD *)(v9 + 0xC) & 8) != 0 || (v10 = a5->vtbl->IsActor(a5), v44.member.super.pad[2] = 0, v10) )
        v44.member.super.pad[2] = 1;
      *(float *)(a1 + 0x584) = a7;
      *(_DWORD *)(a1 + 0x578) = a5;
      *(_DWORD *)(a1 + 0x57C) = a6;
      sub_47F9F0((float *)&v44.member.niNode);
      v11 = 0.0;
      v44.member.rot.x = 0.0;
      if ( v44.member.super.pad[2] )
      {
        sub_8A4000(v8, &v53, &v44.member.rot.x);
      }
      else
      {
        ((void (__thiscall *)(TESForm *, __m128 *))v44.member.baseForm->vtbl->Unk_2A)(v44.member.baseForm, &v53);
        v11 = sub_47DE30(&v44.member.baseForm->vtbl);
        v44.member.rot.x = v11;
      }
      sub_5F11F0((Actor *)a1, v11, &v44.member.rot.y, &v44.member.pos[1]);
      ParentCell = TESObjectREFR_GetParentCell(a5);
      if ( TESObjectCELL_IsInterior(ParentCell) )
        v13 = sub_424180(&ParentCell->members.extraData);
      else
        v13 = (BSExtraDataVtbl *)bhkWorldM;
      if ( *(_DWORD *)(a1 + 0x57C) == 1 && v13 )
      {
        if ( sub_5796F0() && dword_B365A8 )
        {
          sub_579640(v50.m128_f32);
          if ( !sub_45A500(SaveLoad_CurrentSavegame) )
          {
            *(float *)&v44.member.super.refID = v50.m128_f32[0] - v44.member.rot.y;
            *(float *)&v44.member.super.flags = v50.m128_f32[1] - v44.member.rot.z;
            *(float *)&v44.vtbl = v50.m128_f32[2] - v44.member.pos[0];
            v44.member.super.modlist.data = (Data *)v44.member.super.refID;
            v44.member.super.modlist.next = (TESForm::ModReferenceList *)v44.member.super.flags;
            v44.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))v44.vtbl;
            *(float *)(a1 + 0x584) = sub_404C90((float *)&v44.member.super.modlist);
          }
          sub_47DD50(v45, v50.m128_f32);
          if ( dword_B365A8 )
            flags = *(_DWORD *)(dword_B365A8 + 8);
          else
            flags = 0;
LABEL_34:
          v44.member.parentCell = (TESObjectCELL *)flags;
          goto LABEL_35;
        }
        bhkWorldRayCastData::Init(&v55);
        v55.WorldRayCastInput.FilterInfo = (HIWORD(sub_65ABE0((MobileObject *)a1, &v44)->vtbl) << 0x10) | 0x19;
        bhkWorldRayCastData::SetCastInputFrom(&v55, (NiPoint3 *)&v44.member.rot.y);
        v44.vtbl = *(TESObjectREFRVtbl **)(a1 + 0x584);
        v15 = *(float *)&v44.vtbl;
        *(float *)&v44.vtbl = v44.member.pos[1] * *(float *)&v44.vtbl;
        *(float *)&v44.member.super.refID = v44.member.pos[2] * v15;
        *(float *)&v44.member.super.flags = v15 * v44.member.scale;
        v44.member.super.modlist.data = (Data *)v44.vtbl;
        v44.member.super.modlist.next = (TESForm::ModReferenceList *)v44.member.super.refID;
        v44.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))v44.member.super.flags;
        sub_663FF0(&v55, (float *)&v44.member.super.modlist);
        if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v13->Destructor + 0x22))(
               v13,
               &v55) )
        {
          v16 = (TESObjectCELL *)sub_889CD0(&v55);
          if ( v16 )
          {
            v44.member.parentCell = v16;
            *(float *)&v44.vtbl = v55.WorldRayCastOutput.HitFraction * *(float *)(a1 + 0x584);
            v17 = *(float *)&v44.vtbl;
            *(float *)(a1 + 0x584) = *(float *)&v44.vtbl;
            *(float *)&v44.vtbl = v17;
            v18 = *(float *)&v44.vtbl;
            *(float *)&v44.vtbl = v44.member.pos[1] * *(float *)&v44.vtbl;
            *(float *)&v44.member.super.refID = v44.member.pos[2] * v18;
            *(float *)&v44.member.super.flags = v18 * v44.member.scale;
            *(float *)&v44.vtbl = v44.member.rot.y + *(float *)&v44.vtbl;
            *(float *)&v44.member.super.refID = v44.member.rot.z + *(float *)&v44.member.super.refID;
            *(float *)&v44.member.super.flags = v44.member.pos[0] + *(float *)&v44.member.super.flags;
            v44.member.super.modlist.data = (Data *)v44.vtbl;
            v44.member.super.modlist.next = (TESForm::ModReferenceList *)v44.member.super.refID;
            v44.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))v44.member.super.flags;
            sub_47DD50(v45, (float *)&v44.member.super.modlist);
            flags = (__int32)v44.member.parentCell;
LABEL_35:
            v21 = flags;
            if ( !*(_DWORD *)(flags + 8)
              || (v22 = (__m128 **)(flags + 0x50),
                  (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(flags + 0x50) + 8))(*(_DWORD *)(flags + 0x50)) == 7)
              || (*(int (__thiscall **)(__m128 *))((*v22)->m128_i32[0] + 8))(*v22) == 6 )
            {
              sub_66A670((TESObjectREFR *)a1);
              return;
            }
            CharProxy = (float *)MobileObject_GetCharProxy((MobileObject *)a1);
            if ( CharProxy )
            {
              *(float *)&v44.vtbl = sub_8913C0(CharProxy);
              *(float *)&v44.vtbl = *(float *)&v44.vtbl * dbl_A372E0;
              *(float *)&v44.vtbl = *(float *)&v44.vtbl + dbl_A3F3F0;
              if ( *(float *)&v44.vtbl > (double)*(float *)(a1 + 0x584) )
                *(float *)(a1 + 0x584) = *(float *)&v44.vtbl;
            }
            if ( *(_DWORD *)(a1 + 0x57C) == 3 )
            {
              if ( v44.member.super.pad[2] )
              {
                v46 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fMagicTelekinesisComplexSpringDamping);
                v47 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fMagicTelekinesisComplexSpringElasticit);
                v49 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fMagicTelekinesisComplexObjectDamping);
                v24 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fMagicTelekinesisComplexMaxForce);
              }
              else
              {
                v46 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fMagicTelekinesisSpringDamping);
                v47 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fMagicTelekinesisSpringElasticity);
                v49 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fMagicTelekinesisObjectDamping);
                v24 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fMagicTelekinesisMaxForce);
              }
              goto LABEL_54;
            }
            v25 = *(int **)(a1 + 0x578);
            v26 = *v25;
            *(float *)&v44.member.super.flags = 1.0;
            v27 = *(unsigned __int8 (__thiscall **)(int *))(v26 + 0x190);
            *(float *)&v44.member.super.refID = 1.0;
            if ( v27(v25) )
            {
              *(float *)&v44.vtbl = sub_89DA90((*v22)->m128_f32);
              v28 = *(float *)&v44.vtbl;
              if ( *(float *)&v44.vtbl <= 0.0 || v44.member.rot.x <= v28 )
              {
                v31 = sub_536460(v21);
                v30 = v31 * *(float *)&v44.member.super.flags;
              }
              else
              {
                *(float *)&v44.member.super.flags = 1.0 - v28 / v44.member.rot.x;
                v29 = sub_536460(v21);
                v30 = v29 * *(float *)&v44.member.super.flags;
              }
            }
            else
            {
              if ( (*(_BYTE *)sub_497340(&v44.member.baseForm->vtbl, &v44.member.baseForm) & 0x3F) != 0xE )
              {
LABEL_53:
                v46 = flt_A3D65C;
                v47 = *(float *)&v44.member.super.refID * dbl_A38538;
                v49 = flt_A41328;
                v24 = *(float *)&v44.member.super.flags * dbl_A2FC70;
LABEL_54:
                v48 = v24;
                sub_47F950(v45, v52.m128_f32);
                v52 = _mm_sub_ps(v52, (*v22)[4]);
                v43 = *v22 + 1;
                v32 = (__m128 *)sub_47F950((float *)v44.member.baseExtraList.members.m_presenceBitfield, v54.m128_f32);
                sub_88FD90(v32, v43, &v52);
                sub_47DCD0((float *)v44.member.baseExtraList.members.m_presenceBitfield, &v54);
                v33 = TESObjectREFR_GetParentCell(*(TESObjectREFR **)(a1 + 0x578));
                sub_4440C0(v33);
                if ( v34 )
                  (*(void (__thiscall **)(int))(*(_DWORD *)v34 + 0x58))(v34);
                v35 = (TESObjectREFRVtbl *)FormHeapAlloc(0x10u);
                v44.vtbl = v35;
                v56 = 0;
                if ( v35 )
                  v36 = sub_47DE90((bhkRefObject *)v35, (int)&v44.member.niNode);
                else
                  v36 = 0;
                v56 = 0xFFFFFFFF;
                NiSmartPointer_Set__((Ni2DBuffer **)(a1 + 0x574), (Ni2DBuffer *)v36);
                v37 = *(_DWORD **)(a1 + 0x574);
                v38 = (void (__thiscall **)(_DWORD *, int))(*v37 + 0x5C);
                v39 = TESObjectREFR_GetParentCell(*(TESObjectREFR **)(a1 + 0x578));
                sub_4440C0(v39);
                (*v38)(v37, v40);
                v41 = TESObjectREFR_GetParentCell(*(TESObjectREFR **)(a1 + 0x578));
                sub_4440C0(v41);
                if ( v42 )
                  (*(void (__thiscall **)(int))(*(_DWORD *)v42 + 0x58))(v42);
                return;
              }
              *(float *)&v44.member.super.refID = flt_A2FAAC;
              v30 = flt_A3D65C;
            }
            *(float *)&v44.member.super.flags = v30;
            goto LABEL_53;
          }
        }
      }
      sub_47DCD0(v45, &v53);
      if ( v44.member.super.pad[2] )
      {
        v19 = sub_7101F0(
                (NiTransform *)(v8 + 0x64),
                (NiTransform *)&v44.member.super.modlist,
                (NiPoint3 *)&dword_B258E8);
        v51.m128_f32[0] = v19->rot.data[0][0];
        v51.m128_f32[1] = v19->rot.data[0][1];
        v51.m128_f32[2] = v19->rot.data[0][2];
        sub_47F950(v45, v50.m128_f32);
        v50 = _mm_add_ps(v50, v51);
        sub_47DCD0(v45, &v50);
      }
      if ( !sub_45A500(SaveLoad_CurrentSavegame) )
      {
        v20 = (__m128 *)sub_47F950(v45, v50.m128_f32);
        sub_43F3E0((float *)&v44.member.super.modlist, v20);
        *(float *)&v44.vtbl = *(float *)&v44.member.super.modlist.data - v44.member.rot.y;
        *(float *)&v44.member.super.refID = *(float *)&v44.member.super.modlist.next - v44.member.rot.z;
        *(float *)&v44.member.super.flags = *(float *)&v44.member.childCell.GetChildCell - v44.member.pos[0];
        v44.member.super.modlist.data = (Data *)v44.vtbl;
        v44.member.super.modlist.next = (TESForm::ModReferenceList *)v44.member.super.refID;
        v44.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))v44.member.super.flags;
        *(float *)(a1 + 0x584) = sub_404C90((float *)&v44.member.super.modlist);
      }
      flags = v44.member.baseForm->member.flags;
      goto LABEL_34;
    }
    if ( a6 == 2 )
    {
      *(_DWORD *)(a1 + 0x578) = a5;
      *(float *)(a1 + 0x584) = a7;
      *(_DWORD *)(a1 + 0x57C) = 2;
    }
  }
}
