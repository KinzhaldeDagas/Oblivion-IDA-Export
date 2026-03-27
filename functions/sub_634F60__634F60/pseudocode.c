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
  TESObjectREFRVtbl *vtbl; // ecx
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
  int *v41; // eax
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
  float *v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // eax
  unsigned int *v57; // eax
  unsigned int v58; // ecx
  unsigned int v59; // edx
  unsigned int v60; // eax
  TESWorldSpace *v61; // ebx
  ActorAnimData *v62; // eax
  ActorAnimData *v63; // eax
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

  if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->Unk_14)(
         a1,
         a4,
         a3,
         a2) )
  {
    v7 = (char *)a1->Unk_14(a1);
    if ( !sub_419CF0(v7) )
    {
      v16 = (char *)a1->Unk_14(a1);
      if ( !sub_419E50(v16) )
      {
        v17 = (char *)a1->Unk_14(a1);
        sub_41A610(v17, 0);
      }
      return;
    }
    if ( a5 )
      v8 = a5 + 0x1A;
    else
      v8 = 0;
    v9 = ((int (__thiscall *)(HighProcess *, TESChildCELL *))a1->Unk_14)(a1, v8);
    MagicCaster_CastMagicItem(&a5[0x17].vtbl, v9, 0, v71);
    v10 = (char *)a1->Unk_14(a1);
    sub_419F10(v10, 0);
    v71 = 0;
    ((void (__thiscall *)(HighProcess *))a1->Unk_15)(a1);
  }
  v11 = 0;
  v12 = (char *)a1->GetCurrentPackage(a1);
  if ( v12 )
  {
    if ( v12[0x20] == 0x10 )
    {
      v11 = (int)v12;
      sub_626DE0(v12);
    }
  }
  form = 0;
  v88 = 0;
  if ( !(*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0xCC))(a5)
    || *(_DWORD *)((*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0xCC))(a5) + 0x70) != 0xC )
  {
    if ( !v11
      || !*(_DWORD *)(v11 + 0x58) && !*(_DWORD *)(v11 + 0x54)
      || sub_626E60((TESObjectREFR **)v11)
      && (LOBYTE(v13) = Actor_IsCreature((Actor *)a5),
          v68 = v13,
          Distance = TesObjectREF_GetDistance((TESObjectREFR *)a5, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0),
          v67 = COERCE_FLOAT((*((int (__thiscall **)(TESChildCELL *, int, _DWORD))a5->vtbl + 0xA1))(a5, 0x21, LODWORD(Distance))),
          v65 = TESDataHandler_g_PlayerRef,
          v14 = (*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x89))(a5),
          shouldActorFight(v14, (int)v65, 0, v67, 0, v68, 0, 0x64),
          !v15) )
    {
      ((void (__thiscall *)(HighProcess *, TESChildCELL *, int))a1->Unk_61)(a1, a5, 1);
      return;
    }
  }
  if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a5->vtbl + 0x97))(a5) )
  {
    v18 = *(float *)(v11 + 0x4C);
    *(_BYTE *)(v11 + 0x50) = 0;
    *(float *)(v11 + 0x4C) = v18 - *(float *)(v11 + 0x4C);
    return;
  }
  if ( v11 )
  {
    v19 = *(TargetData **)(v11 + 0x28);
    if ( v19 )
    {
      if ( sub_569E60(v19).form )
        form = sub_569E60(*(TargetData **)(v11 + 0x28)).form;
    }
  }
  if ( *(_BYTE *)(v11 + 0x65) && (*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x63))(a5) != 4 )
  {
    a1->MountHorse(a1, (Actor *)a5);
    return;
  }
  v79 = *(_BYTE **)(v11 + 0x5C);
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a5);
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a5);
  *(float *)&v83 = *(float *)(v11 + 0x4C);
  v75 = WorldSpace;
  v21 = sub_628140((int *)v11, (TESObjectREFR *)a5);
  v78 = v21;
  if ( !v21 )
  {
    if ( form )
    {
      if ( form->vtbl->IsActor(form) )
      {
        v21 = form;
        v78 = form;
      }
    }
  }
  v22 = *(_BYTE *)(v11 + 0x64);
  v85 = *(_DWORD *)(v11 + 0x40);
  v72 = v22;
  v86 = *(_DWORD *)(v11 + 0x44);
  LOBYTE(v80) = 0;
  v87 = *(_DWORD *)(v11 + 0x48);
  if ( v21 )
  {
    vtbl = (TESObjectREFRVtbl *)a5[0x16].vtbl;
    if ( vtbl )
    {
      v24 = (_BYTE *)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x104))(vtbl);
      v25 = v24;
      if ( v24 )
      {
        if ( sub_683A70(v24) )
        {
          (*((void (__thiscall **)(TESChildCELL *, int))a5->vtbl + 0x60))(a5, 1);
          *(_DWORD *)(v11 + 0x60) = 0;
          *(_DWORD *)(v11 + 0x5C) = 0;
          sub_626C10((_DWORD *)v11, (TESObjectREFR *)a5);
          sub_683A80(v25, 0);
          ((void (__thiscall *)(HighProcess *, TESChildCELL *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))a1->Unk_F6)(
            a1,
            a5,
            *(_DWORD *)(v11 + 0x40),
            *(_DWORD *)(v11 + 0x44),
            *(_DWORD *)(v11 + 0x48),
            ParentCell,
            v75);
          return;
        }
      }
    }
    if ( ParentCell )
    {
      v82 = flt_A32048;
      if ( form )
      {
        if ( !form->vtbl->IsDead(form, 0) && (form->member.super.flags & 0x800) == 0 )
          v82 = TesObjectREF_GetDistance((TESObjectREFR *)a5, v78, 0);
      }
      if ( TESObjectCELL_IsInterior(ParentCell) )
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B37030);
        v88 = 1;
      }
      else
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B37028);
      }
      v27 = *(TESObjectREFR **)(v11 + 0x60);
      v77 = *(float *)SafeFloatPointer;
      if ( v27 )
      {
        if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v27->vtbl[1].GetSleepState)(v27, 1)
          || v27->vtbl->IsDead(v27, 0)
          || (v27->member.super.flags & 0x800) != 0
          || !IsWeaponReady(v27) )
        {
          v27 = 0;
          *(_DWORD *)(v11 + 0x60) = 0;
        }
      }
      v28 = *(_BYTE **)(v11 + 0x5C);
      a3 = v77;
      v79 = v28;
      if ( v77 > (double)v82 && !v28 && !v27 || !v72 && 0.0 == *(float *)&v83 && *(_BYTE *)(v11 + 0x3C) )
      {
        if ( a1->unk088 > 0.0 )
        {
          v29 = a1->unk088 - flt_B33E9C;
        }
        else
        {
          v29 = flt_A417B4;
          LOBYTE(v80) = 1;
        }
        a1->unk088 = v29;
        if ( !*(_BYTE *)(v11 + 0x3C) )
        {
          sub_5EAE70((Actor *)a5, (int)v27, v11, v71);
          return;
        }
        if ( ((double (__thiscall *)(TESChildCELL *))*((_DWORD *)a5->vtbl + 0x94))(a5) == *(float *)&SrcStr )
          sub_627FF0((_DWORD *)v11, (Actor *)a5);
        v30 = *(TESObjectREFR **)(v11 + 0x60);
        if ( v30 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        {
          *(_DWORD *)(v11 + 0x60) = 0;
        }
        else if ( v30 )
        {
          v32 = v30->vtbl->GetPos(*(_DWORD *)(v11 + 0x60));
          v85 = *(_DWORD *)v32;
          v86 = *((_DWORD *)v32 + 1);
          v87 = *((_DWORD *)v32 + 2);
          ParentCell = TESObjectREFR_GetParentCell(v30);
          v75 = TESObjectREFR_GetWorldSpace(v30);
LABEL_72:
          if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a5) != ParentCell )
            TESObjectREFR_GetWorldSpace((TESObjectREFR *)a5);
          if ( a1->unk0D0
            && !((unsigned __int8 (__thiscall *)(HighProcess *, TESChildCELL *, int, int, int, TESObjectCELL *, TESWorldSpace *))a1->Unk_F6)(
                  a1,
                  a5,
                  v85,
                  v86,
                  v87,
                  ParentCell,
                  v75) )
          {
            return;
          }
          v33 = *(float *)(v11 + 0x4C) - *(float *)(v11 + 0x4C);
          v79 = *(_BYTE **)(v11 + 0x5C);
          *(_BYTE *)(v11 + 0x50) = 0;
          *(float *)(v11 + 0x4C) = v33;
          goto LABEL_92;
        }
        if ( v88 )
          v31 = (int *)sub_627680((TESPackage *)v11, (int)&v83, a5, (int)v78, v80);
        else
          v31 = (int *)sub_6279A0((TESPackage *)v11, (int)&v83, a5, (int)v78, v80);
        v85 = *v31;
        v86 = v31[1];
        v87 = v31[2];
        goto LABEL_72;
      }
      if ( *(_BYTE *)(v11 + 0x3C) )
      {
        if ( v27 )
        {
          v37 = v27->vtbl->GetPos(v27);
          v85 = *(_DWORD *)v37;
          v86 = *((_DWORD *)v37 + 1);
          v87 = *((_DWORD *)v37 + 2);
          ParentCell = TESObjectREFR_GetParentCell(v27);
          v75 = TESObjectREFR_GetWorldSpace(v27);
        }
        else
        {
          if ( v28 )
          {
            TeleportExtraData = GetTeleportExtraData(v28);
            if ( TeleportExtraData )
            {
              v39 = sub_42B410(&TeleportExtraData->super);
              v40 = (char *)GetTeleportExtraData(v39);
              v41 = (int *)sub_6899C0(v40);
            }
            else
            {
              v41 = (int *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v79 + 0x174))(v79);
            }
            v85 = *v41;
            v86 = v41[1];
            v42 = v41[2];
          }
          else
          {
            v85 = *(_DWORD *)(v11 + 0x40);
            v86 = *(_DWORD *)(v11 + 0x44);
            v42 = *(_DWORD *)(v11 + 0x48);
          }
          v87 = v42;
        }
      }
      else
      {
        v34 = *(char **)(v11 + 0x24);
        if ( sub_569740(v34) == 1 )
        {
          ParentCell = (TESObjectCELL *)sub_569800(v34);
        }
        else if ( !sub_569740(v34) )
        {
          v35 = (TESObjectREFR *)sub_5697E0(v34);
          v36 = v35->vtbl->GetPos(v35);
          v85 = *(_DWORD *)v36;
          v86 = *((_DWORD *)v36 + 1);
          v87 = *((_DWORD *)v36 + 2);
          ParentCell = TESObjectREFR_GetParentCell(v35);
          v75 = TESObjectREFR_GetWorldSpace(v35);
        }
      }
    }
