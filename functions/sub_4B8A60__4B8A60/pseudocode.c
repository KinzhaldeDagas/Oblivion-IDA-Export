char __userpurge sub_4B8A60@<al>(
        TESObjectDOOR *a1@<ecx>,
        double a2@<st7>,
        double a3@<st4>,
        double a4@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        double st2_0@<st5>,
        double st1_0@<st6>,
        TESObjectREFR *a10,
        TESObjectREFR *a11,
        int a12,
        int a13,
        int a14)
{
  ExtraTeleport *TeleportExtraData; // ebp
  BSExtraData *v16; // eax
  TESObjectREFR *v17; // eax
  const char *v18; // ecx
  Actor *v20; // eax
  PlayerCharacter *v21; // edi
  TESObjectCELL *v22; // ebx
  BSExtraData *v23; // ebp
  char v24; // bl
  TESObjectCELL *ParentCell; // eax
  int v26; // eax
  TESObjectCELL *v27; // eax
  int v28; // eax
  int v29; // eax
  char v30; // al
  char v31; // al
  char v32; // al
  int v33; // eax
  char v34; // al
  int v35; // eax
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // eax
  const char *v39; // eax
  int v40; // eax
  _DWORD *sound; // ebx
  int *v42; // eax
  int *v43; // ebp
  float *v44; // eax
  int v45; // eax
  int v46; // eax
  ActorAnimData *v47; // eax
  _DWORD *v48; // eax
  PlayerCharacter *v49; // ecx
  int *v50; // eax
  _DWORD *v51; // eax
  NiNode *v52; // eax
  NiNode *v53; // eax
  NiNode *v54; // eax
  int v55; // eax
  NiObject *v56; // eax
  NiObject *v57; // edi
  int v58; // ebx
  int v59; // eax
  int v60; // ebp
  char v61; // al
  int *v62; // ebp
  float *v63; // eax
  TESObjectCELL *v65; // ebp
  float *v66; // eax
  _BYTE *v68; // eax
  float v70; // [esp+4h] [ebp-154h]
  float v71; // [esp+4h] [ebp-154h]
  float v72; // [esp+4h] [ebp-154h]
  UInt32 v73; // [esp+8h] [ebp-150h]
  float v74; // [esp+8h] [ebp-150h]
  float v75; // [esp+8h] [ebp-150h]
  float v76; // [esp+8h] [ebp-150h]
  float v77; // [esp+8h] [ebp-150h]
  float v78; // [esp+8h] [ebp-150h]
  UInt32 v79; // [esp+Ch] [ebp-14Ch]
  float v80; // [esp+Ch] [ebp-14Ch]
  float v81; // [esp+Ch] [ebp-14Ch]
  float v82; // [esp+Ch] [ebp-14Ch]
  float duration; // [esp+10h] [ebp-148h]
  float durationa; // [esp+10h] [ebp-148h]
  float durationb; // [esp+10h] [ebp-148h]
  float durationc; // [esp+10h] [ebp-148h]
  TESWorldSpace *v87; // [esp+1Ch] [ebp-13Ch]
  float *v88; // [esp+24h] [ebp-134h]
  LowProcess *process; // [esp+28h] [ebp-130h]
  int v90; // [esp+2Ch] [ebp-12Ch]
  ExtraTeleport *v91; // [esp+30h] [ebp-128h]
  ExtraTeleport *v92; // [esp+34h] [ebp-124h]
  int v93; // [esp+38h] [ebp-120h]
  int v94; // [esp+3Ch] [ebp-11Ch]
  int v95; // [esp+3Ch] [ebp-11Ch]
  int v96; // [esp+40h] [ebp-118h]
  int v97; // [esp+40h] [ebp-118h]
  TESObjectREFR *v98; // [esp+44h] [ebp-114h]
  TESChildCELL *v99; // [esp+44h] [ebp-114h]
  char v100[4]; // [esp+48h] [ebp-110h] BYREF
  Concurrency::details::SchedulerBase *v101; // [esp+4Ch] [ebp-10Ch]
  char v102[4]; // [esp+50h] [ebp-108h] BYREF
  char v103[256]; // [esp+54h] [ebp-104h] BYREF

  v101 = (Concurrency::details::SchedulerBase *)a11;
  if ( !a10 || (a10->member.super.flags & 0x2000) != 0 )
    return 0;
  TeleportExtraData = GetTeleportExtraData(a10);
  v91 = TeleportExtraData;
  v16 = sub_4D7740(a10);
  v90 = (int)v16;
  if ( !TeleportExtraData && !v16 )
    goto LABEL_161;
  if ( a11 && a11->vtbl->IsActor(a11) && ((int (__thiscall *)(TESObjectREFR *))a11->vtbl[2].super.Unk_0C)(a11) )
    return 0;
  if ( !TeleportExtraData )
  {
LABEL_161:
    if ( a1->super.randomTeleport.next || a1->super.randomTeleport.destination )
    {
      v17 = (TESObjectREFR *)sub_4B86C0((int)a1, a5, a6, a7, a10, a11);
      if ( !v17 )
      {
        __asm { fld     dword ptr ds:0A30634h }
        v18 = (const char *)dword_B35B34;
        __asm { fstp    [esp+148h+duration]; duration }
        v79 = (unsigned __int8)v17;
        v73 = (unsigned __int8)v17;
LABEL_13:
        GameUI_QueueMessage(v18, v73, v79, duration);
        return 0;
      }
      LinkDoors(a10, v17);
      v91 = GetTeleportExtraData(a10);
      if ( !v91 )
        return 0;
    }
  }
  v20 = (Actor *)OblivionDynamicCast(
                   a11,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  v21 = (PlayerCharacter *)v20;
  if ( v20 )
    process = v20->members.super.process;
  else
    process = 0;
  if ( !v20 )
    goto LABEL_107;
  if ( !Actor::CanUSeDoor_(v20)
    || v21->super.super.super.process->GetFurniture(v21->super.super.super.process)
    && v21->vtbl->super.super.super.GetSleepState((TESObjectREFR *)v21) )
  {
    return 0;
  }
  if ( v21 == TESDataHandler_g_PlayerRef )
    TESDataHandler_g_PlayerRef->unk110 = 0;
  HIBYTE(v88) = 0;
  v92 = GetTeleportExtraData(a10);
  v22 = 0;
  v23 = sub_4D7740(a10);
  if ( !v23 )
  {
    v24 = 1;
    goto LABEL_56;
  }
  if ( v92 )
  {
    v22 = sub_42B460((TESObjectREFR **)v92);
    if ( v21 != TESDataHandler_g_PlayerRef )
    {
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)v21) )
      {
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v21);
        TESObjectCELL_GetOwner(ParentCell);
        if ( v26 )
        {
          v27 = TESObjectREFR_GetParentCell((TESObjectREFR *)v21);
          if ( sub_4CAAC0(v27, (TESObjectREFR *)v21) )
          {
            if ( v22 )
            {
              TESObjectCELL_GetOwner(v22);
              if ( v28 )
              {
                if ( !sub_4CAAC0(v22, (TESObjectREFR *)v21) )
                  goto LABEL_55;
              }
            }
            goto LABEL_35;
          }
        }
      }
    }
  }
  if ( TESOBjectREFR_IsOwnedBy(a10, v21, 1) )
  {
    if ( v21 == TESDataHandler_g_PlayerRef )
    {
      v29 = *(_DWORD *)&v23->members.type;
      if ( v29 )
      {
        a7 = sub_5E4A00(v29, 0, 1, 0, v102);
        if ( v30 )
        {
          HIBYTE(v88) = 0;
          goto LABEL_55;
        }
      }
    }
LABEL_35:
    HIBYTE(v88) = 1;
LABEL_55:
    v24 = HIBYTE(v88);
    goto LABEL_56;
  }
  if ( sub_5E6C60((Actor *)v21) && sub_5E6BA0((Actor *)v21) )
  {
    HIBYTE(v88) = 1;
    goto LABEL_55;
  }
  if ( v21 == TESDataHandler_g_PlayerRef
    && TESDataHandler_g_PlayerRef->vtbl->super.IsTresspassing((Actor *)TESDataHandler_g_PlayerRef) )
  {
    if ( !v92 || LOBYTE(v23->vtbl) == 0x64 )
      goto LABEL_55;
    if ( v22 && TESObjectCELL_IsInterior(v22) )
    {
      if ( sub_4C9830(v22) )
        HIBYTE(v88) = 1;
      goto LABEL_55;
    }
    goto LABEL_35;
  }
  if ( !sub_5E3220(v21) )
    goto LABEL_55;
  if ( (PlayerCharacter *)v21->super.super.super.process->GetUnk02C(v21->super.super.super.process) != TESDataHandler_g_PlayerRef )
    goto LABEL_55;
  v24 = 1;
  if ( !v21->vtbl->super.IsTresspassing((Actor *)v21) )
    goto LABEL_55;
