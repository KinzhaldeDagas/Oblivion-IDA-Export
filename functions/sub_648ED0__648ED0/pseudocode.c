void __userpurge sub_648ED0(ObjectType *a1@<ecx>, int ebp0@<ebp>, double st5_0@<st2>, TESObjectREFR *a4)
{
  TargetData *v5; // edi
  ObjectType v6; // eax
  ObjectType v7; // ecx
  int v8; // eax
  UInt32 objectCode; // ebx
  ObjectType v10; // eax
  TESObjectREFR *form; // ecx
  UInt32 v12; // edi
  TESObjectREFR *ReferencePointer; // eax
  ObjectType v14; // ecx
  int v15; // eax
  TESObjectCELL *DwordAtOffset40; // ebp
  int *v17; // eax
  ObjectType v18; // ecx
  TargetData *v19; // ebx
  int TargetType; // eax
  float *v21; // eax
  void (__thiscall *v22)(ObjectType *, TESObjectREFR *); // eax
  ObjectType v23; // ecx
  Atmosphere *v24; // edi
  ObjectType *v25; // edi
  TESObjectREFR **v26; // eax
  bool v27; // zf
  TESObjectREFR *v28; // eax
  TESObjectREFR **v29; // eax
  TESForm *Owner; // eax
  void *v31; // eax
  UInt32 v32; // ebx
  ActorVtbl *v33; // eax
  float a3; // [esp+4h] [ebp-2Ch]
  float a5; // [esp+Ch] [ebp-24h]
  TESObjectREFR *v37; // [esp+14h] [ebp-1Ch]
  int a2[2]; // [esp+28h] [ebp-8h] BYREF
  int retaddr; // [esp+30h] [ebp+0h]

  v5 = *(TargetData **)(a1[2].objectCode + 0x28); /*0x648eda*/
  if ( v5 ) /*0x648edf*/
  {
    if ( !TargetData::GetTargetType(v5) ) /*0x648ee8*/
    {
      if ( sub_569E60(v5).form ) /*0x648ef7*/
      {
        v6.form = sub_569E60(v5).form; /*0x648f18*/
        if ( v6.form->vtbl->IsDead((TESObjectREFR *)v6.objectCode, 1) ) /*0x648f29*/
        {
          sub_566870((TargetData **)a1[2].form, (TESForm *)a1[0xB].form, 1); /*0x648f38*/
        }
        else
        {
          v7.form = a1[2].form; /*0x648f46*/
          v8 = *(char *)(v7.objectCode + 0x20); /*0x648f49*/
          if ( v8 > 0 && (v8 <= 2 || v8 == 7) && sub_567CA0((TargetData **)v7.form) ) /*0x648f5b*/
          {
            sub_568BB0((int)a1[2].form, a4); /*0x648f6c*/
          }
          else
          {
            objectCode = a1->objectCode; /*0x648f73*/
            v10.form = sub_569E60(v5).form; /*0x648f77*/
            (*(void (__thiscall **)(ObjectType *, ObjectType))(objectCode + 0xD0))(a1, v10); /*0x648f85*/
          }
          form = a1[0xB].form; /*0x648f87*/
          if ( form ) /*0x648f8c*/
          {
            if ( (form->member.super.flags & 0x20) != 0 /*0x648fb9*/
              && !form->vtbl->IsActor(form)
              && a1[0xB].objectCode != 0xFFFFFFBC )
            {
              v12 = a1->objectCode; /*0x648fbf*/
              ReferencePointer = ExtraDataList_GetReferencePointer((ExtraDataList *)(a1[0xB].objectCode + 0x44)); /*0x648fc1*/
              (*(void (__thiscall **)(ObjectType *, TESObjectREFR *))(v12 + 0xD0))(a1, ReferencePointer); /*0x648fcf*/
            }
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(ObjectType *, _DWORD))(a1->objectCode + 0xD0))(a1, 0); /*0x648f0b*/
      }
      return; /*0x648f13*/
    }
    v14.form = a1[2].form; /*0x648fda*/
    if ( (*(_DWORD *)(v14.objectCode + 0x1C) & 4) != 0 ) /*0x648fe6*/
    {
      if ( !a1[0x10].objectCode && !a1[0xF].objectCode ) /*0x648ff6*/
      {
        v15 = *(char *)(v14.objectCode + 0x20); /*0x649000*/
        if ( v15 > 0 && (v15 <= 2 || v15 == 7) && sub_567CA0((TargetData **)v14.form) ) /*0x649012*/
        {
          sub_568BB0((int)a1[2].form, a4); /*0x649023*/
        }
        else
        {
          DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a4); /*0x64903b*/
          v17 = (int *)((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl->GetPos)(a4, ebp0); /*0x649045*/
          a2[0] = *v17; /*0x649049*/
          v18.form = a1[2].form; /*0x649050*/
          a2[1] = v17[1]; /*0x649053*/
          retaddr = v17[2]; /*0x64905a*/
          v19 = *(TargetData **)(v18.objectCode + 0x28); /*0x64905e*/
          TargetType = TargetData::GetTargetType(v19); /*0x649063*/
          if ( TargetType == 1 ) /*0x64906b*/
          {
            a1[0x19].form = sub_569E70(v19).form; /*0x649074*/
            a1[0x1B].objectCode = 0; /*0x649077*/
          }
          else if ( TargetType == 2 ) /*0x649083*/
          {
            a1[0x19].objectCode = 0; /*0x649087*/
            a1[0x1B].form = sub_569E80(v19).form; /*0x649093*/
          }
          __asm { fld     dword ptr ds:0B368E8h } /*0x649098*/
          __asm { fstp    [esp+24h+a5]; a5 }
          v21 = a4->vtbl->GetPos(a4); /*0x6490b0*/
          __asm { fld     dword ptr ds:0B368E8h } /*0x6490b2*/
          __asm { fstp    [esp+2Ch+a3]; a3 }
          sub_446B90( /*0x6490c9*/
            DwordAtOffset40,
            (float *)a2,
            a3,
            v21,
            a5,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646600,
            (int)a4);
          v22 = *(void (__thiscall **)(ObjectType *, TESObjectREFR *))(a1->objectCode + 0x568); /*0x6490d0*/
          a1[0x1B].objectCode = 0; /*0x6490db*/
          a1[0x19].objectCode = 0; /*0x6490de*/
          v22(a1, a4); /*0x6490e1*/
          v23.form = a1[2].form; /*0x6490e3*/
          v24 = *(Atmosphere **)(v23.objectCode + 0x28); /*0x6490e6*/
          if ( v24 ) /*0x6490ec*/
          {
            if ( TargetData::GetTargetType(*(TargetData **)(v23.objectCode + 0x28)) ) /*0x6490f0*/
              a1[0xE].objectCode = (UInt32)Shared_GetPointerAtOffset08(v24); /*0x649100*/
          }
        }
      }
      v25 = a1 + 0xF; /*0x649107*/
      if ( a1[0x10].objectCode || v25->objectCode ) /*0x64910c*/
      {
        v26 = (TESObjectREFR **)v25->objectCode; /*0x649111*/
        a1[0x11].form = v25->form; /*0x649113*/
        v27 = v26[7] == (TESObjectREFR *)2; /*0x649116*/
        v28 = *v26; /*0x64911a*/
        if ( v27 ) /*0x64911c*/
        {
          v27 = !v28->vtbl->IsActor(v28); /*0x64912a*/
          v29 = (TESObjectREFR **)a1[0x11].form; /*0x64912c*/
          if ( v27 ) /*0x649131*/
          {
            Owner = TESObjectREFR_GetOwner(*v29); /*0x649144*/
            v31 = OblivionDynamicCast( /*0x64914a*/
                    Owner,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0);
            if ( v31 ) /*0x649154*/
            {
              v32 = a1->objectCode; /*0x649156*/
              v33 = sub_675220((int)&qword_B3BB2C[0x75], (int)v31); /*0x64915e*/
              (*(void (__thiscall **)(ObjectType *, ActorVtbl *))(v32 + 0xD0))(a1, v33); /*0x64916a*/
            }
            goto LABEL_42; /*0x64916a*/
          }
          v37 = *v29; /*0x649133*/
        }
        else
        {
          v37 = v28; /*0x64916c*/
        }
        (*(void (__thiscall **)(ObjectType *, TESObjectREFR *))(a1->objectCode + 0xD0))(a1, v37); /*0x649177*/
LABEL_42:
        BSSimpleList_Remove((int *)&a1[0xF], (int)a1[0x11].form); /*0x649179*/
      }
    }
  }
}
