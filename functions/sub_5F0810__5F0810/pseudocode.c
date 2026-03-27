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
  float *v14; // eax
  int v15; // edx
  PlayerCharacter *v16; // eax
  char v17; // bl
  TESObjectREFR *p_a4; // esi
  TESObjectREFR *vtbl; // esi
  ExtraTeleport *TeleportExtraData; // edi
  TESObjectCELL **v21; // eax
  TESWorldSpace *v22; // edi
  float *v23; // eax
  ExtraTeleport *v24; // eax
  TESChildCELL *v25; // eax
  TESObjectREFR **v26; // edi
  TESObjectCELL *v27; // esi
  TESWorldSpace *v28; // eax
  TESWorldSpace *v29; // edi
  float *v30; // eax
  double v31; // st7
  Concurrency::details::SchedulerBase *v32; // eax
  float *v33; // eax
  double v34; // st7
  TESObjectCELL *v35; // edi
  TESWorldSpace *v36; // ebx
  float *v37; // eax
  double v38; // st7
  float v39; // [esp+0h] [ebp-60h]
  float *v40; // [esp+4h] [ebp-5Ch]
  float a2; // [esp+8h] [ebp-58h]
  TESObjectCELL *ParentCell; // [esp+Ch] [ebp-54h]
  float v43; // [esp+Ch] [ebp-54h]
  TESWorldSpace *v44; // [esp+10h] [ebp-50h]
  char v45; // [esp+2Bh] [ebp-35h]
  TESObjectREFR *lastRiddenHorse; // [esp+2Ch] [ebp-34h]
  Concurrency::details::SchedulerBase *WorldSpace; // [esp+30h] [ebp-30h]
  __int64 a4; // [esp+34h] [ebp-2Ch] BYREF
  int v49[3]; // [esp+3Ch] [ebp-24h] BYREF
  unsigned int v50; // [esp+50h] [ebp-10h]
  int v51; // [esp+58h] [ebp-8h]
  TESObjectREFR *retaddr; // [esp+60h] [ebp+0h]

  GetMountedHorse = this->vtbl->super.GetMountedHorse;
  HIBYTE(lastRiddenHorse) = 0;
  LODWORD(a4) = 0;
  v11 = (TESObjectREFR *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))GetMountedHorse)(
                           this,
                           st7_0,
                           st6_0,
                           st5_0);
  v12 = v11;
  WorldSpace = (Concurrency::details::SchedulerBase *)v11;
  if ( v11 )
  {
    HIBYTE(lastRiddenHorse) = 1;
    if ( this != TESDataHandler_g_PlayerRef )
      goto LABEL_18;
    if ( TESObjectREFR_GetOwner(v11) && !TESOBjectREFR_IsOwnedBy(v12, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 1) )
    {
      if ( TESDataHandler_g_PlayerRef == this )
      {
        sub_5F0410((TESObjectREFR *)this, (int)this);
        return;
      }
LABEL_18:
      if ( !v12 )
        goto LABEL_20;
      goto LABEL_19;
    }
    TESDataHandler_g_PlayerRef->lastRiddenHorse = this->vtbl->super.GetMountedHorse((Actor *)this);
  }
  else if ( TESDataHandler_g_PlayerRef->lastRiddenHorse )
  {
    if ( TESObjectREFR_GetOwner((TESObjectREFR *)TESDataHandler_g_PlayerRef->lastRiddenHorse) )
    {
      if ( !TESOBjectREFR_IsOwnedBy(
              (TESObjectREFR *)TESDataHandler_g_PlayerRef->lastRiddenHorse,
              (TESObjectREFR *)TESDataHandler_g_PlayerRef,
              1) )
        TESDataHandler_g_PlayerRef->lastRiddenHorse = 0;
    }
  }
  v13 = TESDataHandler_g_PlayerRef;
  if ( this != TESDataHandler_g_PlayerRef )
    goto LABEL_18;
  if ( v13->lastRiddenHorse )
  {
    if ( v13->lastRiddenHorse->__vftable->super.super.IsDead((TESObjectREFR *)v13->lastRiddenHorse, 0) )
      TESDataHandler_g_PlayerRef->lastRiddenHorse = 0;
  }
  if ( !v12 )
  {
    lastRiddenHorse = (TESObjectREFR *)TESDataHandler_g_PlayerRef->lastRiddenHorse;
    v12 = lastRiddenHorse;
    goto LABEL_18;
  }
LABEL_19:
  WorldSpace = (Concurrency::details::SchedulerBase *)TESObjectREFR_GetWorldSpace(v12);
