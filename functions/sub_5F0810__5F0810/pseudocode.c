void __userpurge sub_5F0810(
        PlayerCharacter *this@<ecx>,
        double st7_0@<st0>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  Creature *(__thiscall *GetMountedHorse)(Actor *); // edx
  TESObjectREFR *v11; // eax
  TESObjectREFR *v12; // esi
  PlayerCharacter *v13; // eax
  const NiPoint3 *v14; // eax
  int v15; // edx
  PlayerCharacter *v16; // eax
  char v17; // bl
  TESObjectREFR *p_a4; // esi
  TESObjectREFR *vtbl; // esi
  TeleportData *TeleportData; // edi
  TESObjectREFR *LinkedDoor; // eax
  TESWorldSpace *v22; // edi
  float *v23; // eax
  TeleportData *v24; // eax
  TESObjectREFR *v25; // eax
  TeleportData *v26; // edi
  TESObjectCELL *v27; // esi
  TESWorldSpace *LinkedDoorWorldspace; // eax
  TESObjectCELL **v29; // edi
  float *v30; // eax
  double v31; // st7
  float *v32; // eax
  double v33; // st7
  TESObjectCELL *v34; // edi
  TESObjectCELL **v35; // ebx
  float *v36; // eax
  double v37; // st7
  float v38; // [esp+0h] [ebp-60h]
  float *v39; // [esp+4h] [ebp-5Ch]
  float a2; // [esp+8h] [ebp-58h]
  TESObjectCELL *DwordAtOffset40; // [esp+Ch] [ebp-54h]
  float v42; // [esp+Ch] [ebp-54h]
  TESWorldSpace *radians; // [esp+10h] [ebp-50h]
  char v44; // [esp+2Bh] [ebp-35h]
  TESObjectREFR *lastRiddenHorse; // [esp+2Ch] [ebp-34h]
  Concurrency::details::SchedulerBase *WorldSpace; // [esp+30h] [ebp-30h]
  __int64 a4; // [esp+34h] [ebp-2Ch] BYREF
  TravelPath v48; // [esp+3Ch] [ebp-24h] BYREF
  unsigned int v49; // [esp+50h] [ebp-10h]
  int v50; // [esp+58h] [ebp-8h]
  TESObjectREFR *retaddr; // [esp+60h] [ebp+0h]

  GetMountedHorse = this->vtbl->super.GetMountedHorse; /*0x5f083c*/
  HIBYTE(lastRiddenHorse) = 0; /*0x5f0844*/
  LODWORD(a4) = 0; /*0x5f0849*/
  v11 = (TESObjectREFR *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))GetMountedHorse)( /*0x5f084d*/
                           this,
                           st7_0,
                           st6_0,
                           st5_0);
  v12 = v11; /*0x5f084f*/
  WorldSpace = (Concurrency::details::SchedulerBase *)v11; /*0x5f0853*/
  if ( v11 ) /*0x5f0857*/
  {
    HIBYTE(lastRiddenHorse) = 1; /*0x5f085f*/
    if ( this != reference ) /*0x5f0864*/
      goto LABEL_18; /*0x5f0864*/
    if ( TESObjectREFR_GetOwner(v11) && !TESObjectREFR_IsOwnedBy(v12, (TESObjectREFR *)reference, 1) ) /*0x5f0886*/
    {
      if ( reference == this ) /*0x5f08a9*/
      {
        sub_5F0410((TESObjectREFR *)this, (int)this); /*0x5f08b1*/
        return; /*0x5f08b6*/
      }
LABEL_18:
      if ( !v12 ) /*0x5f0943*/
        goto LABEL_20; /*0x5f0943*/
      goto LABEL_19; /*0x5f0943*/
    }
    reference->lastRiddenHorse = this->vtbl->super.GetMountedHorse(this); /*0x5f089b*/
  }
  else if ( reference->lastRiddenHorse ) /*0x5f08c0*/
  {
    if ( TESObjectREFR_GetOwner((TESObjectREFR *)reference->lastRiddenHorse) ) /*0x5f08ce*/
    {
      if ( !TESObjectREFR_IsOwnedBy((TESObjectREFR *)reference->lastRiddenHorse, (TESObjectREFR *)reference, 1) ) /*0x5f08e5*/
        reference->lastRiddenHorse = 0; /*0x5f08f4*/
    }
  }
  v13 = reference; /*0x5f08fa*/
  if ( this != reference ) /*0x5f0901*/
    goto LABEL_18; /*0x5f0901*/
  if ( v13->lastRiddenHorse ) /*0x5f0903*/
  {
    if ( v13->lastRiddenHorse->__vftable->super.super.IsDead((TESObjectREFR *)v13->lastRiddenHorse, 0) ) /*0x5f091a*/
      reference->lastRiddenHorse = 0; /*0x5f0925*/
  }
  if ( !v12 ) /*0x5f092d*/
  {
    lastRiddenHorse = (TESObjectREFR *)reference->lastRiddenHorse; /*0x5f093b*/
    v12 = lastRiddenHorse; /*0x5f093f*/
    goto LABEL_18; /*0x5f093f*/
  }
