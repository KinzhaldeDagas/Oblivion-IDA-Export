void __userpurge sub_62E3F0(
        ObjectType *ecx0@<ecx>,
        int ebp0@<ebp>,
        double st7_0@<st0>,
        double a4@<st1>,
        TESObjectREFR *a5,
        float *a6)
{
  int (__usercall *v7)@<eax>(double@<st0>, double@<st1>); // edx
  int v8; // eax
  int v9; // ebx
  TESObjectREFR *v10; // edi
  _DWORD *v11; // ecx
  int v12; // eax
  TargetData *v13; // ebp
  ObjectType v14; // eax
  UInt32 v15; // edi
  ObjectType v16; // eax
  int v17; // eax
  TargetData *v18; // ebp
  int TargetType; // eax
  ObjectType v20; // eax
  ObjectType v21; // eax
  int form; // eax
  ObjectType v23; // eax
  void *v24; // eax
  float *SafeFloatPointer; // ebp
  float *v26; // eax
  Atmosphere *v27; // ebx
  ObjectType *v28; // edi
  int *objectCode; // eax
  bool v30; // zf
  int v31; // eax
  TESObjectREFR **v32; // eax
  TESForm *Owner; // eax
  UInt32 v34; // ebx
  ActorVtbl *v35; // eax
  ObjectType v36; // ecx
  ObjectType *v37; // eax
  Actor *v38; // esi
  TESObjectCELL *a1; // [esp+28h] [ebp-Ch]
  int a2[2]; // [esp+2Ch] [ebp-8h] BYREF

  v7 = *(int (__usercall **)@<eax>(double@<st0>, double@<st1>))(ecx0->objectCode + 0x184); /*0x62e3f9*/
  ecx0[0xB].objectCode = 0; /*0x62e3ff*/
  v8 = v7(st7_0, a4); /*0x62e406*/
  v9 = v8; /*0x62e408*/
  if ( v8 && *(_DWORD *)(v8 + 0x28) ) /*0x62e412*/
  {
    v10 = a5; /*0x62e421*/
    if ( *(_BYTE *)(v8 + 0x20) != 2 ) /*0x62e425*/
    {
      v11 = *(_DWORD **)(v8 + 0x24); /*0x62e427*/
      if ( v11 ) /*0x62e42c*/
        a5 = (TESObjectREFR *)sub_5697E0(v11); /*0x62e433*/
    }
    v12 = *(char *)(v9 + 0x20); /*0x62e43d*/
    if ( v12 > 0 && (v12 <= 2 || v12 == 7) && sub_567CA0((TargetData **)v9) ) /*0x62e452*/
    {
      sub_568BB0(v9, v10); /*0x62e45e*/
    }
    else
    {
      v13 = *(TargetData **)(v9 + 0x28); /*0x62e468*/
      if ( v13 ) /*0x62e46d*/
      {
        if ( TargetData::GetTargetType(*(TargetData **)(v9 + 0x28)) ) /*0x62e475*/
        {
          if ( !ecx0[0x10].objectCode && !ecx0[0xF].objectCode ) /*0x62e4fb*/
          {
            Shared_GetDwordAtOffset40(v10); /*0x62e507*/
            v17 = (int)v10->vtbl->GetPos(v10); /*0x62e51a*/
            v18 = *(TargetData **)(v9 + 0x28); /*0x62e51e*/
            a1 = *(TESObjectCELL **)v17; /*0x62e521*/
            a2[0] = *(_DWORD *)(v17 + 4); /*0x62e528*/
            a2[1] = *(_DWORD *)(v17 + 8); /*0x62e531*/
            TargetType = TargetData::GetTargetType(v18); /*0x62e535*/
            if ( TargetType == 1 ) /*0x62e53d*/
            {
              if ( sub_569E70(v18).form ) /*0x62e541*/
              {
                v20.form = sub_569E70(v18).form; /*0x62e54c*/
                if ( v20.form->vtbl->super.Unk_29((TESForm *)v20.objectCode) ) /*0x62e55b*/
                  ecx0[0x19].form = sub_569E70(v18).form; /*0x62e568*/
              }
              ecx0[0x1B].objectCode = 0; /*0x62e56b*/
            }
            else if ( TargetType == 2 ) /*0x62e577*/
            {
              ecx0[0x19].objectCode = 0; /*0x62e57b*/
              v21.form = sub_569E80(v18).form; /*0x62e582*/
              ecx0[0x1B].form = v21.form; /*0x62e587*/
              ecx0[0x38].form = v21.form; /*0x62e58a*/
            }
            if ( ecx0[0x19].objectCode ) /*0x62e590*/
            {
LABEL_34:
              SafeFloatPointer = GameSetting_GetSafeFloatPointer(&flt_B36778[0x5C]); /*0x62e62e*/
              GameSetting_GetSafeFloatPointer(&flt_B36778[0x5C]); /*0x62e63f*/
              v26 = (float *)((int (__thiscall *)(TESObjectREFR *, _DWORD))v10->vtbl->GetPos)(v10, *SafeFloatPointer); /*0x62e65f*/
              sub_446B90( /*0x62e67c*/
                a1,
                (float *)a2,
                *a6,
                v26,
                COERCE_FLOAT(sub_646600),
                (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))v10,
                ebp0);
              ecx0[0x1B].objectCode = 0; /*0x62e683*/
              ecx0[0x19].objectCode = 0; /*0x62e686*/
              (*(void (__thiscall **)(ObjectType *, TESObjectREFR *))(ecx0->objectCode + 0x568))(ecx0, v10); /*0x62e694*/
            }
            else
            {
              form = (int)ecx0[0x1B].form; /*0x62e59a*/
              switch ( form ) /*0x62e5ad*/
              {
                case 0: /*0x62e5ad*/
                  v23.form = sub_569E70(*(TargetData **)(v9 + 0x28)).form; /*0x62e5df*/
                  v24 = OblivionDynamicCast( /*0x62e5e5*/
                          v23.form,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &MagicItem `RTTI Type Descriptor',
                          0);
                  if ( v24 ) /*0x62e5ef*/
                    ecx0[0x52].objectCode = (UInt32)v24; /*0x62e5f5*/
                  break; /*0x62e5fb*/
                case 0xD: /*0x62e5ad*/
                case 0x15: /*0x62e5ad*/
                case 0x16: /*0x62e5ad*/
                case 0x18: /*0x62e5ad*/
                case 0x19: /*0x62e5ad*/
                  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v10->vtbl[1].GetSleepState)(v10, 1) ) /*0x62e60c*/
                    goto LABEL_34; /*0x62e610*/
                  sub_647BD0(ecx0, v10, a5, (int)ecx0[0x1B].form, ebp0); /*0x62e61e*/
                  ecx0[0x38].form = ecx0[0x1B].form; /*0x62e626*/
                  break; /*0x62e62c*/
                case 0x1A: /*0x62e5ad*/
                case 0x1B: /*0x62e5ad*/
                case 0x1C: /*0x62e5ad*/
                case 0x1D: /*0x62e5ad*/
                case 0x1E: /*0x62e5ad*/
                case 0x1F: /*0x62e5ad*/
                case 0x20: /*0x62e5ad*/
                case 0x21: /*0x62e5ad*/
                case 0x22: /*0x62e5ad*/
                case 0x23: /*0x62e5ad*/
                  sub_5E91E0((Actor *)v10, form, 0xFFFFFFFF, 1, ebp0); /*0x62e5bb*/
                  ecx0[0x38].form = ecx0[0x1B].form; /*0x62e5c3*/
                  break; /*0x62e5c9*/
                default:
                  goto LABEL_34;
              }
            }
            v27 = *(Atmosphere **)(v9 + 0x28); /*0x62e696*/
            if ( v27 ) /*0x62e69b*/
              ecx0[0xE].objectCode = (UInt32)Shared_GetPointerAtOffset08(v27); /*0x62e6a4*/
          }
          v28 = ecx0 + 0xF; /*0x62e6ab*/
          if ( ecx0[0x10].objectCode || v28->objectCode ) /*0x62e6b0*/
          {
            objectCode = (int *)v28->objectCode; /*0x62e6b5*/
            ecx0[0x11].form = v28->form; /*0x62e6b7*/
            v30 = objectCode[7] == 2; /*0x62e6ba*/
            v31 = *objectCode; /*0x62e6be*/
            if ( v30 ) /*0x62e6c0*/
            {
              v30 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v31 + 0x190))(v31) == 0; /*0x62e6ce*/
              v32 = (TESObjectREFR **)ecx0[0x11].form; /*0x62e6d0*/
              if ( v30 ) /*0x62e6d5*/
              {
                Owner = TESObjectREFR_GetOwner(*v32); /*0x62e6da*/
                if ( Owner ) /*0x62e6e1*/
                {
                  if ( Owner->member.type == kFormType_NPC ) /*0x62e6e7*/
                  {
                    v34 = ecx0->objectCode; /*0x62e6e9*/
                    v35 = sub_675220((int)&qword_B3BB2C[0x75], (int)Owner); /*0x62e6f1*/
                    (*(void (__thiscall **)(ObjectType *, ActorVtbl *))(v34 + 0xD0))(ecx0, v35); /*0x62e6fd*/
                  }
                }
              }
              else
              {
                (*(void (__thiscall **)(ObjectType *, TESObjectREFR *))(ecx0->objectCode + 0xD0))(ecx0, *v32); /*0x62e6d8*/
              }
            }
            else
            {
              (*(void (__thiscall **)(ObjectType *, int))(ecx0->objectCode + 0xD0))(ecx0, v31); /*0x62e70a*/
            }
            BSSimpleList_Remove((int *)&ecx0[0xF], (int)ecx0[0x11].form); /*0x62e712*/
          }
        }
        else
        {
          if ( !sub_569E60(v13).form ) /*0x62e487*/
            return; /*0x62e487*/
          v14.form = sub_569E60(v13).form; /*0x62e48f*/
          if ( ((int (__thiscall *)(_DWORD, _DWORD, _DWORD))v14.form->vtbl->IsDead)((ObjectType)v14.objectCode, 1, ebp0) /*0x62e4a8*/
            && !TESPackage_IsRuntimePackage((TESPackage *)v9) )
          {
            sub_566870((TargetData **)v9, (TESForm *)ecx0[0xB].form, 1); /*0x62e4b9*/
            ((void (__thiscall *)(TESObjectREFR *, ObjectType))v10->vtbl[1].Set3D)(v10, ecx0[0xB]); /*0x62e4cc*/
            return; /*0x62e4d5*/
          }
          v15 = ecx0->objectCode; /*0x62e4d8*/
          v16.form = sub_569E60(v13).form; /*0x62e4dc*/
          (*(void (__thiscall **)(ObjectType *, ObjectType))(v15 + 0xD0))(ecx0, v16); /*0x62e4ea*/
        }
      }
    }
    v36.form = ecx0[0xB].form; /*0x62e717*/
    if ( v36.objectCode ) /*0x62e71c*/
    {
      v37 = (ObjectType *)((int (__thiscall *)(ObjectType))v36.form->vtbl->GetPos)(v36); /*0x62e726*/
      ecx0[0x35].form = v37->form; /*0x62e72a*/
      ecx0[0x36].form = v37[1].form; /*0x62e733*/
      ecx0[0x37].form = v37[2].form; /*0x62e73c*/
    }
    v38 = (Actor *)ecx0[0xB].form; /*0x62e742*/
    if ( v38 ) /*0x62e747*/
      Actor::SetCompressedFlag(v38, 1); /*0x62e74d*/
  }
}