LABEL_20:
  a4 = 0;
  sub_68A9F0(v49);
  v51 = 0;
  v44 = TESObjectREFR_GetWorldSpace(retaddr);
  ParentCell = TESObjectREFR_GetParentCell(retaddr);
  v14 = retaddr->vtbl->GetPos(retaddr);
  sub_68B030(v49, st7_0, TESDataHandler_g_PlayerRef, v14, ParentCell, v44);
  sub_689BB0((char *)v49, v15, &a4);
  this->vtbl->super.super.super.GetPos((TESObjectREFR *)this);
  sub_4D8AF0((TESObjectCELL **)this);
  if ( !a4 )
    goto LABEL_57;
  v16 = TESDataHandler_g_PlayerRef;
  if ( !TESDataHandler_g_PlayerRef->unk114 && this == v16 )
    v16->unk114 = 1;
  if ( a4 )
  {
    v17 = 0;
    p_a4 = (TESObjectREFR *)&a4;
    retaddr = (TESObjectREFR *)&a4;
    if ( v45 )
      sub_5F0410((TESObjectREFR *)this, (int)this);
    while ( *(_DWORD *)&p_a4->member.super.type || p_a4->vtbl )
    {
      vtbl = (TESObjectREFR *)p_a4->vtbl;
      TeleportExtraData = GetTeleportExtraData(vtbl);
      v21 = (TESObjectCELL **)sub_42B410(&TeleportExtraData->super);
      sub_4D8AF0(v21);
      sub_6899C0((char *)TeleportExtraData);
      if ( v17 )
      {
        v22 = TESObjectREFR_GetWorldSpace(vtbl);
        if ( v22 )
        {
          a2 = flt_A68FD8;
          v40 = vtbl->vtbl->GetPos(vtbl);
          v39 = flt_A68FD8;
          v23 = vtbl->vtbl->GetPos(vtbl);
          sub_4F0750(v22, v23, v39, v40, a2, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_5E1260, (int)this);
        }
        if ( dword_B3B778 )
        {
          v27 = TESObjectREFR_GetParentCell((TESObjectREFR *)dword_B3B778);
          v28 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)dword_B3B778);
        }
        else
        {
          dword_B3B778 = (TESChildCELL *)vtbl;
          v24 = GetTeleportExtraData(vtbl);
          v25 = (TESChildCELL *)sub_42B410(&v24->super);
          dword_B3B778 = v25;
          v26 = (TESObjectREFR **)GetTeleportExtraData(v25);
          v27 = sub_42B460(v26);
          v28 = sub_42B470(v26);
        }
        v29 = v28;
        if ( TESDataHandler_g_PlayerRef == this )
        {
          if ( TESDataHandler_g_PlayerRef->lastRiddenHorse )
          {
            v30 = (float *)(*((int (__thiscall **)(TESChildCELL *))dword_B3B778->vtbl + 0x5D))(dword_B3B778);
            TESObjectREFR_SetPosition(
              (TESObjectREFR *)TESDataHandler_g_PlayerRef->lastRiddenHorse,
              *v30,
              v30[1],
              v30[2]);
            if ( v27 && TESObjectCELL_IsProcessLevel_LowHigh(v27, 0) )
            {
              v31 = *(float *)&dword_B3B778[0xA].vtbl;
              sub_4D8A10(*(float *)&dword_B3B778[0xA].vtbl);
            }
            else
            {
              v31 = flt_A32048;
              sub_4D89D0(flt_A32048);
            }
            sub_4DD4B0(v17, st5_0, st6_0, v31, (Actor *)TESDataHandler_g_PlayerRef->lastRiddenHorse, v27, v29);
            if ( TESObjectCELL_IsProcessLevel_LowHigh(v27, 1) )
              ((void (__thiscall *)(Creature *, _DWORD))TESDataHandler_g_PlayerRef->lastRiddenHorse->__vftable->super.super.Unk_5E)(
                TESDataHandler_g_PlayerRef->lastRiddenHorse,
                0);
            break;
          }
        }
        else if ( lastRiddenHorse )
        {
          v33 = (float *)(*((int (__thiscall **)(TESChildCELL *))dword_B3B778->vtbl + 0x5D))(dword_B3B778);
          TESObjectREFR_SetPosition(lastRiddenHorse, *v33, v33[1], v33[2]);
          if ( v27 && TESObjectCELL_IsProcessLevel_LowHigh(v27, 0) )
          {
            v34 = *(float *)&dword_B3B778[0xA].vtbl;
            sub_4D8A10(*(float *)&dword_B3B778[0xA].vtbl);
          }
          else
          {
            v34 = flt_A32048;
            sub_4D89D0(flt_A32048);
          }
          sub_4DD4B0((unsigned __int8)lastRiddenHorse, st5_0, st6_0, v34, (Actor *)lastRiddenHorse, v27, v29);
          if ( TESObjectCELL_IsProcessLevel_LowHigh(v27, 1) )
            ((void (__thiscall *)(TESObjectREFR *, _DWORD))lastRiddenHorse->vtbl->Unk_5E)(lastRiddenHorse, 0);
          break;
        }
        v17 = 0;
      }
      else if ( lastRiddenHorse && (sub_4D8AF0((TESObjectCELL **)vtbl), WorldSpace == v32) )
      {
        v17 = 1;
      }
      else
      {
        retaddr = *(TESObjectREFR **)&retaddr->member.super.type;
      }
      if ( !retaddr )
        break;
      p_a4 = retaddr;
    }
  }
  else
  {
LABEL_57:
    if ( v45 )
    {
      sub_5F0410((TESObjectREFR *)this, (int)this);
      v35 = TESObjectREFR_GetParentCell(retaddr);
      v36 = TESObjectREFR_GetWorldSpace(retaddr);
      v37 = retaddr->vtbl->GetPos(retaddr);
      TESObjectREFR_SetPosition(lastRiddenHorse, *v37, v37[1], v37[2]);
      if ( v35 && TESObjectCELL_IsProcessLevel_LowHigh(v35, 0) )
      {
        sub_4D8A10(retaddr->member.rot.z);
        v38 = 0.0;
      }
      else
      {
        v38 = flt_A32048;
      }
      v43 = v38;
      sub_4D89D0(v43);
      sub_4DD4B0((unsigned __int8)v36, st5_0, st6_0, v38, (Actor *)lastRiddenHorse, v35, v36);
    }
  }
  v50 = 0xFFFFFFFF;
  sub_68AA10((int *)&a4);
}
