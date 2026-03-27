void __usercall sub_5C1F70(
        int ebp0@<ebp>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a1@<st1>,
        double a9@<st0>)
{
  InputGlobal *input; // esi
  char IsMenuMode; // bl
  int v11; // eax
  bool v12; // cc
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // ebp
  TESObjectREFR *v20; // ecx
  unsigned __int8 *v21; // edi
  int v22; // eax
  _BYTE *v23; // eax
  int ***ContainerExtraDataForRef; // esi
  int v25; // eax
  ExtraDataList ***v26; // eax
  ExtraDataList ***v27; // esi
  char HasWorn; // al
  PlayerCharacter *v29; // ecx
  bool v30; // bl
  int v31; // edx
  int v32; // eax
  int v33; // edi
  NiNode *Health; // eax
  unsigned __int8 v35; // al
  int v36; // eax
  ExtraDataList **v37; // edi
  NiNode *v38; // eax
  char *v39; // eax
  char *v40; // eax
  LowProcess *process; // eax
  int v42; // eax
  ExtraDataList *v43; // [esp-8h] [ebp-28h]
  void **v44; // [esp-4h] [ebp-24h]
  bool v46; // [esp+1Ah] [ebp-6h]
  bool v47; // [esp+1Bh] [ebp-5h]
  int v48; // [esp+1Ch] [ebp-4h]

  input = OSGlobals->input;
  IsMenuMode = InterfaceManager_IsMenuMode();
  v46 = sub_5790E0(0x3EA, 0);
  v47 = sub_5790E0(0x3FE, 0);
  if ( InputGlobals::QueryControlState(input, 0x12, 1) || InputGlobals::QueryControlState(input, 0x12, 0) )
  {
    v11 = dword_B3B430[0];
    v12 = dword_B3B430[0] < 0;
    if ( dword_B3B430[0] )
    {
      byte_B3B420 = 0;
      if ( v12 )
      {
        v13 = Seed;
        dword_B3B424[0] = 0;
        dword_B3B428 = 0;
        dword_B3B42C = 0;
        dword_B3B430[0] = 0xFFFFFFFF;
        dword_B3B434 = 0xFFFFFFFF;
        dword_B3B438 = 0xFFFFFFFF;
        dword_B3B424[0] = v13;
      }
      else
      {
        v14 = dword_B3B434;
        v15 = dword_B3B428;
        dword_B3B434 = v11;
        v16 = Seed;
        dword_B3B438 = v14;
        v17 = v16 - dword_B3B424[0];
        dword_B3B42C = v15;
        dword_B3B428 = v17;
        dword_B3B424[0] = v16;
      }
      dword_B3B430[0] = 0;
    }
  }
  else if ( InputGlobals::QueryControlState(input, 0x13, 1) || InputGlobals::QueryControlState(input, 0x13, 0) )
  {
    sub_5C1060(1);
  }
  else if ( InputGlobals::QueryControlState(input, 0x14, 1) || InputGlobals::QueryControlState(input, 0x14, 0) )
  {
    sub_5C1060(2);
  }
  else if ( InputGlobals::QueryControlState(input, 0x15, 1) || InputGlobals::QueryControlState(input, 0x15, 0) )
  {
    sub_5C1060(3);
  }
  else if ( InputGlobals::QueryControlState(input, 0x16, 1) || InputGlobals::QueryControlState(input, 0x16, 0) )
  {
    sub_5C1060(4);
  }
  else if ( InputGlobals::QueryControlState(input, 0x17, 1) || InputGlobals::QueryControlState(input, 0x17, 0) )
  {
    sub_5C1060(5);
  }
  else if ( InputGlobals::QueryControlState(input, 0x18, 1) || InputGlobals::QueryControlState(input, 0x18, 0) )
  {
    sub_5C1060(6);
  }
  else if ( InputGlobals::QueryControlState(input, 0x19, 1) || InputGlobals::QueryControlState(input, 0x19, 0) )
  {
    sub_5C1060(7);
  }
  else if ( dword_B3B430[0] != 0xFFFFFFFF )
  {
    sub_5C1060(0xFFFFFFFF);
  }
  if ( sub_5C1100() < 0 )
  {
    if ( dword_B3B430[0] == 0xFFFFFFFF )
    {
LABEL_77:
      if ( byte_B3B43D )
        sub_5C1000(a1);
      byte_B3B420 = 1;
      goto LABEL_86;
    }
  }
  else if ( dword_B3B430[0] == 0xFFFFFFFF )
  {
    if ( !byte_B3B420 && !IsMenuMode )
    {
      byte_B3B420 = 1;
      sub_5C1900();
      if ( dword_B3B44C[4 * sub_5C1100()] )
      {
        v18 = dword_B3B44C[4 * sub_5C1100()];
        v19 = dword_B3B444[4 * sub_5C1100()];
        if ( v18 )
        {
          v20 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
          v48 = v18;
          while ( 1 )
          {
            v21 = *(unsigned __int8 **)(v19 + 8);
            v22 = v21[4];
            v19 = *(_DWORD *)v19;
            if ( v22 == 0x10 )
            {
              if ( sub_65D4C0(v20) )
                sub_664850((int)TESDataHandler_g_PlayerRef, v19, a7, a1, a9, 0);
              v39 = (char *)OblivionDynamicCast(
                              v21,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &SpellItem `RTTI Type Descriptor',
                              0);
              if ( v39 )
                v40 = v39 + 0x18;
              else
                v40 = 0;
              PlayerCharacter_SetCurrentMagicItem((int)TESDataHandler_g_PlayerRef, v19, a7, a1, a9, v40);
              goto LABEL_70;
            }
            if ( v22 != 0x15 )
              goto LABEL_45;
            v23 = OblivionDynamicCast(
                    v21,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectBOOK `RTTI Type Descriptor',
                    0);
            if ( !v23 || (v23[0x88] & 1) == 0 || !*((_DWORD *)v23 + 0x19) )
              break;
            sub_664850((int)TESDataHandler_g_PlayerRef, v19, a7, a1, a9, (int)v23);
LABEL_70:
            v20 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
            process = TESDataHandler_g_PlayerRef->super.super.super.process;
            if ( process )
            {
              ((void (__thiscall *)(LowProcess *, TESObjectREFR *, int, int, _DWORD))process->Unk_10A)(
                process,
                v20,
                1,
                1,
                0);
              v20 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
            }
            if ( !--v48 )
              goto LABEL_73;
          }
          v20 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
LABEL_45:
          TESObjectREFR_GetContainer(v20);
          ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)TESDataHandler_g_PlayerRef);
          if ( !ContainerExtraDataForRef )
            goto LABEL_70;
          v25 = sub_5C1100();
          v26 = sub_4896B0(ContainerExtraDataForRef, (ExtraDataList **)v21, v25);
          v27 = v26;
          if ( !v26 )
            goto LABEL_70;
          HasWorn = ContainerEntryExtraData_HasWorn((EntryData *)v26, 0);
          v29 = TESDataHandler_g_PlayerRef;
          if ( HasWorn )
          {
            v30 = 1;
            if ( ((int (__thiscall *)(LowProcess *, _DWORD, int))v29->super.super.super.process->GetEquippedLightData)(
                   v29->super.super.super.process,
                   0,
                   ebp0) )
            {
              if ( v27[2] == (ExtraDataList **)TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedLightData(
                                                 TESDataHandler_g_PlayerRef->super.super.super.process,
                                                 0)->type )
                v30 = TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedLightData(
                        TESDataHandler_g_PlayerRef->super.super.super.process,
                        0) != 0;
            }
            ebp0 = 0;
            if ( (!((int (__thiscall *)(LowProcess *))TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedShieldData)(TESDataHandler_g_PlayerRef->super.super.super.process)
               || v27[2] != (ExtraDataList **)TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedShieldData(
                                                TESDataHandler_g_PlayerRef->super.super.super.process,
                                                0)->type
               || TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedShieldData(
                    TESDataHandler_g_PlayerRef->super.super.super.process,
                    0))
              && v30
              && Actor_GetCurrentAction(TESDataHandler_g_PlayerRef) == 0xFFFFFFFF )
            {
              v32 = sub_5C1100();
              sub_5C16E0(v19, *(TESForm **)(dword_B3B444[4 * v32] + 8), 1, 0);
              v33 = (int)v27[2];
              v43 = **v27;
              Health = TESHealthForm_GetHealth((Sky *)v27);
              a9 = Actor_UnequipItem((int)TESDataHandler_g_PlayerRef, a9, a7, a1, v33, (int)Health, v43, 0, 0, 0);
              HideEquipment((TESObjectREFR *)TESDataHandler_g_PlayerRef, a7, a1, a9, 0, 0);
            }
            goto LABEL_63;
          }
          if ( Actor_GetCurrentAction(v29) != 0xFFFFFFFF )
          {
            v35 = v21[4];
            if ( v35 == 0x14 )
            {
              a9 = flt_A30634;
              GameUI_QueueMessage((const char *)dword_B38A28, 0, 1u, flt_A30634);
              goto LABEL_63;
            }
            if ( v35 == 0x21 )
            {
              a9 = flt_A30634;
              GameUI_QueueMessage((const char *)dword_B38A20, 0, 1u, flt_A30634);
LABEL_63:
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v27, v31);
              FormHeapFree((unsigned int)v27);
              goto LABEL_70;
            }
          }
          sub_5C1000(a1);
          byte_B3B420 = 1;
          v36 = sub_5C1100();
          sub_5C16E0(v19, *(TESForm **)(dword_B3B444[4 * v36] + 8), 1, 1);
          v37 = v27[2];
          v44 = (void **)**v27;
          v38 = TESHealthForm_GetHealth((Sky *)v27);
          Actor_EquipItem(
            (int)TESDataHandler_g_PlayerRef,
            (unsigned __int16 *)v19,
            a7,
            a1,
            a5,
            a9,
            a2,
            a6,
            a4,
            a3,
            v37,
            (signed int)v38,
            v44,
            1,
            0);
          HideEquipment((TESObjectREFR *)TESDataHandler_g_PlayerRef, a7, a1, a9, (int)v27[2], 0);
          goto LABEL_63;
        }
      }
      goto LABEL_73;
    }
    goto LABEL_77;
  }
  if ( sub_5C1100() >= 0 && (sub_5C1160() && !IsMenuMode || v46 || v47) )
  {
    v42 = sub_5C1100();
    sub_5C1B80(a7, a1, a9, v42);
  }
LABEL_86:
  if ( !IsMenuMode )
  {
LABEL_73:
    if ( byte_B3B4C0 )
      byte_B3B4C0 = 0;
    return;
  }
  if ( !v46 && !v47 )
    sub_5C1000(a1);
}