LABEL_56:
  if ( v90 && sub_428E70((_BYTE *)v90) && !v24 )
  {
    a7 = sub_5E4A00(TESDataHandler_g_Lockpick, 0, 1, 0, v100);
    LOBYTE(v22) = v31;
    if ( !v31 )
    {
      a7 = sub_5E4A00(TESDataHandler_g_SkeletonKey, 0, 1, 0, v100);
      LOBYTE(v22) = v32;
    }
    v33 = *(_DWORD *)(v90 + 4);
    if ( v33 )
    {
      if ( dword_B35B20 || (a7 = sub_5E4A00(v33, 0, 1, 0, v100), v34) )
      {
        if ( v21 != TESDataHandler_g_PlayerRef )
          goto LABEL_107;
        if ( !dword_B35B20 )
        {
          dword_B35B20 = (int)a10;
          v38 = (_DWORD *)sub_4D77D0((int)a10);
          if ( v38 )
          {
            sub_428E90(v38);
            sub_4D9070(a10);
          }
          v39 = *(const char **)(*(_DWORD *)(v90 + 4) + 0x28);
          if ( !v39 )
            v39 = EmptyString;
          _sprintf(v103, "%s%s.", (const char *)dword_B386A0, v39);
          ShowUIMessageBox(sOk, v90, a5, a6, a7, v103, (int)sub_4B6D20, 1, (const char *)sOk, 0);
          return 0;
        }
        goto LABEL_103;
      }
      if ( !(_BYTE)v22 )
      {
        if ( v21 == TESDataHandler_g_PlayerRef )
        {
          sub_429990((char *)v90);
          __asm { fld     dword ptr ds:0A379B4h }
          __asm { fstp    [esp+148h+duration] }
          if ( v35 < 0x64 )
            GameUI_QueueMessage((const char *)dword_B38698, 0, 1u, durationa);
          else
            GameUI_QueueMessage((const char *)dword_B38690, 0, 1u, durationa);
        }
        return 0;
      }
      if ( v21 == TESDataHandler_g_PlayerRef )
      {
        v36 = sub_4D77D0((int)a10);
        if ( v36 )
        {
          sub_429990(*(char **)(v36 + 0xC));
          if ( v37 >= 0x64 )
          {
            __asm { fld     dword ptr ds:0A379B4h }
            v18 = (const char *)dword_B38690;
            __asm { fstp    [esp+148h+duration] }
            v79 = 1;
            v73 = 0;
            goto LABEL_13;
          }
        }
LABEL_73:
        sub_57B6A0((int)v22, v90, (int)v21, (int)a10, a5, a6, a7, a10);
        return 0;
      }
    }
    else
    {
      if ( !(_BYTE)v22 )
      {
        if ( v21 == TESDataHandler_g_PlayerRef )
        {
          sub_429990((char *)v90);
          __asm { fld     dword ptr ds:0A30634h }
          __asm { fstp    [esp+150h+var_150]; float }
          if ( v40 < 0x64 )
            QueueUIMessage(v90, a5, a7, dword_B386A8, v74, 0, 0);
          else
            QueueUIMessage(v90, a5, a7, dword_B38690, v74, 0, 0);
        }
        sound = OSGlobals->sound;
        if ( !sound )
          return 0;
        if ( v21 == TESDataHandler_g_PlayerRef )
        {
          v42 = PlaySound___(sound, "DRSLocked", 0x121, 1);
        }
        else
        {
          if ( Actor::GetProcessLevel((Actor *)v21) )
            return 0;
          v42 = PlaySound___(sound, "DRSLocked", 0x102, 1);
        }
        v43 = v42;
        if ( v42 )
        {
          if ( v21 != TESDataHandler_g_PlayerRef )
          {
            v44 = a10->vtbl->GetPos(a10);
            v99 = *((TESChildCELL **)v44 + 2);
            __asm
            {
              fld     [esp+150h+var_114]
              fstp    [esp+150h+duration]; float
            }
            v96 = *((_DWORD *)v44 + 1);
            __asm { fld     [esp+150h+var_118] }
            v94 = *(_DWORD *)v44;
            __asm { fstp    [esp+150h+var_14C]; float }
            __asm
            {
              fld     [esp+150h+var_11C]
              fstp    [esp+150h+var_150]; float
            }
            sub_6B7360(v43, v75, v80, durationb);
          }
          sub_6B7190(v43, 0);
          sub_6B73E0(v43);
          FormHeapFree((unsigned int)v43);
        }
        return 0;
      }
      if ( v21 == TESDataHandler_g_PlayerRef )
      {
        v45 = sub_4D77D0((int)a10);
        if ( v45 )
        {
          sub_429990(*(char **)(v45 + 0xC));
          if ( v46 >= 0x64 )
          {
            __asm { fld     dword ptr ds:0A379B4h }
            __asm { fstp    [esp+148h+duration]; duration }
            GameUI_QueueMessage((const char *)dword_B38690, 0, 1u, durationc);
            sub_57DE50(0x13);
            return 0;
          }
        }
        goto LABEL_73;
      }
    }
    v47 = v21->vtbl->super.super.super.GetAnimData((TESObjectREFR *)v21);
    if ( v47 )
      sub_475440(v47, 1, 0);
    sub_520F00(TESDataHandler_g_Lockpick);
    sub_520F40(1);
    sub_520F20(1);
    process->Unk_12(process, (UInt32)v21);
    sub_520F00(0);
    sub_520F40(0);
    sub_520F20(0xFFFFFFFF);
    v48 = (_DWORD *)sub_4D77D0((int)a10);
    if ( v48 )
    {
      sub_428E90(v48);
      sub_4D9070(a10);
    }
  }
