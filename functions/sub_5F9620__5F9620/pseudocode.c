char __usercall sub_5F9620@<al>(TESObjectREFR *a1@<ecx>, double st6_0@<st1>, double a3@<st0>)
{
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v6; // edi
  int *v7; // ebx
  TESObjectREFRVtbl *vtbl; // ecx
  int *unk1F4; // edi
  int v10; // eax
  double v11; // st5
  int vtbl_high; // eax
  int *v13; // ebx
  int v14; // eax
  Data *v15; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  TESObjectREFRVtbl *v19; // eax
  int v20; // eax
  NiTransform *v21; // edi
  NiPoint3 *v22; // eax
  float *v23; // eax
  float v24; // ecx
  float v25; // edx
  float v26; // eax
  NiPoint3 *v27; // eax
  float *v28; // eax
  TESObjectCELL *(__thiscall *v29)(TESChildCELL *); // ecx
  TESForm *v30; // edx
  float v31; // eax
  TESObjectREFRVtbl *v32; // ecx
  int v33; // eax
  int v34; // eax
  double v35; // st7
  int v36; // eax
  int v37; // edi
  int v38; // eax
  int *v39; // eax
  int v40; // eax
  int *SafeFloatPointer; // eax
  float *v42; // ecx
  double v43; // st7
  double v44; // st6
  int *v45; // eax
  int *v46; // eax
  int v47; // edi
  double v48; // st7
  float *v49; // eax
  Data *data; // edi
  TESForm::FormFlags v51; // eax
  TESObjectCELL *v52; // eax
  int v53; // ebx
  TESObjectREFRVtbl *v54; // edi
  float *v55; // eax
  TESObjectCELL *v56; // eax
  int v57; // eax
  _DWORD *v58; // ebx
  TESObjectREFRVtbl *v59; // ecx
  int v60; // eax
  int v61; // edx
  int v62; // ebx
  int v63; // eax
  int **v64; // eax
  unsigned int *v65; // edi
  unsigned __int8 v66; // al
  int v67; // edx
  TESObjectCELL *v68; // eax
  int v69; // eax
  _DWORD *v70; // esi
  float v72; // [esp+Ch] [ebp-F0h]
  const char *flags; // [esp+14h] [ebp-E8h]
  TESObjectCELL *(__thiscall *GetChildCell)(TESChildCELL *); // [esp+18h] [ebp-E4h]
  TESForm *baseForm; // [esp+1Ch] [ebp-E0h]
  int x_low; // [esp+20h] [ebp-DCh]
  Data *v77; // [esp+20h] [ebp-DCh]
  float scale; // [esp+24h] [ebp-D8h]
  int v79; // [esp+24h] [ebp-D8h]
  int v80; // [esp+24h] [ebp-D8h]
  void *niNode; // [esp+28h] [ebp-D4h]
  TESObjectCELL *v82; // [esp+2Ch] [ebp-D0h]
  char v83; // [esp+2Ch] [ebp-D0h]
  float v84; // [esp+30h] [ebp-CCh]
  signed int v85; // [esp+30h] [ebp-CCh]
  char v86; // [esp+30h] [ebp-CCh]
  float FatigueFraction; // [esp+34h] [ebp-C8h]
  float v88; // [esp+38h] [ebp-C4h]
  double v89; // [esp+3Ch] [ebp-C0h]
  int v90; // [esp+44h] [ebp-B8h]
  float v91; // [esp+48h] [ebp-B4h]
  int v92; // [esp+4Ch] [ebp-B0h]
  float v93; // [esp+50h] [ebp-ACh]
  char v94; // [esp+53h] [ebp-A9h]
  float v95; // [esp+54h] [ebp-A8h] BYREF
  TESObjectREFR v96; // [esp+58h] [ebp-A4h] BYREF
  float v97[3]; // [esp+B4h] [ebp-48h] BYREF
  float a2[3]; // [esp+C0h] [ebp-3Ch] BYREF
  float v99[7]; // [esp+CCh] [ebp-30h] BYREF
  unsigned int v100; // [esp+F8h] [ebp-4h]
  int savedregs; // [esp+FCh] [ebp+0h] BYREF

  HIBYTE(v93) = 0;
  ParentCell = TESObjectREFR_GetParentCell(a1);
  v6 = (ExtraDataList *)ParentCell;
  if ( !ParentCell )
  {
    v7 = 0;
    goto LABEL_6;
  }
  if ( !TESObjectCELL_IsInterior(ParentCell) )
  {
    v7 = (int *)bhkWorldM;
LABEL_6:
    v96.member.super.flags = (TESForm::FormFlags)v7;
    goto LABEL_7;
  }
  v7 = (int *)sub_424180(v6 + 2);
  v96.member.super.flags = (TESForm::FormFlags)v7;
LABEL_7:
  vtbl = a1[1].vtbl;
  unk1F4 = (int *)TESDataHandler_g_PlayerRef->unk1F4;
  LODWORD(v96.member.rot.y) = unk1F4;
  if ( vtbl
    && (v10 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x3B))(vtbl, 1)) != 0
    && *(_DWORD *)(v10 + 8) )
  {
    v11 = flt_B37D38;
  }
  else
  {
    v11 = (double)dword_B37D30;
  }
  *(float *)&v96.member.super.refID = v11;
  if ( v7 && unk1F4 && !sub_535510(unk1F4) )
  {
    sub_5F11F0(
      (Actor *)a1,
      a3,
      (float *)&v96.member.baseExtraList.members.m_presenceBitfield[4],
      (float *)&v96.member.baseExtraList);
    sub_5354C0(unk1F4, v7);
    vtbl_high = HIWORD(sub_65ABE0(a1, &v96)->vtbl);
    if ( unk1F4[0x6A] != vtbl_high )
      sub_535460(unk1F4, vtbl_high);
    if ( !sub_535540(
            (float *)unk1F4,
            (float *)&v96.member.baseExtraList.members.m_presenceBitfield[4],
            (float *)&v96.member.baseExtraList,
            *(float *)&v96.member.super.refID) )
      goto LABEL_97;
    v13 = unk1F4;
    sub_4806E0(*(_DWORD *)(unk1F4[4] + 0x28));
    if ( v14 )
    {
      v15 = (Data *)sub_4DC270(v14);
      v96.member.super.modlist.data = v15;
    }
    else
    {
      v15 = 0;
      v96.member.super.modlist.data = 0;
    }
    v16 = v13[4];
    v17 = *(_DWORD *)(v16 + 0x28);
    if ( *(_BYTE *)(v17 + 0x18) == 1 )
    {
      v18 = v17 + *(_DWORD *)(v17 + 0x10);
      if ( v18 )
      {
        v19 = a1->vtbl;
        v96.member.super.refID = *(_DWORD *)(v18 + 0xC);
        v94 = 1;
        v20 = (int)v19->GetNiNode(a1);
        if ( v20 )
        {
          v21 = (NiTransform *)(v20 + 0x64);
          v22 = (NiPoint3 *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent
                             + 0xC4))(a1[1].vtbl);
          v23 = sub_53D4B0(v21, (float *)&v96.member.childCell, v22);
          v24 = *v23;
          v25 = v23[1];
          v26 = v23[2];
          v96.member.rot.z = v24;
          v96.member.pos[0] = v25;
          v96.member.pos[1] = v26;
          v27 = (NiPoint3 *)sub_5E6A40((Actor *)a1, a2);
          v28 = sub_53D4B0(v21, v97, v27);
          v29 = *(TESObjectCELL *(__thiscall **)(TESChildCELL *))v28;
          v30 = *((TESForm **)v28 + 1);
          v31 = v28[2];
          v96.member.childCell.GetChildCell = v29;
          v96.member.baseForm = v30;
          v96.member.rot.x = v31;
        }
        v95 = *(float *)&v96.member.childCell.GetChildCell - v96.member.rot.z;
        *(float *)&v96.member.super.type = *(float *)&v96.member.baseForm - v96.member.pos[0];
        *(float *)&v96.member.super.modlist.next = v96.member.rot.x - v96.member.pos[1];
        v96.member.rot.z = v95;
        v96.member.pos[0] = *(float *)&v96.member.super.type;
        v96.member.pos[1] = *(float *)&v96.member.super.modlist.next;
        sub_43F350(&v96.member.rot.z);
        sub_43F3E0(&v96.member.scale, *(__m128 **)(LODWORD(v96.member.rot.y) + 0x10));
        v32 = a1[1].vtbl;
        if ( v32
          && (v33 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))v32->super.super.InitializeComponent + 0x3B))(
                      v32,
                      1)) != 0 )
        {
          v34 = *(_DWORD *)(v33 + 8);
        }
        else
        {
          v34 = 0;
        }
        if ( v34 )
        {
          v35 = *(float *)(v34 + 0x7C);
        }
        else
        {
          sub_5E4330(a1, 4);
          if ( v36 )
          {
            v35 = *(float *)(*(_DWORD *)(v36 + 8) + 0x58);
          }
          else
          {
            v35 = 0.0;
            v94 = 0;
          }
        }
        *(float *)&v96.member.super.type = v35;
        v37 = *(_DWORD *)(*(_DWORD *)(LODWORD(v96.member.rot.y) + 0x10) + 0x2C);
        *(float *)&v96.member.super.type = *(float *)&v96.member.super.type + dbl_A30E48;
        v95 = 0.0;
        if ( (*(_BYTE *)sub_497340((_DWORD *)v96.member.super.refID, &v96) & 0x3F) == 0x11 )
        {
          *(float *)&v38 = COERCE_FLOAT(sub_440AC0(TES, &v96.member.scale));
        }
        else
        {
          v39 = (int *)sub_494F10((_DWORD *)v96.member.super.refID);
          if ( !v39
            || (v95 = *((float *)v39 + 4), v37 == 0xFFFFFFFF)
            || (v40 = (*(int (__thiscall **)(int *))(*v39 + 0x88))(v39)) == 0 )
          {
LABEL_41:
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B37138);
            *(float *)&v96.member.super.type = sub_4AC760(*(float *)&v96.member.super.type, *(float *)SafeFloatPointer);
            v96.member.super.modlist.next = *(TESForm::ModReferenceList **)GameSetting_GetSafeFloatPointer((int *)&unk_B37130);
            v42 = *(float **)(v18 + 0x50);
            v43 = *(float *)&v96.member.super.modlist.next;
            *(float *)&v96.member.super.modlist.next = *(float *)&v96.member.super.modlist.next * v96.member.rot.z;
            v96.member.pos[2] = v96.member.pos[0] * v43;
            *(float *)&v96.vtbl = v43 * v96.member.pos[1];
            *(float *)&v96.member.super.modlist.next = *(float *)&v96.member.super.modlist.next
                                                     * *(float *)&v96.member.super.type;
            v96.member.pos[2] = v96.member.pos[2] * *(float *)&v96.member.super.type;
            *(float *)&v96.vtbl = *(float *)&v96.member.super.type * *(float *)&v96.vtbl;
            v96.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))v96.member.super.modlist.next;
            *(float *)&v96.member.baseForm = v96.member.pos[2];
            v96.member.rot.x = *(float *)&v96.vtbl;
            *(float *)&v96.member.super.type = sub_89DA90(v42);
            v44 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B37140);
            if ( v44 > *(float *)&v96.member.super.type )
            {
              v45 = GameSetting_GetSafeFloatPointer((int *)&unk_B37140);
              *(float *)&v96.vtbl = *(float *)&v96.member.super.type / *(float *)v45;
              NiPoint3::MutliplyByValue((NiPoint3 *)&v96.member.childCell, *(float *)&v96.vtbl);
            }
            if ( (*sub_497340((_DWORD *)v96.member.super.refID, &v96) & 0x3F) == 8 )
            {
              v46 = GameSetting_GetSafeFloatPointer((int *)&unk_B37148);
              NiPoint3::MutliplyByValue((NiPoint3 *)&v96.member.childCell, *(float *)v46);
            }
            sub_4529E0(v99, (float *)&v96.member.childCell);
            (*(void (__thiscall **)(TESForm::FormFlags))(*(_DWORD *)v96.member.super.flags + 0x58))(v96.member.super.flags);
            v47 = *(_DWORD *)(LODWORD(v96.member.rot.y) + 0x10);
            sub_8A6410(v18);
            (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v18 + 0x50) + 0x60))(
              *(_DWORD *)(v18 + 0x50),
              v99,
              v47);
            v48 = ((double (__thiscall *)(TESForm::FormFlags))*(_DWORD *)(*(_DWORD *)v96.member.super.flags + 0x58))(v96.member.super.flags);
            sub_5F05F0(
              (int)a1,
              v44,
              v48,
              SLODWORD(v96.member.scale),
              (int)v96.member.niNode,
              (int)v96.member.parentCell,
              (int)v96.member.super.modlist.data,
              (_DWORD *)v96.member.super.refID,
              SLODWORD(v95));
            if ( !v94 )
              goto LABEL_85;
            v96.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))LODWORD(v96.member.rot.z);
            v96.member.baseForm = (TESForm *)LODWORD(v96.member.pos[0]);
            v96.member.rot.x = v96.member.pos[1];
            v84 = sub_47D9E0((float *)&v96.member.childCell, (float *)&v96.member.baseExtraList);
            v49 = sub_47DA10(v97, v84, (float *)&v96.member.baseExtraList);
            sub_43F320((float *)&v96.member.childCell, v49);
            sub_43F350((float *)&v96.member.childCell);
            if ( (*sub_497340((_DWORD *)v96.member.super.refID, &v96) & 0x3F) == 8 )
            {
              data = v96.member.super.modlist.data;
              if ( !v96.member.super.modlist.data
                || !(*(unsigned __int8 (__thiscall **)(Data *))(v96.member.super.modlist.data->errorState + 0x190))(v96.member.super.modlist.data) )
              {
                v96.member.super.flags = sBloodParticleDefault;
                goto LABEL_53;
              }
              v51 = sub_5E1BF0(data);
            }
            else
            {
              v51 = sub_5361B0(SLODWORD(v95));
            }
            v96.member.super.flags = v51;
