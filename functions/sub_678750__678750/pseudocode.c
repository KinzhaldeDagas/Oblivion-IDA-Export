// BunkFix: furniture activation/sit-sleep handoff. For Sleep package, revalidates candidate furniture refs, picks first unused marker via sub_4D73F0, resolves marker transform via sub_4DB9D0, then calls SetSleepState. This is after the actor has already reached/activated the furniture ref.
void __usercall sub_678750(
        int a1@<ecx>,
        unsigned int a2@<ebx>,
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

  v44 = ActorList_ReturnHead((ActorList *)(a1 + 0x68)); /*0x678769*/
  p_unk80 = (int *)&MEMORY[0xB333A0]->unk80; /*0x67876d*/
  HIBYTE(v40) = 0; /*0x678771*/
  if ( v44 ) /*0x678776*/
  {
    while ( v44->vtbl ) /*0x678788*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(ActorVtbl *))v44->vtbl->super.super.super.super.InitializeComponent /*0x678796*/
             + 0x64))(v44->vtbl) )
        goto LABEL_76; /*0x678796*/
      vtbl = (MobileObject *)v44->vtbl; /*0x6787a0*/
      if ( !v44->vtbl || !Actor::HasNPCBaseForm(v44->vtbl) || vtbl->vtbl->super.GetSleepState((TESObjectREFR *)vtbl) ) /*0x6787c3*/
        goto LABEL_76; /*0x6787c7*/
      if ( !vtbl->process->GetProcessLevel(vtbl->process) ) /*0x6787d9*/
      {
        ((void (__usercall *)(MobileObject *@<ecx>, float, double@<st0>, double@<st1>, double@<st2>))vtbl->vtbl[1].super.GetAnimData)( /*0x6787fb*/
          vtbl,
          qword_B3BB2C[0x71],
          a8,
          a7,
          a6);
        TESObjectREFR_GetSpatialContainerAtPosition((TESObjectCELL **)vtbl); /*0x6787ff*/
        v45 = v9; /*0x678806*/
        v10 = 0; /*0x67880a*/
        BYTE2(v40) = 0; /*0x67880c*/
        v11 = (_DWORD *)sub_5E3DC0(vtbl); /*0x678818*/
        sub_5E2E00((Actor *)vtbl); /*0x67881a*/
        v13 = v12; /*0x678821*/
        v47 = Actor::GetCurrentPackage((Actor *)vtbl); /*0x67882a*/
        v46 = 0; /*0x67882e*/
        if ( v11 ) /*0x678832*/
          v46 = (TESObjectREFR *)sub_5697E0(v11); /*0x67883b*/
        v14 = ((int (__thiscall *)(LowProcess *))vtbl->process->GetUnk128)(vtbl->process); /*0x67884e*/
        if ( v13 && sub_4D74B0(v13) && (TESObjectREFR_GetSpatialContainerAtPosition((TESObjectCELL **)v13), v15 == v45) /*0x678890*/
          || (v13 = v46) != 0
          && sub_4D74B0(v46)
          && (TESObjectREFR_GetSpatialContainerAtPosition((TESObjectCELL **)v46), v16 == v45) )
        {
          v10 = v13; /*0x67889c*/
          v17 = (TESFurniture *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v13->vtbl->GetBaseForm)( /*0x67889e*/
                                  v13,
                                  a8,
                                  a7,
                                  a6);
          if ( sub_4AE5A0(v17) ) /*0x6788a2*/
            BYTE2(v40) = 1; /*0x6788ab*/
          v18 = sub_4D73F0(v13); /*0x6788b2*/
          if ( v18 != 0xFFFFFFFF && sub_4DB9D0((float *)v13, v18, v14) ) /*0x6788c8*/
          {
LABEL_62:
            if ( v10 ) /*0x678ae5*/
            {
LABEL_63:
              if ( vtbl->vtbl->super.GetNiNode((TESObjectREFR *)vtbl) ) /*0x678af5*/
              {
                ((void (__usercall *)(TESObjectREFR *@<ecx>, MobileObject *, int, TESObjectREFR *, unsigned int, TESObjectREFR *, double@<st0>, double@<st1>, double@<st2>))v10->vtbl->GetBaseForm)( /*0x678b0a*/
                  v10,
                  a4,
                  a5,
                  a3,
                  a2,
                  v40,
                  a8,
                  a7,
                  a6);
                sub_65AC20(vtbl, 1); /*0x678b12*/
                v49 = (double)*(unsigned __int16 *)(v14 + 0xC) / dbl_A2FC70; /*0x678b34*/
                ((void (__thiscall *)(MobileObject *, _DWORD))vtbl->vtbl->Unk_7A)(vtbl, LODWORD(v49)); /*0x678b3f*/
                v50 = *(unsigned __int8 *)(v14 + 0xE); /*0x678b47*/
                v41 = vtbl->vtbl->super.GetScale((TESObjectREFR *)vtbl); /*0x678b5a*/
                sub_4AEB40((int)&v52, v50, v41); /*0x678b65*/
                v51 = (double)*(unsigned __int16 *)(v14 + 0xC) / dbl_A2FC70; /*0x678b81*/
                NiMatrix33_InitRotationZ(v55, v51); /*0x678b8c*/
                v30 = sub_7101F0((NiTransform *)v55, (NiTransform *)&v54, &v52); /*0x678b9f*/
                v52.x = v30->rot.data[0][0]; /*0x678baa*/
                process = vtbl->process; /*0x678bb1*/
                v52.y = v30->rot.data[0][1]; /*0x678bb4*/
                v52.z = v30->rot.data[0][2]; /*0x678bbb*/
                process->editorPackProcedure = kProcedure_ACTIVATE; /*0x678bc1*/
                sub_4D7300(v10, v48, 1); /*0x678bcb*/
                Unk_73 = vtbl->vtbl->Unk_73; /*0x678bd8*/
                v53[0] = *(float *)v14 + v52.x; /*0x678be2*/
                v53[1] = *(float *)(v14 + 4) + v52.y; /*0x678bf0*/
                v53[2] = *(float *)(v14 + 8) + v52.z; /*0x678bfb*/
                ((void (__thiscall *)(MobileObject *, float *))Unk_73)(vtbl, v53); /*0x678bff*/
                CharProxy = MobileObject_GetCharProxy(vtbl); /*0x678c04*/
                sub_452A10(CharProxy, (NiPoint3 *)v14); /*0x678c0b*/
                ((void (__thiscall *)(TESObjectREFR *, _DWORD))v10->vtbl->GetBaseForm)( /*0x678c20*/
                  v10,
                  *(unsigned __int8 *)(v14 + 0xE));
                a8 = sub_4AEBE0((int)p_unk80); /*0x678c24*/
                v43 = a8; /*0x678c2c*/
                sub_659B90((int *)vtbl, a8, v43); /*0x678c2f*/
                SetSleepState = vtbl->process->SetSleepState; /*0x678c3f*/
                p_unk80 = (int *)v48; /*0x678c45*/
                v40 = v10; /*0x678c46*/
                if ( BYTE2(v47) ) /*0x678c47*/
                {
                  ((void (__stdcall *)(MobileObject *, int))SetSleepState)(vtbl, 6); /*0x678c4c*/
                  vtbl->process->SetCurrentPackProcedure(vtbl->process, kProcedure_WANDER); /*0x678c5b*/
                  vtbl->process->Unk_20(vtbl->process, (UInt32)vtbl, 0); /*0x678c6b*/
                }
                else
                {
                  ((void (__stdcall *)(MobileObject *, int))SetSleepState)(vtbl, 1); /*0x678c91*/
                }
                if ( ((unsigned __int8 (__thiscall *)(LowProcess *, MobileObject *))vtbl->process->Unk_E0)( /*0x678c9f*/
                       vtbl->process,
                       vtbl) )
                {
                  if ( BYTE2(v47) ) /*0x678cac*/
                  {
                    v35 = sub_5E12B0((Actor *)vtbl); /*0x678cb0*/
                    if ( v35 ) /*0x678cb7*/
                      (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)v35 + 0x9C))(v35, 1, 0); /*0x678cc7*/
                    a2 = v48; /*0x678cc9*/
                    a3 = v10; /*0x678cca*/
                    a5 = 9; /*0x678ccb*/
                  }
                  else
                  {
                    a2 = v48; /*0x678ccf*/
                    a3 = v10; /*0x678cd0*/
                    a5 = 4; /*0x678cd1*/
                  }
                }
                else
                {
                  a2 = 0x7F; /*0x678cd5*/
                  a3 = 0; /*0x678cd7*/
                  a5 = 0; /*0x678cd9*/
                }
                a4 = vtbl; /*0x678ce6*/
                ((void (__thiscall *)(LowProcess *))vtbl->process->SetSleepState)(vtbl->process); /*0x678ce7*/
              }
            }
          }
          goto LABEL_76; /*0x678ce7*/
        }
        if ( !v47 ) /*0x6788e0*/
          goto LABEL_76; /*0x6788e0*/
        if ( v47->members.type == 4 ) /*0x6788ea*/
        {
          a7 = sub_566DC0(v47, a8, a7, (Actor *)vtbl, 0, kTerrainLODQuadRayDirectionZ); /*0x6788ff*/
          if ( v19 ) /*0x678906*/
          {
            if ( !Actor::IsSleeping(vtbl) ) /*0x67890e*/
              vtbl->process->SetCurrentPackProcedure(vtbl->process, kProcedure_WANDER); /*0x678924*/
            v20 = p_unk80; /*0x678926*/
            if ( p_unk80 ) /*0x67892c*/
            {
              while ( 1 ) /*0x678938*/
              {
                if ( !v20[1] && !*v20 ) /*0x678941*/
                  goto LABEL_62; /*0x678941*/
                if ( v10 ) /*0x678949*/
                  goto LABEL_63; /*0x678949*/
                v21 = (TESObjectREFR *)*v20; /*0x67894f*/
                TESObjectREFR_GetSpatialContainerAtPosition((TESObjectCELL **)*v20); /*0x678953*/
                if ( v22 != v45 ) /*0x67895c*/
                  goto LABEL_40; /*0x67895c*/
                if ( TESObjectREFR_GetOwner(v21) && !TESObjectREFR_IsOwnedBy(v21, (TESObjectREFR *)vtbl, 1) ) /*0x67896e*/
                  goto LABEL_40; /*0x67896e*/
                v23 = (TESFurniture *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v21->vtbl->GetBaseForm)( /*0x678981*/
                                        v21,
                                        a8,
                                        a7,
                                        a6);
                if ( !sub_4AE5A0(v23) ) /*0x678985*/
                  goto LABEL_40; /*0x67898c*/
                v24 = sub_4D73F0(v21); /*0x678990*/
                if ( v24 != 0xFFFFFFFF && sub_4DB9D0((float *)v21, v24, v14) ) /*0x6789a2*/
                {
                  v10 = v21; /*0x6789ab*/
                  BYTE2(v40) = 1; /*0x6789ad*/
LABEL_40:
                  p_unk80 = (int *)p_unk80[1]; /*0x6789b2*/
                  goto LABEL_41; /*0x6789b9*/
                }
                BSSimpleList_Remove(p_unk80, (int)v21); /*0x6789d2*/
                p_unk80 = (int *)&MEMORY[0xB333A0]->unk80; /*0x6789e3*/
LABEL_41:
                if ( !p_unk80 ) /*0x6789c2*/
                  goto LABEL_62; /*0x6789c2*/
                v20 = p_unk80; /*0x678934*/
              }
            }
LABEL_76:
            v44 = *(Actor **)&v44->members.super.super.super.type; /*0x678ce9*/
            goto LABEL_77; /*0x678cf0*/
          }
        }
        if ( v47->members.type != 3 ) /*0x6789ed*/
          goto LABEL_76; /*0x6789ed*/
        a7 = sub_566DC0(v47, a8, a7, (Actor *)vtbl, 0, kTerrainLODQuadRayDirectionZ); /*0x678a02*/
        if ( !v25 ) /*0x678a09*/
          goto LABEL_76; /*0x678a09*/
        if ( !sub_5E6FA0(vtbl) ) /*0x678a11*/
        {
          ((void (__usercall *)(LowProcess *@<ecx>, MobileObject *, int, double@<st0>, double@<st1>, double@<st2>))vtbl->process->Unk_61)( /*0x678a28*/
            vtbl->process,
            vtbl,
            1,
            a8,
            a7,
            a6);
          ((void (__thiscall *)(MobileObject *, int))vtbl->vtbl->super.SetProcedureCompleted)(vtbl, 1); /*0x678a36*/
        }
        if ( !p_unk80 ) /*0x678a3d*/
          goto LABEL_76; /*0x678a3d*/
        while ( 2 ) /*0x678a50*/
        {
          if ( !p_unk80[1] && !*p_unk80 ) /*0x678a50*/
            goto LABEL_62; /*0x678a50*/
          if ( v10 ) /*0x678a58*/
            goto LABEL_63; /*0x678a58*/
          v26 = (TESObjectREFR *)*p_unk80; /*0x678a5e*/
          TESObjectREFR_GetSpatialContainerAtPosition((TESObjectCELL **)*p_unk80); /*0x678a62*/
          if ( v27 == v45 /*0x678a98*/
            && v26
            && (!TESObjectREFR_GetOwner(v26) || TESObjectREFR_IsOwnedBy(v26, (TESObjectREFR *)vtbl, 1))
            && (v28 = (TESFurniture *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v26->vtbl->GetBaseForm)(
                                        v26,
                                        a8,
                                        a7,
                                        a6),
                sub_4AE590(v28)) )
          {
            v29 = sub_4D73F0(v26); /*0x678aa3*/
            if ( v29 != 0xFFFFFFFF && sub_4DB9D0((float *)v26, v29, v14) ) /*0x678ab9*/
            {
              v10 = v26; /*0x678ac6*/
              BYTE2(v40) = 0; /*0x678ac8*/
              goto LABEL_60; /*0x678ac8*/
            }
            BSSimpleList_Remove(p_unk80, (int)v26); /*0x678c74*/
            p_unk80 = (int *)&MEMORY[0xB333A0]->unk80; /*0x678c85*/
          }
          else
          {
LABEL_60:
            p_unk80 = (int *)p_unk80[1]; /*0x678acd*/
          }
          if ( !p_unk80 ) /*0x678add*/
            goto LABEL_62; /*0x678add*/
          continue; /*0x678add*/
        }
      }
      v44 = *(Actor **)&v44->members.super.super.super.type; /*0x6787de*/
LABEL_77:
      if ( !v44 ) /*0x678cf9*/
        break; /*0x678cf9*/
    }
    if ( HIBYTE(v40) ) /*0x678d08*/
      sub_434020(MEMORY[0xB33A10], a6, a7, a8, 0); /*0x678d12*/
  }
  sub_4418A0((unsigned int *)MEMORY[0xB333A0]); /*0x678d20*/
}