LABEL_103:
  if ( TESDataHandler_g_PlayerRef == v21 && PlayerCharacter::IsJailed(TESDataHandler_g_PlayerRef) )
  {
    v49 = TESDataHandler_g_PlayerRef;
    if ( !v90 )
    {
      if ( !v49->isInSEWorld )
      {
        sub_65D670((int)v49, (int)v21, a5, a6, a7, 1);
        __asm { fild    dword ptr ds:0B36768h }
        __asm { fstp    [esp+14Ch+var_14C] }
        ((void (__stdcall *)(_DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_95)(LODWORD(v81));
      }
LABEL_119:
      v51 = (_DWORD *)sub_4D77D0((int)a10);
      if ( v51 )
      {
        sub_428E90(v51);
        sub_4D9070(a10);
      }
      if ( a10->vtbl->GetNiNode(a10)
        && (v52 = a10->vtbl->GetNiNode(a10), sub_405790((int)v52, 0))
        && (v53 = a10->vtbl->GetNiNode(a10), *(_DWORD *)(sub_405790((int)v53, 0) + 0xC)) )
      {
        v54 = a10->vtbl->GetNiNode(a10);
        v55 = sub_405790((int)v54, 0);
        v56 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v55 + 0xC));
        v57 = v56;
        if ( v56 )
        {
          v58 = sub_4715A0(v56, (int)"Open");
          v59 = sub_4715A0(v57, (int)"Close");
          v60 = v59;
          if ( v58 )
          {
            if ( v59 && *(_DWORD *)(v58 + 0x44) != 1 && *(_DWORD *)(v59 + 0x44) != 1 )
            {
              sub_4D8260(4);
              if ( v61 )
              {
                sub_4D82E0(a10, 4);
              }
              else
              {
                v60 = v58;
                sub_4D8270(a10, 4);
              }
              __asm { fldz }
              LOWORD(v57[1].__vftable) |= 8u;
              __asm { fstp    [esp+154h+var_150]; float }
              __asm
              {
                fld1
                fstp    [esp+154h+var_154]; float
              }
              sub_470B20((_DWORD *)v60, 0, 0, v72, v78, 0);
              __asm
              {
                fld     dword ptr ds:0A7DEB4h
                fchs
              }
              __asm { fstp    dword ptr [ebp+48h] }
              *(float *)(v60 + 0x48) = _ET1;
              return 1;
            }
          }
        }
      }
      else
      {
        if ( (unsigned int)(sub_4DE660(a10) - 1) <= 1 )
        {
          sub_4D82E0(a10, 4);
          return 1;
        }
        sub_4D8270(a10, 4);
      }
      return 1;
    }
    v49->JailedState = 0;
    sub_65D670((int)TESDataHandler_g_PlayerRef, (int)v21, a5, a6, a7, 0);
    LOBYTE(TESDataHandler_g_PlayerRef->unk200) = 0;
  }
