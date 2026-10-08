// HighProcess FLEE procedure: accepts current package type 0x10 FleePackage, resolves target/point away from target, and submits pathing. Calls movement helper with 0x201 for flee; helper preserves sneak/swim flags 0x0C00.
void __userpurge sub_634F60(HighProcess *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESChildCELL *a5)
{
  char *v7; // eax
  TESChildCELL *v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // edi
  char *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char *v16; // eax
  char *v17; // eax
  double v18; // st7
  TargetData *v19; // ecx
  TESWorldSpace *WorldSpace; // eax
  TESObjectREFR *v21; // ebx
  char v22; // cl
  void *vtbl; // ecx
  _BYTE *v24; // eax
  _BYTE *v25; // ebx
  int *SafeFloatPointer; // eax
  TESObjectREFR *v27; // ebx
  _BYTE *v28; // ecx
  double v29; // st7
  TESObjectREFR *v30; // ebx
  int *v31; // eax
  float *v32; // eax
  double v33; // st7
  char *v34; // ebx
  TESObjectREFR *v35; // ebx
  float *v36; // eax
  float *v37; // eax
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraDataVtbl *v39; // eax
  char *v40; // eax
  char *v41; // eax
  int v42; // eax
  TESObjectREFR *v43; // ebx
  BSExtraDataVtbl *v44; // eax
  char *v45; // eax
  float *v46; // eax
  float *v47; // eax
  double v48; // st7
  double v49; // st7
  double v50; // st7
  BSExtraDataVtbl *v51; // eax
  char *v52; // eax
  char *v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // eax
  unsigned int *v57; // eax
  unsigned int v58; // ecx
  unsigned int v59; // edx
  unsigned int v60; // eax
  TESWorldSpace *v61; // ebx
  _DWORD *v62; // eax
  _DWORD *v63; // eax
  PathLow *pathing; // ecx
  PlayerCharacter *v65; // [esp+4h] [ebp-64h]
  float Distance; // [esp+Ch] [ebp-5Ch]
  float v67; // [esp+Ch] [ebp-5Ch]
  int v68; // [esp+14h] [ebp-54h]
  float *v69; // [esp+1Ch] [ebp-4Ch]
  TESWorldSpace *v70; // [esp+1Ch] [ebp-4Ch]
  int v71; // [esp+20h] [ebp-48h]
  char v72; // [esp+33h] [ebp-35h]
  TESObjectCELL *ParentCell; // [esp+34h] [ebp-34h]
  TESObjectCELL *v74; // [esp+34h] [ebp-34h]
  TESWorldSpace *v75; // [esp+38h] [ebp-30h]
  TESObjectREFR *form; // [esp+3Ch] [ebp-2Ch]
  float v77; // [esp+3Ch] [ebp-2Ch]
  TESObjectREFR *v78; // [esp+40h] [ebp-28h]
  _BYTE *v79; // [esp+44h] [ebp-24h]
  float v80; // [esp+48h] [ebp-20h]
  ExtraTeleport *v81; // [esp+48h] [ebp-20h]
  float v82; // [esp+4Ch] [ebp-1Ch]
  double v83; // [esp+50h] [ebp-18h] BYREF
  unsigned int v84; // [esp+58h] [ebp-10h]
  int v85; // [esp+5Ch] [ebp-Ch] BYREF
  int v86; // [esp+60h] [ebp-8h]
  int v87; // [esp+64h] [ebp-4h]
  char v88; // [esp+6Ch] [ebp+4h]
  TESChildCELL *v89; // [esp+6Ch] [ebp+4h]
  float v90; // [esp+6Ch] [ebp+4h]
  float v91; // [esp+6Ch] [ebp+4h]
  float v92; // [esp+6Ch] [ebp+4h]

  if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->Unk_14)( /*0x634f6f*/
         a1,
         a4,
         a3,
         a2) )
  {
    v7 = (char *)a1->Unk_14(a1); /*0x634f81*/
    if ( !sub_419CF0(v7) ) /*0x634f8c*/
    {
      v16 = (char *)a1->Unk_14(a1); /*0x6350b9*/
      if ( !sub_419E50(v16) ) /*0x6350bd*/
      {
        v17 = (char *)a1->Unk_14(a1); /*0x6350d4*/
        MagicItem_LoadVFXModels(v17, 0); /*0x6350d8*/
      }
      return; /*0x6350e4*/
    }
    if ( a5 ) /*0x634f94*/
      v8 = a5 + 0x1A; /*0x634f96*/
    else
      v8 = 0; /*0x634f9b*/
    v9 = ((int (__thiscall *)(HighProcess *, TESChildCELL *))a1->Unk_14)(a1, v8); /*0x634fa8*/
    MagicCaster_CastMagicItem(&a5[0x17].vtbl, v9, 0, v71); /*0x634fae*/
    v10 = (char *)a1->Unk_14(a1); /*0x634fbd*/
    MagicItem_UnloadVFXModels(v10, 0); /*0x634fc1*/
    v71 = 0; /*0x634fcc*/
    ((void (__thiscall *)(HighProcess *))a1->Unk_15)(a1); /*0x634fd0*/
  }
  v11 = 0; /*0x634fdd*/
  v12 = (char *)a1->GetCurrentPackage(a1); /*0x634fdf*/
  if ( v12 ) /*0x634fe3*/
  {
    if ( v12[0x20] == 0x10 ) /*0x634fe9*/
    {
      v11 = (int)v12; /*0x634fed*/
      sub_626DE0(v12); /*0x634fef*/
    }
  }
  form = 0; /*0x634ffe*/
  v88 = 0; /*0x635006*/
  if ( !(*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0xCC))(a5) /*0x635021*/
    || *(_DWORD *)((*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0xCC))(a5) + 0x70) != 0xC )
  {
    if ( !v11 /*0x635095*/
      || !*(_DWORD *)(v11 + 0x58) && !*(_DWORD *)(v11 + 0x54)
      || sub_626E60((TESObjectREFR **)v11)
      && (LOBYTE(v13) = Actor_IsCreature((Actor *)a5),
          v68 = v13,
          Distance = TesObjectREF_GetDistance((TESObjectREFR *)a5, (TESObjectREFR *)reference, 0),
          v67 = COERCE_FLOAT((*((int (__thiscall **)(TESChildCELL *, int, _DWORD))a5->vtbl + 0xA1))(a5, 0x21, LODWORD(Distance))),
          v65 = reference,
          v14 = (*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x89))(a5),
          shouldActorFight(v14, (int)v65, 0, v67, 0, v68, 0, 0x64),
          !v15) )
    {
      ((void (__thiscall *)(HighProcess *, TESChildCELL *, int))a1->Unk_61)(a1, a5, 1); /*0x6350a5*/
      return; /*0x6350ae*/
    }
  }
  if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a5->vtbl + 0x97))(a5) ) /*0x6350f1*/
  {
    v18 = *(float *)(v11 + 0x4C); /*0x6350f7*/
    *(_BYTE *)(v11 + 0x50) = 0; /*0x6350fa*/
    *(float *)(v11 + 0x4C) = v18 - *(float *)(v11 + 0x4C); /*0x635101*/
    return; /*0x63510b*/
  }
  if ( v11 ) /*0x635110*/
  {
    v19 = *(TargetData **)(v11 + 0x28); /*0x635112*/
    if ( v19 ) /*0x635117*/
    {
      if ( sub_569E60(v19).form ) /*0x635119*/
        form = sub_569E60(*(TargetData **)(v11 + 0x28)).form; /*0x63512a*/
    }
  }
  if ( *(_BYTE *)(v11 + 0x65) && (*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x63))(a5) != 4 ) /*0x635143*/
  {
    a1->MountHorse(a1, (Actor *)a5); /*0x635151*/
    return; /*0x63515a*/
  }
  v79 = *(_BYTE **)(v11 + 0x5C); /*0x635162*/
  ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)a5); /*0x63516d*/
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a5); /*0x635171*/
  *(float *)&v83 = *(float *)(v11 + 0x4C); /*0x63517a*/
  v75 = WorldSpace; /*0x635180*/
  v21 = sub_628140((int *)v11, (TESObjectREFR *)a5); /*0x635189*/
  v78 = v21; /*0x63518d*/
  if ( !v21 ) /*0x635191*/
  {
    if ( form ) /*0x635197*/
    {
      if ( form->vtbl->IsActor(form) ) /*0x6351a5*/
      {
        v21 = form; /*0x6351ab*/
        v78 = form; /*0x6351af*/
      }
    }
  }
  v22 = *(_BYTE *)(v11 + 0x64); /*0x6351b5*/
  v85 = *(_DWORD *)(v11 + 0x40); /*0x6351bb*/
  v72 = v22; /*0x6351c2*/
  v86 = *(_DWORD *)(v11 + 0x44); /*0x6351c6*/
  LOBYTE(v80) = 0; /*0x6351cd*/
  v87 = *(_DWORD *)(v11 + 0x48); /*0x6351d2*/
  if ( v21 ) /*0x6351d6*/
  {
    vtbl = a5[0x16].vtbl; /*0x6351dc*/
    if ( vtbl ) /*0x6351e1*/
    {
      v24 = (_BYTE *)(*(int (__thiscall **)(void *))(*(_DWORD *)vtbl + 0x410))(vtbl); /*0x6351eb*/
      v25 = v24; /*0x6351ed*/
      if ( v24 ) /*0x6351f1*/
      {
        if ( sub_683A70(v24) ) /*0x6351f5*/
        {
          (*((void (__thiscall **)(TESChildCELL *, int))a5->vtbl + 0x60))(a5, 1); /*0x63520a*/
          *(_DWORD *)(v11 + 0x60) = 0; /*0x635211*/
          *(_DWORD *)(v11 + 0x5C) = 0; /*0x635214*/
          sub_626C10((_DWORD *)v11, (TESObjectREFR *)a5); /*0x635217*/
          sub_683A80(v25, 0); /*0x635220*/
          ((void (__thiscall *)(HighProcess *, TESChildCELL *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))a1->Unk_F6)( /*0x635251*/
            a1,
            a5,
            *(_DWORD *)(v11 + 0x40),
            *(_DWORD *)(v11 + 0x44),
            *(_DWORD *)(v11 + 0x48),
            ParentCell,
            v75);
          return; /*0x63525a*/
        }
      }
    }
    if ( ParentCell ) /*0x635262*/
    {
      v82 = flt_A32048; /*0x635274*/
      if ( form ) /*0x635278*/
      {
        if ( !form->vtbl->IsDead(form, 0) && (form->member.super.flags & 0x800) == 0 ) /*0x635294*/
          v82 = TesObjectREF_GetDistance((TESObjectREFR *)a5, v78, 0); /*0x6352a4*/
      }
      if ( TESObjectCELL_IsInterior(ParentCell) ) /*0x6352ac*/
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&MEMORY[0xB37030]); /*0x6352ba*/
        v88 = 1; /*0x6352bf*/
      }
      else
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&MEMORY[0xB37028]); /*0x6352cb*/
      }
      v27 = *(TESObjectREFR **)(v11 + 0x60); /*0x6352d0*/
      v77 = *(float *)SafeFloatPointer; /*0x6352d7*/
      if ( v27 ) /*0x6352db*/
      {
        if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v27->vtbl[1].GetSleepState)(v27, 1) /*0x63530e*/
          || v27->vtbl->IsDead(v27, 0)
          || (v27->member.super.flags & 0x800) != 0
          || !IsWeaponReady(v27) )
        {
          v27 = 0; /*0x635317*/
          *(_DWORD *)(v11 + 0x60) = 0; /*0x635319*/
        }
      }
      v28 = *(_BYTE **)(v11 + 0x5C); /*0x635320*/
      a3 = v77; /*0x635323*/
      v79 = v28; /*0x635327*/
      if ( v77 > (double)v82 && !v28 && !v27 || !v72 && 0.0 == *(float *)&v83 && *(_BYTE *)(v11 + 0x3C) ) /*0x635358*/
      {
        if ( a1->unk088 > 0.0 ) /*0x63536d*/
        {
          v29 = a1->unk088 - MEMORY[0xB33E9C]; /*0x635382*/
        }
        else
        {
          v29 = flt_A417B4; /*0x63536f*/
          LOBYTE(v80) = 1; /*0x635375*/
        }
        a1->unk088 = v29; /*0x635388*/
        if ( !*(_BYTE *)(v11 + 0x3C) ) /*0x635394*/
        {
          sub_5EAE70((Actor *)a5, (int)v27, v11, v71); /*0x6354af*/
          return; /*0x6354bb*/
        }
        if ( ((double (__thiscall *)(TESChildCELL *))*((_DWORD *)a5->vtbl + 0x94))(a5) == *(float *)&SrcStr ) /*0x6353af*/
          sub_627FF0((_DWORD *)v11, (Actor *)a5); /*0x6353b4*/
        v30 = *(TESObjectREFR **)(v11 + 0x60); /*0x6353b9*/
        if ( v30 == (TESObjectREFR *)reference ) /*0x6353c2*/
        {
          *(_DWORD *)(v11 + 0x60) = 0; /*0x6353c4*/
        }
        else if ( v30 ) /*0x6353cf*/
        {
          v32 = v30->vtbl->GetPos(*(_DWORD *)(v11 + 0x60)); /*0x635416*/
          v85 = *(_DWORD *)v32; /*0x63541a*/
          v86 = *((_DWORD *)v32 + 1); /*0x635421*/
          v87 = *((_DWORD *)v32 + 2); /*0x63542a*/
          ParentCell = Shared_GetDwordAtOffset40(v30); /*0x635435*/
          v75 = TESObjectREFR_GetWorldSpace(v30); /*0x63543e*/
LABEL_72:
          if ( Shared_GetDwordAtOffset40((TESObjectREFR *)a5) != ParentCell ) /*0x63544f*/
            TESObjectREFR_GetWorldSpace((TESObjectREFR *)a5); /*0x635453*/
          if ( a1->unk0D0 /*0x635490*/
            && !((unsigned __int8 (__thiscall *)(HighProcess *, TESChildCELL *, int, int, int, TESObjectCELL *, TESWorldSpace *))a1->Unk_F6)(
                  a1,
                  a5,
                  v85,
                  v86,
                  v87,
                  ParentCell,
                  v75) )
          {
            return; /*0x635490*/
          }
          v33 = *(float *)(v11 + 0x4C) - *(float *)(v11 + 0x4C); /*0x63549c*/
          v79 = *(_BYTE **)(v11 + 0x5C); /*0x63549f*/
          *(_BYTE *)(v11 + 0x50) = 0; /*0x6354a3*/
          *(float *)(v11 + 0x4C) = v33; /*0x6354a7*/
          goto LABEL_92; /*0x6354aa*/
        }
        if ( v88 ) /*0x6353e8*/
          v31 = (int *)sub_627680((TESPackage *)v11, (int)&v83, a5, (int)v78, v80); /*0x6353ea*/
        else
          v31 = (int *)sub_6279A0((TESPackage *)v11, (int)&v83, a5, (int)v78, v80); /*0x6353f1*/
        v85 = *v31; /*0x6353f8*/
        v86 = v31[1]; /*0x6353ff*/
        v87 = v31[2]; /*0x635406*/
        goto LABEL_72; /*0x63540a*/
      }
      if ( *(_BYTE *)(v11 + 0x3C) ) /*0x6354be*/
      {
        if ( v27 ) /*0x635538*/
        {
          v37 = v27->vtbl->GetPos(v27); /*0x635544*/
          v85 = *(_DWORD *)v37; /*0x635548*/
          v86 = *((_DWORD *)v37 + 1); /*0x63554f*/
          v87 = *((_DWORD *)v37 + 2); /*0x635558*/
          ParentCell = Shared_GetDwordAtOffset40(v27); /*0x635563*/
          v75 = TESObjectREFR_GetWorldSpace(v27); /*0x63556c*/
        }
        else
        {
          if ( v28 ) /*0x635574*/
          {
            TeleportExtraData = TESObjectREFR_GetTeleportData(v28); /*0x63557c*/
            if ( TeleportExtraData ) /*0x635583*/
            {
              v39 = TeleportData_GetLinkedDoor(&TeleportExtraData->super); /*0x635587*/
              v40 = (char *)TESObjectREFR_GetTeleportData(v39); /*0x63558e*/
              v41 = EmbeddedList_GetHead(v40); /*0x635595*/
            }
            else
            {
              v41 = (char *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v79 + 0x174))(v79); /*0x6355b6*/
            }
            v85 = *(_DWORD *)v41; /*0x63559c*/
            v86 = *((_DWORD *)v41 + 1); /*0x6355a3*/
            v42 = *((_DWORD *)v41 + 2); /*0x6355a7*/
          }
          else
          {
            v85 = *(_DWORD *)(v11 + 0x40); /*0x6355cd*/
            v86 = *(_DWORD *)(v11 + 0x44); /*0x6355d4*/
            v42 = *(_DWORD *)(v11 + 0x48); /*0x6355d8*/
          }
          v87 = v42; /*0x6355db*/
        }
      }
      else
      {
        v34 = *(char **)(v11 + 0x24); /*0x6354c6*/
        if ( sub_569740(v34) == 1 ) /*0x6354d5*/
        {
          ParentCell = (TESObjectCELL *)sub_569800(v34); /*0x6354dc*/
        }
        else if ( !sub_569740(v34) ) /*0x6354e5*/
        {
          v35 = (TESObjectREFR *)sub_5697E0(v34); /*0x6354f9*/
          v36 = v35->vtbl->GetPos(v35); /*0x635505*/
          v85 = *(_DWORD *)v36; /*0x635509*/
          v86 = *((_DWORD *)v36 + 1); /*0x635510*/
          v87 = *((_DWORD *)v36 + 2); /*0x635519*/
          ParentCell = Shared_GetDwordAtOffset40(v35); /*0x635524*/
          v75 = TESObjectREFR_GetWorldSpace(v35); /*0x63552d*/
        }
      }
    }