LABEL_92:
    if ( a1->unk0D0 )
    {
      v89 = *(TESChildCELL **)(v11 + 0x60);
      if ( v89 == (TESChildCELL *)TESDataHandler_g_PlayerRef )
      {
        v89 = 0;
        *(_DWORD *)(v11 + 0x60) = 0;
      }
      v43 = *(TESObjectREFR **)(v11 + 0x5C);
      if ( v43 )
      {
        v90 = flt_A5A04C;
        v81 = GetTeleportExtraData(*(_BYTE **)(v11 + 0x5C));
        if ( v81 )
        {
          v69 = (float *)(*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x5D))(a5);
          v44 = sub_42B410(&v81->super);
          v45 = (char *)GetTeleportExtraData(v44);
          v46 = (float *)sub_6899C0(v45);
          v47 = sub_4121A0(v46, (float *)&v83, v69);
          v90 = sub_404C90(v47);
        }
        v83 = v90;
        v48 = TesObjectREF_GetDistance((TESObjectREFR *)a5, v43, 0);
        if ( v48 <= v83 )
          v49 = TesObjectREF_GetDistance((TESObjectREFR *)a5, v43, 0);
        else
          v49 = v90;
        v91 = v49;
        if ( flt_A71EB4 > (double)v91 )
        {
          v50 = ((double (__thiscall *)(HighProcess *, TESChildCELL *))a1->Unk_164)(a1, a5);
          *(_DWORD *)(v11 + 0x5C) = 0;
          ActivateRef(v43, a2, a3, v50, (TESObjectREFR *)a5, 0, 0, 1);
          a1->unk088 = flt_A417B4;
          return;
        }
        if ( v81 )
        {
          v51 = sub_42B410(&v81->super);
          v52 = (char *)GetTeleportExtraData(v51);
          v53 = (float *)sub_6899C0(v52);
        }
        else
        {
          v53 = v43->vtbl->GetPos(v43);
        }
        v54 = *(_DWORD *)v53;
        v55 = *((_DWORD *)v53 + 1);
        v56 = *((_DWORD *)v53 + 2);
        v83 = COERCE_DOUBLE(__PAIR64__(v55, v54));
        v84 = v56;
        v74 = TESObjectREFR_GetParentCell(v43);
        v70 = TESObjectREFR_GetWorldSpace(v43);
        goto LABEL_112;
      }
      if ( v89 && TesObjectREF_GetDistance((TESObjectREFR *)a5, (TESObjectREFR *)v89, 0) > flt_A71EB4 )
      {
        v57 = (unsigned int *)(*((int (__thiscall **)(TESChildCELL *))v89->vtbl + 0x5D))(v89);
        v58 = *v57;
        v59 = v57[1];
        v60 = v57[2];
        v83 = COERCE_DOUBLE(__PAIR64__(v59, v58));
        v84 = v60;
        v74 = TESObjectREFR_GetParentCell((TESObjectREFR *)v89);
        v61 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v89);
        if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a5) != v74 )
          TESObjectREFR_GetWorldSpace((TESObjectREFR *)a5);
        v70 = v61;