LABEL_107:
  if ( !v90 || !v21 )
    goto LABEL_119;
  if ( !PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef)
    && !(*(int (**)(void))(*(_DWORD *)v88 + 8))()
    && (*(int (**)(void))(*(_DWORD *)v88 + 0x47C))() != 4 )
  {
    if ( v92[5].super.members.next )
    {
      if ( a10->vtbl->GetNiNode(a10) )
      {
        if ( OSGlobals->sound )
        {
          if ( v21 == TESDataHandler_g_PlayerRef )
            a7 = OSGLobals_PlaySound(v92[5].super.members.next[1].vtbl, 0x121, 0);
          else
            a7 = OSGLobals_PlaySound(v92[5].super.members.next[1].vtbl, 0x102, 0);
          v62 = v50;
          if ( v50 )
          {
            if ( v21 != TESDataHandler_g_PlayerRef )
            {
              v63 = a10->vtbl->GetPos(a10);
              v97 = *((_DWORD *)v63 + 2);
              __asm
              {
                fld     [esp+154h+var_118]
                fstp    [esp+154h+var_14C]; float
              }
              v95 = *((_DWORD *)v63 + 1);
              __asm { fld     [esp+154h+var_11C] }
              v93 = *(_DWORD *)v63;
              __asm { fstp    [esp+154h+var_150]; float }
              __asm
              {
                fld     [esp+154h+var_120]
                fstp    [esp+154h+var_154]; float
              }
              sub_6B7360(v62, v70, v76, v82);
            }
            sub_6B7190(v62, 0);
            sub_6B73E0(v62);
            FormHeapFree((unsigned int)v62);
          }
        }
      }
    }
    sub_633080((int)v88, a5, a7, (TESObjectREFR *)v21, (int)a10, 1);
    return 0;
  }
  if ( (*(int (**)(void))(*(_DWORD *)v88 + 8))() <= 1 )
  {
    __asm
    {
      fldz
      fstp    dword ptr [ebp+0BCh]
    }
    v88[0x2F] = _ET1;
  }
  v65 = sub_42B460((TESObjectREFR **)v90);
  sub_42B470((TESObjectREFR **)v90);
  if ( (v92[6].super.members.type & 1) != 0 )
  {
    if ( sub_4D8E40(v21) )
    {
      if ( (TESObjectREFR *)sub_4D8E40(v21) != a10 )
        sub_4D8E60((int *)v21, 0);
    }
    else
    {
      sub_4D8E60((int *)v21, (int)a10);
    }
  }
  v21->super.super.super.process->Unk_35(v21->super.super.super.process, (UInt32)a10);
  if ( v21 == TESDataHandler_g_PlayerRef )
  {
    TESDataHandler_g_PlayerRef->lastActivatedLoadDoor = a10;
    TESDataHandler_g_PlayerRef->isMovingToNewSpace = 1;
    sub_663F00();
    sub_4B7B40((int)v91, a2, a3, a4, a5, a6, a7, st1_0, st2_0, a10);
    TESDataHandler_g_PlayerRef->isMovingToNewSpace = 0;
    return 1;
  }
  else
  {
    v66 = (float *)sub_6899C0((char *)v90);
    TESObjectREFR_SetPosition(v98, *v66, v66[1], v66[2]);
    if ( v65 && TESObjectCELL_IsProcessLevel_LowHigh(v65, 0) )
    {
      _EAX = sub_42B430((char *)v90);
      __asm { fld     dword ptr [eax+8] }
      __asm { fstp    [esp+150h+var_150]; float }
      sub_4D8A10(v77);
      __asm { fldz }
    }
    else
    {
      __asm { fld     dword ptr ds:0A32048h }
    }
    __asm { fstp    [esp+154h+var_154]; float }
    sub_4D89D0(v71);
    v68 = OblivionDynamicCast(
            v98,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0);
    if ( v68 )
      sub_5E1360(v68, 0);
    sub_4DD4B0(v90, a5, a6, a7, (Actor *)v98, v65, v87);
    return 1;
  }
}