LABEL_92:
    if ( a1->unk0D0 ) /*0x6355df*/
    {
      v89 = *(TESChildCELL **)(v11 + 0x60); /*0x6355f5*/
      if ( v89 == (TESChildCELL *)reference ) /*0x6355f9*/
      {
        v89 = 0; /*0x6355fd*/
        *(_DWORD *)(v11 + 0x60) = 0; /*0x635601*/
      }
      v43 = *(TESObjectREFR **)(v11 + 0x5C); /*0x635604*/
      if ( v43 ) /*0x635609*/
      {
        v90 = flt_A5A04C; /*0x635617*/
        v81 = TESObjectREFR_GetTeleportData(*(_BYTE **)(v11 + 0x5C)); /*0x635622*/
        if ( v81 ) /*0x635626*/
        {
          v69 = (float *)(*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x5D))(a5); /*0x635634*/
          v44 = TeleportData_GetLinkedDoor(&v81->super); /*0x63563e*/
          v45 = (char *)TESObjectREFR_GetTeleportData(v44); /*0x635645*/
          v46 = (float *)EmbeddedList_GetHead(v45); /*0x63564c*/
          v47 = sub_4121A0(v46, (float *)&v83, v69); /*0x635653*/
          v90 = NiPoint3_Length(v47); /*0x63565f*/
        }
        v83 = v90; /*0x63566a*/
        v48 = TesObjectREF_GetDistance((TESObjectREFR *)a5, v43, 0); /*0x635670*/
        if ( v48 <= v83 ) /*0x63567e*/
          v49 = TesObjectREF_GetDistance((TESObjectREFR *)a5, v43, 0); /*0x63568b*/
        else
          v49 = v90; /*0x635680*/
        v91 = v49; /*0x635690*/
        if ( flt_A71EB4 > (double)v91 ) /*0x6356a3*/
        {
          v50 = ((double (__thiscall *)(HighProcess *, TESChildCELL *))a1->Unk_164)(a1, a5); /*0x6356b1*/
          *(_DWORD *)(v11 + 0x5C) = 0; /*0x6356bc*/
          ActivateRef(v43, a2, a3, v50, (TESObjectREFR *)a5, 0, 0, 1); /*0x6356c3*/
          a1->unk088 = flt_A417B4; /*0x6356ce*/
          return; /*0x6356db*/
        }
        if ( v81 ) /*0x6356e3*/
        {
          v51 = TeleportData_GetLinkedDoor(&v81->super); /*0x6356e9*/
          v52 = (char *)TESObjectREFR_GetTeleportData(v51); /*0x6356f0*/
          v53 = EmbeddedList_GetHead(v52); /*0x6356f7*/
        }
        else
        {
          v53 = (char *)v43->vtbl->GetPos(v43); /*0x635708*/
        }
        v54 = *(_DWORD *)v53; /*0x63570a*/
        v55 = *((_DWORD *)v53 + 1); /*0x63570c*/
        v56 = *((_DWORD *)v53 + 2); /*0x63570f*/
        v83 = COERCE_DOUBLE(__PAIR64__(v55, v54)); /*0x635712*/
        v84 = v56; /*0x635718*/
        v74 = Shared_GetDwordAtOffset40(v43); /*0x635727*/
        v70 = TESObjectREFR_GetWorldSpace(v43); /*0x635730*/
        goto LABEL_112; /*0x635731*/
      }
      if ( v89 && TesObjectREF_GetDistance((TESObjectREFR *)a5, (TESObjectREFR *)v89, 0) > flt_A71EB4 ) /*0x635757*/
      {
        v57 = (unsigned int *)(*((int (__thiscall **)(TESChildCELL *))v89->vtbl + 0x5D))(v89); /*0x635767*/
        v58 = *v57; /*0x635769*/
        v59 = v57[1]; /*0x63576b*/
        v60 = v57[2]; /*0x63576e*/
        v83 = COERCE_DOUBLE(__PAIR64__(v59, v58)); /*0x635771*/
        v84 = v60; /*0x63577b*/
        v74 = Shared_GetDwordAtOffset40((TESObjectREFR *)v89); /*0x635786*/
        v61 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v89); /*0x635791*/
        if ( Shared_GetDwordAtOffset40((TESObjectREFR *)a5) != v74 ) /*0x63579c*/
          TESObjectREFR_GetWorldSpace((TESObjectREFR *)a5); /*0x6357a0*/
        v70 = v61; /*0x6357a5*/