LABEL_19:
  WorldSpace = (Concurrency::details::SchedulerBase *)TESObjectREFR_GetWorldSpace(v12); /*0x5f0945*/
LABEL_20:
  a4 = 0; /*0x5f0950*/
  PathLow_ctor(&v48); /*0x5f095c*/
  v50 = 0; /*0x5f0967*/
  radians = TESObjectREFR_GetWorldSpace(retaddr); /*0x5f0970*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(retaddr); /*0x5f0978*/
  v14 = (const NiPoint3 *)retaddr->vtbl->GetPos(retaddr); /*0x5f0983*/
  TravelPath_BuildToDestination(&v48, (TESObjectREFR *)reference, v14, DwordAtOffset40, radians); /*0x5f0990*/
  sub_689BB0((char *)&v48, v15, &a4); /*0x5f099e*/
  this->vtbl->super.super.super.GetPos((TESObjectREFR *)this); /*0x5f09ae*/
  TESObjectREFR_GetSpatialContainerAtPosition((TESObjectREFR *)this); /*0x5f09b2*/
  if ( !a4 ) /*0x5f09bb*/
    goto LABEL_57; /*0x5f09bb*/
  v16 = reference; /*0x5f09c7*/
  if ( !reference->unk114 && this == v16 ) /*0x5f09d7*/
    v16->unk114 = 1; /*0x5f09d9*/
  if ( a4 ) /*0x5f09e4*/
  {
    v17 = 0; /*0x5f09f0*/
    p_a4 = (TESObjectREFR *)&a4; /*0x5f09f6*/
    retaddr = (TESObjectREFR *)&a4; /*0x5f09fa*/
    if ( v44 ) /*0x5f09fe*/
      sub_5F0410((TESObjectREFR *)this, (int)this); /*0x5f0a02*/
    while ( *(_DWORD *)&p_a4->member.super.type || p_a4->vtbl ) /*0x5f0a0e*/
    {
      vtbl = (TESObjectREFR *)p_a4->vtbl; /*0x5f0a14*/
      TeleportData = TESObjectREFR_GetTeleportData(vtbl); /*0x5f0a1d*/
      LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x5f0a21*/
      TESObjectREFR_GetSpatialContainerAtPosition(LinkedDoor); /*0x5f0a28*/
      EmbeddedList_GetHead((char *)TeleportData); /*0x5f0a2f*/
      if ( v17 ) /*0x5f0a36*/
      {
        v22 = TESObjectREFR_GetWorldSpace(vtbl); /*0x5f0a43*/
        if ( v22 ) /*0x5f0a47*/
        {
          a2 = flt_A68FD8; /*0x5f0a60*/
          v39 = vtbl->vtbl->GetPos(vtbl); /*0x5f0a6d*/
          v38 = flt_A68FD8; /*0x5f0a77*/
          v23 = vtbl->vtbl->GetPos(vtbl); /*0x5f0a7a*/
          sub_4F0750(v22, v23, v38, v39, a2, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_5E1260, (int)this); /*0x5f0a7f*/
        }
        if ( dword_B3B744[0xD] ) /*0x5f0a84*/
        {
          v27 = (TESObjectCELL *)Shared_GetDwordAtOffset40((void *)dword_B3B744[0xD]); /*0x5f0acd*/
          LinkedDoorWorldspace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)dword_B3B744[0xD]); /*0x5f0acf*/
        }
        else
        {
          dword_B3B744[0xD] = (int)vtbl; /*0x5f0a90*/
          v24 = TESObjectREFR_GetTeleportData(vtbl); /*0x5f0a96*/
          v25 = TeleportData_GetLinkedDoor(v24); /*0x5f0a9d*/
          dword_B3B744[0xD] = (int)v25; /*0x5f0aa4*/
          v26 = TESObjectREFR_GetTeleportData(v25); /*0x5f0aae*/
          v27 = sub_42B460(&v26->linkedDoor); /*0x5f0ab9*/
          LinkedDoorWorldspace = TeleportData_GetLinkedDoorWorldspace(&v26->linkedDoor); /*0x5f0abb*/
        }
        v29 = (TESObjectCELL **)LinkedDoorWorldspace; /*0x5f0ad4*/
        if ( reference == this ) /*0x5f0add*/
        {
          if ( reference->lastRiddenHorse ) /*0x5f0adf*/
          {
            v30 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_B3B744[0xD] + 0x174))(dword_B3B744[0xD]); /*0x5f0af6*/
            TESObjectREFR_SetPosition((TESObjectREFR *)reference->lastRiddenHorse, *v30, v30[1], v30[2]); /*0x5f0b19*/
            if ( v27 && TESObjectCELL_IsProcessLevel_LowHigh(v27, 0) ) /*0x5f0b2b*/
            {
              v31 = *(float *)(dword_B3B744[0xD] + 0x28); /*0x5f0b3f*/
              TESObjectREFR_SetRotationZ( /*0x5f0b4c*/
                (TESObjectREFR *)reference->lastRiddenHorse,
                *(float *)(dword_B3B744[0xD] + 0x28));
            }
            else
            {
              v31 = flt_A32048; /*0x5f0b9b*/
              TESObjectREFR_SetRotationX((TESObjectREFR *)reference->lastRiddenHorse, flt_A32048); /*0x5f0bb1*/
            }
            sub_4DD4B0(v17, st5_0, st6_0, v31, (Actor *)reference->lastRiddenHorse, v27, v29); /*0x5f0bc5*/
            if ( TESObjectCELL_IsProcessLevel_LowHigh(v27, 1) ) /*0x5f0bd6*/
              ((void (__thiscall *)(Creature *, _DWORD))reference->lastRiddenHorse->__vftable->super.super.Unk_5E)( /*0x5f0bf9*/
                reference->lastRiddenHorse,
                0);
            break; /*0x5f0bfb*/
          }
        }
        else if ( lastRiddenHorse ) /*0x5f0b58*/
        {
          v32 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_B3B744[0xD] + 0x174))(dword_B3B744[0xD]); /*0x5f0c0e*/
          TESObjectREFR_SetPosition(lastRiddenHorse, *v32, v32[1], v32[2]); /*0x5f0c2b*/
          if ( v27 && TESObjectCELL_IsProcessLevel_LowHigh(v27, 0) ) /*0x5f0c3d*/
          {
            v33 = *(float *)(dword_B3B744[0xD] + 0x28); /*0x5f0c4d*/
            TESObjectREFR_SetRotationZ(lastRiddenHorse, *(float *)(dword_B3B744[0xD] + 0x28)); /*0x5f0c55*/
          }
          else
          {
            v33 = flt_A32048; /*0x5f0c5c*/
            TESObjectREFR_SetRotationX(lastRiddenHorse, flt_A32048); /*0x5f0c68*/
          }
          sub_4DD4B0((unsigned __int8)lastRiddenHorse, st5_0, st6_0, v33, (Actor *)lastRiddenHorse, v27, v29); /*0x5f0c70*/
          if ( TESObjectCELL_IsProcessLevel_LowHigh(v27, 1) ) /*0x5f0c81*/
            ((void (__thiscall *)(TESObjectREFR *, _DWORD))lastRiddenHorse->vtbl->Unk_5E)(lastRiddenHorse, 0); /*0x5f0c9a*/
          break; /*0x5f0c9c*/
        }
        v17 = 0; /*0x5f0b5e*/
      }
      else if ( lastRiddenHorse /*0x5f0b74*/
             && WorldSpace == (Concurrency::details::SchedulerBase *)TESObjectREFR_GetSpatialContainerAtPosition(vtbl) )
      {
        v17 = 1; /*0x5f0b76*/
      }
      else
      {
        retaddr = *(TESObjectREFR **)&retaddr->member.super.type; /*0x5f0b81*/
      }
      if ( !retaddr ) /*0x5f0b8a*/
        break; /*0x5f0b8a*/
      p_a4 = retaddr; /*0x5f0b90*/
    }
  }
  else
  {
LABEL_57:
    if ( v44 ) /*0x5f0ca6*/
    {
      sub_5F0410((TESObjectREFR *)this, (int)this); /*0x5f0cae*/
      v34 = (TESObjectCELL *)Shared_GetDwordAtOffset40(retaddr); /*0x5f0cbc*/
      v35 = (TESObjectCELL **)TESObjectREFR_GetWorldSpace(retaddr); /*0x5f0cc5*/
      v36 = retaddr->vtbl->GetPos(retaddr); /*0x5f0ccf*/
      TESObjectREFR_SetPosition(lastRiddenHorse, *v36, v36[1], v36[2]); /*0x5f0cec*/
      if ( v34 && TESObjectCELL_IsProcessLevel_LowHigh(v34, 0) ) /*0x5f0cfe*/
      {
        TESObjectREFR_SetRotationZ(lastRiddenHorse, retaddr->member.rot.z); /*0x5f0d10*/
        v37 = 0.0; /*0x5f0d15*/
      }
      else
      {
        v37 = flt_A32048; /*0x5f0d19*/
      }
      v42 = v37; /*0x5f0d22*/
      TESObjectREFR_SetRotationX(lastRiddenHorse, v42); /*0x5f0d25*/
      sub_4DD4B0((unsigned __int8)v35, st5_0, st6_0, v37, (Actor *)lastRiddenHorse, v34, v35); /*0x5f0d2d*/
    }
  }
  v49 = 0xFFFFFFFF; /*0x5f0d35*/
  PathLow_dtor((TravelPath *)&a4); /*0x5f0d41*/
}
