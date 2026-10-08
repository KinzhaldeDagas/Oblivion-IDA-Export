void __userpurge sub_670CA0(
        TESObjectREFR *a1@<ecx>,
        double a2@<st0>,
        double st4_0@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st7>,
        double a7@<st4>,
        char a8@<bpl>,
        double a9@<st6>,
        double a10@<st5>,
        float a11)
{
  float *ContainerChanges; // ebx
  double v13; // st7
  signed int v14; // eax
  TESObjectREFRVtbl *vtbl; // edi
  int v16; // ebp
  bool v17; // zf
  int v18; // edi
  TESObjectCELL *DwordAtOffset40; // ebx
  TESWorldSpace *WorldSpace; // ebx
  TeleportData *TeleportData; // eax
  TESObjectREFR *LinkedDoor; // eax
  TeleportData *v25; // eax
  TESObjectREFR **p_linkedDoor; // esi
  TESObjectCELL *ExteriorCellAtCoord; // eax
  int *v30; // edi
  char *Head; // eax
  float v32; // [esp+0h] [ebp-20h]
  TESWorldSpace *v33; // [esp+14h] [ebp-Ch]
  int ArgList; // [esp+1Ch] [ebp-4h]
  int v40; // [esp+24h] [ebp+4h]
  int v41; // [esp+24h] [ebp+4h]
  int v42; // [esp+24h] [ebp+4h]
  int v43; // [esp+24h] [ebp+4h]

  if ( !LOBYTE(a11) ) /*0x670cae*/
  {
    ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&a1->member.baseExtraList); /*0x670cbe*/
    v13 = ((double (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_2A)(a1); /*0x670ccc*/
    v14 = Double_To_SInt32(v13); /*0x670cce*/
    sub_491700(ContainerChanges, a4, a5, v13, a1, v14, 0); /*0x670cd7*/
    if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.super.ClearComponentReferences)(a1) ) /*0x670ce6*/
      sub_4246F0(&a1->member.baseExtraList); /*0x670cee*/
    vtbl = a1->vtbl; /*0x670cf3*/
    a1->vtbl[1].super.Unk_2A((TESForm *)a1); /*0x670cfd*/
    __asm { fmul    qword ptr ds:0A3D360h } /*0x670cff*/
    __asm { fstp    [esp+20h+arg_0] }
    __asm
    {
      fld     [esp+20h+arg_0]
      fstp    [esp+20h+var_20]
    }
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))vtbl[1].super.Unk_2B)(a1, LODWORD(v32)); /*0x670d19*/
    sub_675D50((ActorProcessManager *)&qword_B3BB2C[0x75], (PlayerCharacter *)a1, 0); /*0x670d23*/
    LOBYTE(a1[3].member.rot.y) = 1; /*0x670d2a*/
    sub_65FDA0((int *)a1); /*0x670d31*/
    if ( MEMORY[0xB3BAD4] ) /*0x670d36*/
    {
      sub_4919E0((int ***)ContainerChanges, a4, v13, a5, (TESForm *)a1, (TESForm *)MEMORY[0xB3BAD4], 0); /*0x670d45*/
      sub_57A3B0(a5, 0); /*0x670d4c*/
    }
    ActorProcessManager_RemoveCrimesForCriminal((ActorProcessManager *)&qword_B3BB2C[0x75], (Actor *)a1); /*0x670d5a*/
    return; /*0x670d66*/
  }
  v16 = 0; /*0x670d69*/
  v17 = MEMORY[0xB3BAD0] == 0; /*0x670d6b*/
  LOBYTE(a1[3].member.rot.y) = 0; /*0x670d71*/
  if ( !v17 ) /*0x670d78*/
  {
    if ( unk_B35B90 ) /*0x670d7e*/
      sub_4BE5A0((_DWORD *)unk_B35B90); /*0x670d88*/
    if ( g_DistantLODLoaderTasksByCell ) /*0x670d8d*/
      sub_4BD980(g_DistantLODLoaderTasksByCell); /*0x670d97*/
    v33 = 0; /*0x670da2*/
    v18 = 0; /*0x670da6*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(MEMORY[0xB3BAD0]); /*0x670dad*/
    if ( DwordAtOffset40 ) /*0x670db1*/
      goto LABEL_28; /*0x670db1*/
    WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)MEMORY[0xB3BAD0]); /*0x670dbe*/
    v33 = WorldSpace; /*0x670dc2*/
    if ( WorldSpace ) /*0x670dc6*/
    {
      _EAX = (*((int (__thiscall **)(TESChildCELL *))MEMORY[0xB3BAD0]->vtbl + 0x5D))(MEMORY[0xB3BAD0]); /*0x670dda*/
      __asm /*0x670ddc*/
      {
        fld     dword ptr [eax]
        fstp    [esp+1Ch+var_8]
        fld     [esp+1Ch+var_8]
        fistp   [esp+1Ch+arg_0]
      }
      v18 = v40 >> 0xC; /*0x670dfc*/
      _EAX = (*((int (__thiscall **)(TESChildCELL *))MEMORY[0xB3BAD0]->vtbl + 0x5D))(MEMORY[0xB3BAD0]); /*0x670dff*/
      __asm /*0x670e01*/
      {
        fld     dword ptr [eax+4]
        fstp    [esp+1Ch+var_8]
        fld     [esp+1Ch+var_8]
        fistp   [esp+1Ch+arg_0]
      }
      v16 = v41 >> 0xC; /*0x670e14*/
      DwordAtOffset40 = (TESObjectCELL *)TESWorldSpace_LoadExteriorCellAtCoord(WorldSpace, a4, a5, a2, v18, v41 >> 0xC); /*0x670e20*/
      if ( DwordAtOffset40 ) /*0x670e24*/
      {
LABEL_28:
        if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1) /*0x670e44*/
          || ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1) )
        {
          sub_5F0410(a1, v16); /*0x670e4c*/
        }
        sub_5E4140(a1); /*0x670e53*/
        TeleportData = TESObjectREFR_GetTeleportData((TESObjectREFR *)MEMORY[0xB3BAD0]); /*0x670e5e*/
        LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x670e65*/
        v25 = TESObjectREFR_GetTeleportData(LinkedDoor); /*0x670e6c*/
        p_linkedDoor = &v25->linkedDoor; /*0x670e71*/
        if ( v25 ) /*0x670e75*/
        {
          if ( sub_42B460(&v25->linkedDoor) ) /*0x670e7d*/
          {
            ExteriorCellAtCoord = sub_42B460(p_linkedDoor); /*0x670edc*/
          }
          else
          {
            _EAX = EmbeddedList_GetHead((char *)p_linkedDoor); /*0x670e88*/
            __asm /*0x670e8d*/
            {
              fld     dword ptr [eax]
              fstp    [esp+1Ch+var_8]
              fld     [esp+1Ch+var_8]
              fistp   [esp+1Ch+arg_0]
            }
            ArgList = v42 >> 0xC; /*0x670ea4*/
            _EAX = EmbeddedList_GetHead((char *)p_linkedDoor); /*0x670ea8*/
            __asm /*0x670ead*/
            {
              fld     dword ptr [eax+4]
              fstp    [esp+1Ch+var_8]
              fld     [esp+1Ch+var_8]
              fistp   [esp+1Ch+arg_0]
            }
            if ( ArgList == v18 && v16 == v43 >> 0xC ) /*0x670ecd*/
              goto LABEL_25; /*0x670ecd*/
            ExteriorCellAtCoord = (TESObjectCELL *)TESWorldSpace_LoadExteriorCellAtCoord( /*0x670ed5*/
                                                     v33,
                                                     a4,
                                                     a5,
                                                     a2,
                                                     ArgList,
                                                     v43 >> 0xC);
          }
          DwordAtOffset40 = ExteriorCellAtCoord; /*0x670ee1*/
LABEL_25:
          v30 = (int *)sub_42B430((char *)p_linkedDoor); /*0x670ee3*/
          Head = EmbeddedList_GetHead((char *)p_linkedDoor); /*0x670eee*/
          PlayerCharacter_ChangeCellAndPosition( /*0x670f26*/
            (TESObjectREFR *)reference,
            a2,
            st4_0,
            a4,
            a5,
            a6,
            a7,
            a9,
            a10,
            *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))Head,
            *((NiAVObject *(__thiscall **)(NiAVObject *, const char *))Head + 1),
            *((void *(__thiscall **)(NiAVObject *))Head + 2),
            *v30,
            v30[1],
            v30[2],
            DwordAtOffset40,
            1);
          sub_6765F0( /*0x670f3b*/
            (int)DwordAtOffset40,
            (int)v30,
            a4,
            a5,
            a2,
            (ActorProcessManager *)&qword_B3BB2C[0x75],
            st4_0,
            MEMORY[0xB3BAD0],
            0,
            0);
        }
      }
    }
  }
}