LABEL_53:
            if ( v96.member.super.flags )
            {
              TESObjectREFR_GetParentCell(a1);
              v85 = sub_4C9BE0(a1);
              v52 = TESObjectREFR_GetParentCell(a1);
              v53 = sub_441800(v52, v85, 3u);
              v54 = (TESObjectREFRVtbl *)FormHeapAlloc(0x20u);
              v96.vtbl = v54;
              v55 = 0;
              v100 = 0;
              if ( v54 )
              {
                scale = v96.member.scale;
                niNode = v96.member.niNode;
                v82 = v96.member.parentCell;
                GetChildCell = v96.member.childCell.GetChildCell;
                baseForm = v96.member.baseForm;
                x_low = LODWORD(v96.member.rot.x);
                flags = (const char *)v96.member.super.flags;
                v72 = flt_A31E2C;
                v56 = TESObjectREFR_GetParentCell(a1);
                v55 = sub_5713F0(
                        v54,
                        (int)v56,
                        v72,
                        v53,
                        flags,
                        *(float *)&GetChildCell,
                        *(float *)&baseForm,
                        x_low,
                        scale,
                        (UInt32)niNode,
                        (const char *)v82,
                        1.0,
                        1);
              }
              v100 = 0xFFFFFFFF;
              sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v55);
            }
            goto LABEL_85;
          }
          *(float *)&v38 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(*(_DWORD *)v40 + 0x9C))(v40, v37));
        }
        v95 = *(float *)&v38;
        goto LABEL_41;
      }
    }
    if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      goto LABEL_87;
    v57 = sub_47DDE0(*(_DWORD *)(v16 + 0x28));
    if ( v57 )
      v58 = *(_DWORD **)(v57 + 0xC);
    else
      v58 = 0;
    if ( !v15
      || !(*(unsigned __int8 (__thiscall **)(Data *))(v15->errorState + 0x190))(v15)
      || (*(unsigned __int8 (__thiscall **)(Data *, _DWORD))(v15->errorState + 0x198))(v15, 0)
      || !v58
      || (*(_BYTE *)sub_497340(v58, &v96) & 0x3F) != 0x14 )
    {
LABEL_86:
      if ( a1 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
LABEL_97:
        sub_5354C0((int *)LODWORD(v96.member.rot.y), 0);
        return HIBYTE(v93);
      }
LABEL_87:
      if ( v15 && (v68 = TESObjectREFR_GetParentCell((TESObjectREFR *)v15)) != 0 && (sub_4440C0(v68), v69) )
        v70 = *(_DWORD **)(v69 + 0x24);
      else
        v70 = 0;
      if ( v70 )
      {
        if ( v15 == (Data *)InterfaceManager_GetSingleton(0, 1)->unk0C0[2] )
        {
          if ( sub_536AE0(v70, (int)v15) )
          {
            if ( v15 != (Data *)0xFFFFFFBC )
            {
              Script_AddEventToExtraScript(v15, &v15->name[0x28], 0x10000000);
              HIBYTE(v93) = 1;
            }
          }
        }
      }
      goto LABEL_97;
    }
    v59 = a1[1].vtbl;
    if ( v59 )
    {
      v60 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))v59->super.super.InitializeComponent + 0x3B))(v59, 1);
      if ( v60 )
      {
        v61 = *(_DWORD *)(v60 + 8);
        goto LABEL_71;
      }
    }
    else
    {
      v60 = 0;
    }
    v61 = 0;
