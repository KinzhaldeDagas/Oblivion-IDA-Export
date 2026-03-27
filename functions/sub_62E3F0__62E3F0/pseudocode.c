void __userpurge sub_62E3F0(
        ObjectType *ecx0@<ecx>,
        int ebp0@<ebp>,
        double st7_0@<st0>,
        double a4@<st1>,
        TESObjectREFR *a5,
        float *a6)
{
  int (__usercall *v8)@<eax>(double@<st0>, double@<st1>); // edx
  int v9; // eax
  TESPackage *v10; // ebx
  TESObjectREFR *v11; // edi
  _DWORD *v12; // ecx
  int type; // eax
  TargetData *target; // ebp
  ObjectType v15; // eax
  ObjectType v16; // edi
  ObjectType v17; // eax
  int v18; // eax
  TargetData *v19; // ebp
  int TargetType; // eax
  ObjectType v21; // eax
  ObjectType v22; // eax
  int form; // eax
  ObjectType v24; // eax
  void *v25; // eax
  int *SafeFloatPointer; // ebp
  float *v27; // eax
  Atmosphere *v28; // ebx
  int *v29; // edi
  int *v30; // eax
  bool v31; // zf
  int v32; // eax
  TESObjectREFR **v33; // eax
  BSExtraDataVtbl *Owner; // eax
  ObjectType v35; // ebx
  int v36; // eax
  int v37; // ecx
  int *v38; // eax
  Actor *v39; // esi
  TESObjectCELL *a1; // [esp+28h] [ebp-Ch]
  int a2[2]; // [esp+2Ch] [ebp-8h] BYREF

  v8 = *(int (__usercall **)@<eax>(double@<st0>, double@<st1>))(ecx0->objectCode + 0x184);
  ecx0[0xB].objectCode = 0;
  v9 = v8(st7_0, a4);
  v10 = (TESPackage *)v9;
  if ( v9 && *(_DWORD *)(v9 + 0x28) )
  {
    v11 = a5;
    if ( *(_BYTE *)(v9 + 0x20) != 2 )
    {
      v12 = *(_DWORD **)(v9 + 0x24);
      if ( v12 )
        a5 = (TESObjectREFR *)sub_5697E0(v12);
    }
    type = (char)v10->members.type;
    if ( type > 0 && (type <= 2 || type == 7) && sub_567CA0((TargetData **)v10) )
    {
      sub_568BB0((int)v10, v11);
    }
    else
    {
      target = v10->members.target;
      if ( target )
      {
        if ( TargetData::GetTargetType(v10->members.target) )
        {
          if ( !ecx0[0x10].objectCode && !ecx0[0xF].objectCode )
          {
            TESObjectREFR_GetParentCell(v11);
            v18 = (int)v11->vtbl->GetPos(v11);
            v19 = v10->members.target;
            a1 = *(TESObjectCELL **)v18;
            a2[0] = *(_DWORD *)(v18 + 4);
            a2[1] = *(_DWORD *)(v18 + 8);
            TargetType = TargetData::GetTargetType(v19);
            if ( TargetType == 1 )
            {
              if ( sub_569E70(v19).form )
              {
                v21.form = sub_569E70(v19).form;
                if ( v21.form->vtbl->super.Unk_29((TESForm *)v21.objectCode) )
                  ecx0[0x19].form = sub_569E70(v19).form;
              }
              ecx0[0x1B].objectCode = 0;
            }
            else if ( TargetType == 2 )
            {
              ecx0[0x19].objectCode = 0;
              v22.form = sub_569E80(v19).form;
              ecx0[0x1B].form = v22.form;
              ecx0[0x38].form = v22.form;
            }
            if ( ecx0[0x19].objectCode )
            {
LABEL_34:
              SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&fAIAcquireObjectDistance);
              GameSetting_GetSafeFloatPointer((int *)&fAIAcquireObjectDistance);
              v27 = (float *)((int (__thiscall *)(TESObjectREFR *, _DWORD))v11->vtbl->GetPos)(
                               v11,
                               *(float *)SafeFloatPointer);
              sub_446B90(
                a1,
                (float *)a2,
                *a6,
                v27,
                COERCE_FLOAT(sub_646600),
                (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))v11,
                ebp0);
              ecx0[0x1B].objectCode = 0;
              ecx0[0x19].objectCode = 0;
              (*(void (__thiscall **)(ObjectType *, TESObjectREFR *))(ecx0->objectCode + 0x568))(ecx0, v11);
            }
            else
            {
              form = (int)ecx0[0x1B].form;
              switch ( form )
              {
                case 0:
                  v24.form = sub_569E70(v10->members.target).form;
                  v25 = OblivionDynamicCast(
                          v24.form,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &MagicItem `RTTI Type Descriptor',
                          0);
                  if ( v25 )
                    ecx0[0x52].objectCode = (UInt32)v25;
                  break;
                case 0xD:
                case 0x15:
                case 0x16:
                case 0x18:
                case 0x19:
                  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v11->vtbl[1].GetSleepState)(v11, 1) )
                    goto LABEL_34;
                  sub_647BD0(ecx0, v11, a5, (int)ecx0[0x1B].form, ebp0);
                  ecx0[0x38].form = ecx0[0x1B].form;
                  break;
                case 0x1A:
                case 0x1B:
                case 0x1C:
                case 0x1D:
                case 0x1E:
                case 0x1F:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                  sub_5E91E0((Actor *)v11, form, 0xFFFFFFFF, 1);
                  ecx0[0x38].form = ecx0[0x1B].form;
                  break;
                default:
                  goto LABEL_34;
              }
            }
            v28 = (Atmosphere *)v10->members.target;
            if ( v28 )
              ecx0[0xE].objectCode = (UInt32)sub_452A60(v28);
          }
          v29 = (int *)&ecx0[0xF];
          if ( ecx0[0x10].objectCode || *v29 )
          {
            v30 = (int *)*v29;
            ecx0[0x11].objectCode = *v29;
            v31 = v30[7] == 2;
            v32 = *v30;
            if ( v31 )
            {
              v31 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v32 + 0x190))(v32) == 0;
              v33 = (TESObjectREFR **)ecx0[0x11].form;
              if ( v31 )
              {
                Owner = TESObjectREFR_GetOwner(*v33);
                if ( Owner )
                {
                  if ( LOBYTE(Owner->CompareTo) == 0x23 )
                  {
                    v35.form = ecx0->form;
                    sub_675220(Owner);
                    (*(void (__thiscall **)(ObjectType *, int))(v35.objectCode + 0xD0))(ecx0, v36);
                  }
                }
              }
              else
              {
                (*(void (__thiscall **)(ObjectType *, TESObjectREFR *))(ecx0->objectCode + 0xD0))(ecx0, *v33);
              }
            }
            else
            {
              (*(void (__thiscall **)(ObjectType *, int))(ecx0->objectCode + 0xD0))(ecx0, v32);
            }
            BSSimpleList_Remove((ObjectType *)&ecx0[0xF].objectCode, (int)ecx0[0x11].form);
          }
        }
        else
        {
          if ( !sub_569E60(target).form )
            return;
          v15.form = sub_569E60(target).form;
          if ( ((int (__thiscall *)(_DWORD, _DWORD, _DWORD))v15.form->vtbl->IsDead)((ObjectType)v15.objectCode, 1, ebp0)
            && !sub_5660A0(v10) )
          {
            sub_566870((TargetData **)v10, (TESForm *)ecx0[0xB].form, 1);
            ((void (__thiscall *)(TESObjectREFR *, int))v11->vtbl[1].Set3D)(v11, (ObjectType)ecx0[0xB].form);
            return;
          }
          v16.form = ecx0->form;
          v17.form = sub_569E60(target).form;
          (*(void (__thiscall **)(ObjectType *, ObjectType))(v16.objectCode + 0xD0))(ecx0, v17);
        }
      }
    }
    v37 = (int)ecx0[0xB].form;
    if ( v37 )
    {
      v38 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 0x174))(v37);
      ecx0[0x35].objectCode = *v38;
      ecx0[0x36].objectCode = v38[1];
      ecx0[0x37].objectCode = v38[2];
    }
    v39 = (Actor *)ecx0[0xB].form;
    if ( v39 )
      Actor::SetCompressedFlag(v39, 1);
  }
}
