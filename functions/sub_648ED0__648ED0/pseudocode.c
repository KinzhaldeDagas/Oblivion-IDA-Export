void __userpurge sub_648ED0(ObjectType *a1@<ecx>, int ebp0@<ebp>, double st5_0@<st2>, TESObjectREFR *a4)
{
  TargetData *v5; // edi
  ObjectType v6; // eax
  int form; // ecx
  int v8; // eax
  UInt32 objectCode; // ebx
  ObjectType v10; // eax
  TESObjectREFR *v11; // ecx
  UInt32 v12; // edi
  BSExtraDataVtbl *ReferencePointer; // eax
  int v14; // ecx
  int v15; // eax
  TESObjectCELL *ParentCell; // ebp
  int *v17; // eax
  int v18; // ecx
  TargetData *v19; // ebx
  int TargetType; // eax
  float *v21; // eax
  void (__thiscall *v22)(ObjectType *, TESObjectREFR *); // eax
  int v23; // ecx
  Atmosphere *v24; // edi
  int *v25; // edi
  TESObjectREFR **v26; // eax
  bool v27; // zf
  TESObjectREFR *v28; // eax
  TESObjectREFR **v29; // eax
  BSExtraDataVtbl *Owner; // eax
  void *v31; // eax
  ObjectType v32; // ebx
  int v33; // eax
  float a3; // [esp+4h] [ebp-2Ch]
  float a5; // [esp+Ch] [ebp-24h]
  TESObjectREFR *v37; // [esp+14h] [ebp-1Ch]
  int a2[2]; // [esp+28h] [ebp-8h] BYREF
  int retaddr; // [esp+30h] [ebp+0h]

  v5 = *(TargetData **)(a1[2].objectCode + 0x28);
  if ( v5 )
  {
    if ( !TargetData::GetTargetType(v5) )
    {
      if ( sub_569E60(v5).form )
      {
        v6.form = sub_569E60(v5).form;
        if ( v6.form->vtbl->IsDead((TESObjectREFR *)v6.objectCode, 1) )
        {
          sub_566870((TargetData **)a1[2].form, (TESForm *)a1[0xB].form, 1);
        }
        else
        {
          form = (int)a1[2].form;
          v8 = *(char *)(form + 0x20);
          if ( v8 > 0 && (v8 <= 2 || v8 == 7) && sub_567CA0((TargetData **)form) )
          {
            sub_568BB0((int)a1[2].form, a4);
          }
          else
          {
            objectCode = a1->objectCode;
            v10.form = sub_569E60(v5).form;
            (*(void (__thiscall **)(ObjectType *, ObjectType))(objectCode + 0xD0))(a1, v10);
          }
          v11 = a1[0xB].form;
          if ( v11 )
          {
            if ( (v11->member.super.flags & 0x20) != 0 && !v11->vtbl->IsActor(v11) && a1[0xB].objectCode != 0xFFFFFFBC )
            {
              v12 = a1->objectCode;
              ReferencePointer = ExtraDataList_GetReferencePointer((ExtraDataList *)(a1[0xB].objectCode + 0x44));
              (*(void (__thiscall **)(ObjectType *, BSExtraDataVtbl *))(v12 + 0xD0))(a1, ReferencePointer);
            }
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(ObjectType *, _DWORD))(a1->objectCode + 0xD0))(a1, 0);
      }
      return;
    }
    v14 = (int)a1[2].form;
    if ( (*(_DWORD *)(v14 + 0x1C) & 4) != 0 )
    {
      if ( !a1[0x10].objectCode && !a1[0xF].objectCode )
      {
        v15 = *(char *)(v14 + 0x20);
        if ( v15 > 0 && (v15 <= 2 || v15 == 7) && sub_567CA0((TargetData **)v14) )
        {
          sub_568BB0((int)a1[2].form, a4);
        }
        else
        {
          ParentCell = TESObjectREFR_GetParentCell(a4);
          v17 = (int *)((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl->GetPos)(a4, ebp0);
          a2[0] = *v17;
          v18 = (int)a1[2].form;
          a2[1] = v17[1];
          retaddr = v17[2];
          v19 = *(TargetData **)(v18 + 0x28);
          TargetType = TargetData::GetTargetType(v19);
          if ( TargetType == 1 )
          {
            a1[0x19].form = sub_569E70(v19).form;
            a1[0x1B].objectCode = 0;
          }
          else if ( TargetType == 2 )
          {
            a1[0x19].objectCode = 0;
            a1[0x1B].form = sub_569E80(v19).form;
          }
          __asm { fld     dword ptr ds:0B368E8h }
          __asm { fstp    [esp+24h+a5]; a5 }
          v21 = a4->vtbl->GetPos(a4);
          __asm { fld     dword ptr ds:0B368E8h }
          __asm { fstp    [esp+2Ch+a3]; a3 }
          sub_446B90(
            ParentCell,
            (float *)a2,
            a3,
            v21,
            a5,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646600,
            (int)a4);
          v22 = *(void (__thiscall **)(ObjectType *, TESObjectREFR *))(a1->objectCode + 0x568);
          a1[0x1B].objectCode = 0;
          a1[0x19].objectCode = 0;
          v22(a1, a4);
          v23 = (int)a1[2].form;
          v24 = *(Atmosphere **)(v23 + 0x28);
          if ( v24 )
          {
            if ( TargetData::GetTargetType(*(TargetData **)(v23 + 0x28)) )
              a1[0xE].objectCode = (UInt32)sub_452A60(v24);
          }
        }
      }
      v25 = (int *)&a1[0xF];
      if ( a1[0x10].objectCode || *v25 )
      {
        v26 = (TESObjectREFR **)*v25;
        a1[0x11].objectCode = *v25;
        v27 = v26[7] == (TESObjectREFR *)2;
        v28 = *v26;
        if ( v27 )
        {
          v27 = !v28->vtbl->IsActor(v28);
          v29 = (TESObjectREFR **)a1[0x11].form;
          if ( v27 )
          {
            Owner = TESObjectREFR_GetOwner(*v29);
            v31 = OblivionDynamicCast(
                    Owner,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0);
            if ( v31 )
            {
              v32.form = a1->form;
              sub_675220(v31);
              (*(void (__thiscall **)(ObjectType *, int))(v32.objectCode + 0xD0))(a1, v33);
            }
            goto LABEL_42;
          }
          v37 = *v29;
        }
        else
        {
          v37 = v28;
        }
        (*(void (__thiscall **)(ObjectType *, TESObjectREFR *))(a1->objectCode + 0xD0))(a1, v37);
LABEL_42:
        BSSimpleList_Remove((ObjectType *)&a1[0xF].objectCode, (int)a1[0x11].form);
      }
    }
  }
}