LABEL_112:
        if ( !((unsigned __int8 (__thiscall *)(HighProcess *, TESChildCELL *, _DWORD, _DWORD, unsigned int, TESObjectCELL *, TESWorldSpace *))a1->Unk_F6)(
                a1,
                a5,
                LODWORD(v83),
                HIDWORD(v83),
                v84,
                v74,
                v70) )
          *(_DWORD *)(v11 + 0x60) = 0;
        return;
      }
      v62 = (ActorAnimData *)(*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x59))(a5);
      if ( v62 )
      {
        if ( sub_472EA0(v62) )
          a1->Unk_12(a1, (UInt32)a5);
      }
      *(_BYTE *)(v11 + 0x50) = 1;
      *(float *)(v11 + 0x4C) = flt_B33E9C + *(float *)(v11 + 0x4C);
    }
    else
    {
      v63 = (ActorAnimData *)(*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x59))(a5);
      if ( v63 )
      {
        if ( !sub_472EA0(v63) )
          a1->Unk_164(a1, (Actor *)a5);
      }
      ((void (__thiscall *)(HighProcess *, TESChildCELL *, int))a1->Unk_8D)(a1, a5, 0x201);
      v92 = flt_A417B4;
      if ( v79 )
        v92 = flt_A5793C;
      ((void (__thiscall *)(HighProcess *, TESChildCELL *, int *, TESObjectCELL *, TESWorldSpace *, _DWORD))a1->Unk_104)(
        a1,
        a5,
        &v85,
        ParentCell,
        v75,
        LODWORD(v92));
      pathing = a1->pathing;
      if ( pathing )
      {
        if ( (*(unsigned __int8 (__thiscall **)(PathLow *))(*(_DWORD *)pathing + 0x2C))(pathing) )
          ((void (__thiscall *)(HighProcess *, TESChildCELL *))a1->Unk_64)(a1, a5);
      }
    }
  }
}
