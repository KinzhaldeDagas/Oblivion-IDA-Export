void __usercall sub_678750(
        int a1@<ecx>,
        int a2@<ebx>,
        TESObjectREFR *a3@<ebp>,
        MobileObject *a4@<edi>,
        int a5@<esi>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>)
{
  MobileObject *vtbl; // esi
  int v9; // eax
  TESObjectREFR *v10; // ebp
  _DWORD *v11; // ebx
  TESObjectREFR *v12; // eax
  TESObjectREFR *v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  TESFurniture *v17; // eax
  unsigned int v18; // eax
  char v19; // al
  int *v20; // eax
  TESObjectREFR *v21; // edi
  int v22; // eax
  TESFurniture *v23; // eax
  unsigned int v24; // eax
  char v25; // al
  TESObjectREFR *v26; // edi
  int v27; // eax
  TESFurniture *v28; // eax
  unsigned int v29; // eax
  NiTransform *v30; // eax
  LowProcess *process; // ecx
  void (__thiscall *Unk_73)(MobileObject *); // edx
  bhkCharacterProxy *CharProxy; // eax
  void (__thiscall *SetSleepState)(BaseProcess *__hidden, Actor *, UInt8, TESObjectREFR *, UInt8); // edx
  UInt32 v35; // eax
  TESObjectREFR *v40; // [esp+3Ah] [ebp-64h]
  float v41; // [esp+3Ah] [ebp-64h]
  int *p_unk80; // [esp+3Eh] [ebp-60h]
  float v43; // [esp+3Eh] [ebp-60h]
  Actor *v44; // [esp+46h] [ebp-58h]
  int v45; // [esp+4Ah] [ebp-54h]
  TESObjectREFR *v46; // [esp+4Eh] [ebp-50h]
  TESPackage *v47; // [esp+52h] [ebp-4Ch]
  unsigned int v48; // [esp+56h] [ebp-48h]
  float v49; // [esp+66h] [ebp-38h]
  int v50; // [esp+66h] [ebp-38h]
  float v51; // [esp+66h] [ebp-38h]
  NiPoint3 v52; // [esp+6Ah] [ebp-34h] BYREF
  float v53[3]; // [esp+76h] [ebp-28h] BYREF
  char v54; // [esp+82h] [ebp-1Ch] BYREF
  float v55[4]; // [esp+8Eh] [ebp-10h] BYREF

  v44 = sub_7616D0((ActorList *)(a1 + 0x68));
  p_unk80 = (int *)&TES->unk80;
  HIBYTE(v40) = 0;
  if ( v44 )
  {
    while ( v44->vtbl )
    {
      if ( !(*((unsigned __int8 (__thiscall **)(ActorVtbl *))v44->vtbl->super.super.super.super.InitializeComponent
             + 0x64))(v44->vtbl) )
        goto LABEL_76;
      vtbl = (MobileObject *)v44->vtbl;
      if ( !v44->vtbl || !sub_5E32D0(v44->vtbl) || vtbl->vtbl->super.GetSleepState((TESObjectREFR *)vtbl) )
        goto LABEL_76;
      if ( !vtbl->process->GetProcessLevel(vtbl->process) )
      {
        a8 = flt_B3BCF0;
        ((void (__thiscall *)(MobileObject *, float))vtbl->vtbl[1].super.GetAnimData)(vtbl, flt_B3BCF0);
        sub_4D8AF0((TESObjectCELL **)vtbl);
        v45 = v9;
        v10 = 0;
        BYTE2(v40) = 0;
        v11 = (_DWORD *)sub_5E3DC0(vtbl);
        sub_5E2E00((Actor *)vtbl);
        v13 = v12;
        v47 = sub_5E0380((Actor *)vtbl);
        v46 = 0;
        if ( v11 )
          v46 = (TESObjectREFR *)sub_5697E0(v11);
        v14 = ((int (__thiscall *)(LowProcess *))vtbl->process->GetUnk128)(vtbl->process);
        if ( v13 && sub_4D74B0(v13) && (sub_4D8AF0((TESObjectCELL **)v13), v15 == v45)
          || (v13 = v46) != 0 && sub_4D74B0(v46) && (sub_4D8AF0((TESObjectCELL **)v46), v16 == v45) )
        {
          v10 = v13;
          v17 = (TESFurniture *)v13->vtbl->GetBaseForm(v13);
          if ( sub_4AE5A0(v17) )
            BYTE2(v40) = 1;
          v18 = sub_4D73F0(v13);
          if ( v18 != 0xFFFFFFFF && sub_4DB9D0((float *)v13, v18, v14) )
          {
LABEL_62:
            if ( v10 )
            {
LABEL_63:
              if ( vtbl->vtbl->super.GetNiNode((TESObjectREFR *)vtbl) )
              {
                ((void (__thiscall *)(TESObjectREFR *, MobileObject *, int, TESObjectREFR *, int, TESObjectREFR *))v10->vtbl->GetBaseForm)(
                  v10,
                  a4,
                  a5,
                  a3,
                  a2,
                  v40);
                sub_65AC20(vtbl, 1);
                v49 = (double)*(unsigned __int16 *)(v14 + 0xC) / dbl_A2FC70;
                ((void (__thiscall *)(MobileObject *, _DWORD))vtbl->vtbl->Unk_7A)(vtbl, LODWORD(v49));
                v50 = *(unsigned __int8 *)(v14 + 0xE);
                v41 = vtbl->vtbl->super.GetScale((TESObjectREFR *)vtbl);
                sub_4AEB40((int)&v52, v50, v41);
                v51 = (double)*(unsigned __int16 *)(v14 + 0xC) / dbl_A2FC70;
                NiMatrix33_InitRotationTransform(v55, v51);
                v30 = sub_7101F0((NiTransform *)v55, (NiTransform *)&v54, &v52);
                v52.x = v30->rot.data[0][0];
                process = vtbl->process;
                v52.y = v30->rot.data[0][1];
                v52.z = v30->rot.data[0][2];
                process->editorPackProcedure = kProcedure_ACTIVATE;
                sub_4D7300(v10, v48, 1);
                Unk_73 = vtbl->vtbl->Unk_73;
                v53[0] = *(float *)v14 + v52.x;
                v53[1] = *(float *)(v14 + 4) + v52.y;
                v53[2] = *(float *)(v14 + 8) + v52.z;
                ((void (__thiscall *)(MobileObject *, float *))Unk_73)(vtbl, v53);
                CharProxy = MobileObject_GetCharProxy(vtbl);
                sub_452A10(CharProxy, (NiPoint3 *)v14);
                ((void (__thiscall *)(TESObjectREFR *, _DWORD))v10->vtbl->GetBaseForm)(
                  v10,
                  *(unsigned __int8 *)(v14 + 0xE));
                a8 = sub_4AEBE0((int)p_unk80);
                v43 = a8;
                sub_659B90((int *)vtbl, a8, v43);
                SetSleepState = vtbl->process->SetSleepState;
                p_unk80 = (int *)v48;
                v40 = v10;
                if ( BYTE2(v47) )
                {
                  ((void (__stdcall *)(MobileObject *, int))SetSleepState)(vtbl, 6);
                  vtbl->process->SetCurrentPackProcedure(vtbl->process, kProcedure_WANDER);
                  vtbl->process->Unk_20(vtbl->process, (UInt32)vtbl, 0);
                }
                else
                {
                  ((void (__stdcall *)(MobileObject *, int))SetSleepState)(vtbl, 1);
                }
                if ( ((unsigned __int8 (__thiscall *)(LowProcess *, MobileObject *))vtbl->process->Unk_E0)(
                       vtbl->process,
                       vtbl) )
                {
                  if ( BYTE2(v47) )
                  {
                    v35 = sub_5E12B0((Actor *)vtbl);
                    if ( v35 )
                      (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)v35 + 0x9C))(v35, 1, 0);
                    a2 = v48;
                    a3 = v10;
                    a5 = 9;
                  }
                  else
                  {
                    a2 = v48;
                    a3 = v10;
                    a5 = 4;
                  }
                }
                else
                {
                  a2 = 0x7F;
                  a3 = 0;
                  a5 = 0;
                }
                a4 = vtbl;
                ((void (__thiscall *)(LowProcess *))vtbl->process->SetSleepState)(vtbl->process);
              }
            }
          }
          goto LABEL_76;
        }
        if ( !v47 )
          goto LABEL_76;
        if ( v47->members.type == 4 )
        {
          a8 = sub_566DC0(v47, flt_A30634, a7, (Actor *)vtbl, 0, flt_A30634);
          if ( v19 )
          {
            if ( !sub_5E0F30(vtbl) )
              vtbl->process->SetCurrentPackProcedure(vtbl->process, kProcedure_WANDER);
            v20 = p_unk80;
            if ( p_unk80 )
            {
              while ( 1 )
              {
                if ( !v20[1] && !*v20 )
                  goto LABEL_62;
                if ( v10 )
                  goto LABEL_63;
                v21 = (TESObjectREFR *)*v20;
                sub_4D8AF0((TESObjectCELL **)*v20);
                if ( v22 != v45 )
                  goto LABEL_40;
                if ( TESObjectREFR_GetOwner(v21) && !TESOBjectREFR_IsOwnedBy(v21, (TESObjectREFR *)vtbl, 1) )
                  goto LABEL_40;
                v23 = (TESFurniture *)v21->vtbl->GetBaseForm(v21);
                if ( !sub_4AE5A0(v23) )
                  goto LABEL_40;
                v24 = sub_4D73F0(v21);
                if ( v24 != 0xFFFFFFFF && sub_4DB9D0((float *)v21, v24, v14) )
                {
                  v10 = v21;
                  BYTE2(v40) = 1;
LABEL_40:
                  p_unk80 = (int *)p_unk80[1];
                  goto LABEL_41;
                }
                BSSimpleList_Remove(p_unk80, (int)v21);
                p_unk80 = (int *)&TES->unk80;
LABEL_41:
                if ( !p_unk80 )
                  goto LABEL_62;
                v20 = p_unk80;
              }
            }
LABEL_76:
            v44 = *(Actor **)&v44->members.super.super.super.type;
            goto LABEL_77;
          }
        }
        if ( v47->members.type != 3 )
          goto LABEL_76;
        a8 = sub_566DC0(v47, flt_A30634, a7, (Actor *)vtbl, 0, flt_A30634);
        if ( !v25 )
          goto LABEL_76;
        if ( !sub_5E6FA0(vtbl) )
        {
          ((void (__thiscall *)(LowProcess *, MobileObject *, int))vtbl->process->Unk_61)(vtbl->process, vtbl, 1);
          ((void (__thiscall *)(MobileObject *, int))vtbl->vtbl->super.Unk_5F)(vtbl, 1);
        }
        if ( !p_unk80 )
          goto LABEL_76;
        while ( 2 )
        {
          if ( !p_unk80[1] && !*p_unk80 )
            goto LABEL_62;
          if ( v10 )
            goto LABEL_63;
          v26 = (TESObjectREFR *)*p_unk80;
          sub_4D8AF0((TESObjectCELL **)*p_unk80);
          if ( v27 == v45
            && v26
            && (!TESObjectREFR_GetOwner(v26) || TESOBjectREFR_IsOwnedBy(v26, (TESObjectREFR *)vtbl, 1))
            && (v28 = (TESFurniture *)v26->vtbl->GetBaseForm(v26), sub_4AE590(v28)) )
          {
            v29 = sub_4D73F0(v26);
            if ( v29 != 0xFFFFFFFF && sub_4DB9D0((float *)v26, v29, v14) )
            {
              v10 = v26;
              BYTE2(v40) = 0;
              goto LABEL_60;
            }
            BSSimpleList_Remove(p_unk80, (int)v26);
            p_unk80 = (int *)&TES->unk80;
          }
          else
          {
LABEL_60:
            p_unk80 = (int *)p_unk80[1];
          }
          if ( !p_unk80 )
            goto LABEL_62;
          continue;
        }
      }
      v44 = *(Actor **)&v44->members.super.super.super.type;
LABEL_77:
      if ( !v44 )
        break;
    }
    if ( HIBYTE(v40) )
      sub_434020(ioManager, a6, a7, a8, 0);
  }
  sub_4418A0((unsigned int *)TES);
}