LABEL_71:
    if ( v61 )
      v62 = *(char *)(v61 + 0x90);
    else
      v62 = 0xFFFFFFFF;
    v95 = 0.0;
    if ( v60 )
    {
      EquippedWeaponData_GetDamage(
        v60,
        (int)&savedregs,
        (int *)a1,
        COERCE_INT(1.0),
        v88,
        v89,
        v90,
        v91,
        v92,
        v93,
        v95,
        *(float *)&v96.vtbl);
      v95 = 1.0;
    }
    else if ( Actor_IsCreature((Actor *)a1) )
    {
      v96.vtbl = (TESObjectREFRVtbl *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsParalyzed)(a1);
      v95 = (float)(int)v96.vtbl;
    }
    else
    {
      (*(void (__thiscall **)(Data *, float *, TESForm::FormFlags *))(v15->errorState + 0x19C))(
        v15,
        &v95,
        &v96.member.super.flags);
      FatigueFraction = Actor_GetFatigueFraction((Actor *)a1, v62, (int)v15);
      v83 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].Unk_37)(a1);
      v79 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].Unk_37)(a1);
      v63 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].Unk_37)(a1);
      Calc_HandToHandDamage(v63, 0x11, v79, COERCE_FLOAT(7), v83, 0, (float *)LODWORD(FatigueFraction));
    }
    if ( Actor_IsCreature((Actor *)v15) )
    {
      v86 = 0;
      v80 = v62;
      v77 = v15;
    }
    else
    {
      v64 = sub_5E5A00(v96.member.super.modlist.data);
      v65 = (unsigned int *)v64;
      v86 = 1;
      if ( v64 )
      {
        v66 = TESObjectARMO_ISHeavyArmor(v64[2]);
        sub_6AF880(
          v11,
          st6_0,
          (int)a1,
          v95,
          SLODWORD(v95),
          (int)v96.member.super.modlist.data,
          v62,
          v66,
          0xFFFFFFFF,
          1,
          0);
        ContainerEntryExtraData_DestroyDataTable(v65, v67);
        FormHeapFree((unsigned int)v65);
LABEL_85:
        v15 = v96.member.super.modlist.data;
        HIBYTE(v93) = 1;
        goto LABEL_86;
      }
      v80 = v62;
      v77 = v96.member.super.modlist.data;
    }
    sub_6AF880(v11, st6_0, (int)a1, v95, COERCE_INT(0.0), (int)v77, v80, 0xFFFFFFFF, 0xFFFFFFFF, v86, 0);
    goto LABEL_85;
  }
  return HIBYTE(v93);
}