LABEL_112:
        if ( !((unsigned __int8 (__thiscall *)(HighProcess *, TESChildCELL *, _DWORD, _DWORD, unsigned int, TESObjectCELL *, TESWorldSpace *))a1->Unk_F6)( /*0x6357d0*/
                a1,
                a5,
                LODWORD(v83),
                HIDWORD(v83),
                v84,
                v74,
                v70) )
          *(_DWORD *)(v11 + 0x60) = 0; /*0x6357da*/
        return; /*0x6357e8*/
      }
      v62 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x59))(a5); /*0x6357f5*/
      if ( v62 ) /*0x6357f9*/
      {
        if ( ActorAnimData_IsIdleInactive(v62) ) /*0x6357fd*/
          a1->Unk_12(a1, (UInt32)a5); /*0x63580f*/
      }
      *(_BYTE *)(v11 + 0x50) = 1; /*0x635811*/
      *(float *)(v11 + 0x4C) = MEMORY[0xB33E9C] + *(float *)(v11 + 0x4C); /*0x63581e*/
    }
    else
    {
      v63 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x59))(a5); /*0x635835*/
      if ( v63 ) /*0x635839*/
      {
        if ( !ActorAnimData_IsIdleInactive(v63) ) /*0x63583d*/
          a1->Unk_164(a1, (Actor *)a5); /*0x635852*/
      }
      ((void (__thiscall *)(HighProcess *, TESChildCELL *, int))a1->Unk_8D)(a1, a5, 0x201); /*0x635865*/
      v92 = flt_A417B4; /*0x635872*/
      if ( v79 ) /*0x635876*/
        v92 = flt_A5793C; /*0x63587e*/
      ((void (__thiscall *)(HighProcess *, TESChildCELL *, int *, TESObjectCELL *, TESWorldSpace *, _DWORD))a1->Unk_104)( /*0x6358a5*/
        a1,
        a5,
        &v85,
        ParentCell,
        v75,
        LODWORD(v92));
      pathing = a1->pathing; /*0x6358a7*/
      if ( pathing ) /*0x6358ac*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(PathLow *))(*(_DWORD *)pathing + 0x2C))(pathing) ) /*0x6358b3*/
          ((void (__thiscall *)(HighProcess *, TESChildCELL *))a1->Unk_64)(a1, a5); /*0x6358c5*/
      }
    }
  }
}
