void __userpurge TESObjectREFR_Set3D(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        NiAVObject *node)
{
  NiAVObject *v6; // edi
  float v7; // eax
  float v8; // edx
  TESObjectREFR *v9; // esi
  TESForm *v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // ecx
  TESForm *baseForm; // eax
  float v15; // esi
  float v16; // edx
  float v17; // eax
  void *ShadowSceneNode; // eax
  int **v19; // eax
  void **Light; // edi
  ShadowSceneNode_DecodedLayout *v21; // eax
  volatile LONG *v22; // esi
  int v23; // ecx
  int ***v24; // ecx
  NiExtraData *ExtraData; // eax
  bhkCharacterProxy *CharProxy; // eax
  int v27; // ecx
  unsigned int **sound; // ecx
  TESObjectCELL *parentCell; // eax
  void (__thiscall *Unk_51)(TESObjectREFR *); // edx
  volatile LONG *v31; // esi
  float v32; // edx
  float v33; // eax
  double v34; // st4
  TESForm *v35; // eax
  UInt16 m_extraDataListLen; // ax
  int v37; // edi
  int v38; // ebx
  NiExtraData **m_extraDataList; // ecx
  NiExtraData *v40; // esi
  NiRTTI *v41; // eax
  NiObject *v42; // eax
  unsigned int *v43; // eax
  ExtraDataList *p_baseExtraList; // ebp
  TeleportData *Teleport; // eax
  TeleportData *v46; // eax
  TESObjectCELL *v47; // eax
  void *v48; // [esp+18h] [ebp-68h]
  TESObjectREFR *v49; // [esp+18h] [ebp-68h]
  TESObjectREFR *v50; // [esp+30h] [ebp-50h]
  int v51; // [esp+34h] [ebp-4Ch]
  float v52; // [esp+38h] [ebp-48h]
  float v53; // [esp+3Ch] [ebp-44h] BYREF
  volatile LONG *niNode; // [esp+40h] [ebp-40h]
  float v55; // [esp+44h] [ebp-3Ch]
  float v56; // [esp+48h] [ebp-38h]
  float v57; // [esp+4Ch] [ebp-34h]
  _BYTE v58[36]; // [esp+50h] [ebp-30h] BYREF
  int v59; // [esp+7Ch] [ebp-4h]

  v6 = node; /*0x4e0fac*/
  if ( this->member.niNode == node ) /*0x4e0fb2*/
  {
    if ( !node ) /*0x4e0fb6*/
      sub_439DC0((_DWORD **)MEMORY[0xB33A1C], (volatile LONG *)this); /*0x4e0fc3*/
    return; /*0x4e0fc8*/
  }
  v7 = this->member.pos[0]; /*0x4e0fd0*/
  v8 = this->member.pos[2]; /*0x4e0fd3*/
  v56 = this->member.pos[1]; /*0x4e0fd6*/
  v55 = v7; /*0x4e0fdc*/
  v57 = v8; /*0x4e0fe0*/
  TESObjectREFR_GetScale(this); /*0x4e0fe4*/
  v52 = a4; /*0x4e0fe9*/
  v9 = 0; /*0x4e0ff6*/
  v51 = 0; /*0x4e0ffa*/
  v50 = 0; /*0x4e1002*/
  if ( this->vtbl->IsActor(this) ) /*0x4e1006*/
  {
    v9 = this; /*0x4e100c*/
    v50 = this; /*0x4e100e*/
  }
  if ( !this->member.niNode || !node || (v10 = this->member.baseForm) == 0 || v10->member.type != kFormType_Tree ) /*0x4e1028*/
  {
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x4e1033*/
    {
      if ( v9 ) /*0x4e103e*/
      {
        if ( ((int (__thiscall *)(TESObjectREFR *))v9->vtbl[2].super.Unk_0C)(v9) ) /*0x4e104a*/
        {
          v11 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v9->vtbl[2].super.Unk_0C)( /*0x4e105a*/
                  v9,
                  a4,
                  a3,
                  st5_0);
          (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 0x164))(v11); /*0x4e1066*/
        }
      }
    }
    niNode = (volatile LONG *)this->member.niNode; /*0x4e106d*/
    v12 = (int)niNode; /*0x4e1068*/
    if ( niNode ) /*0x4e1071*/
      InterlockedIncrement(niNode + 1); /*0x4e1077*/
    v59 = 0; /*0x4e107f*/
    if ( niNode ) /*0x4e1087*/
    {
      v13 = *((_DWORD *)niNode + 7); /*0x4e108d*/
      v51 = v13; /*0x4e1092*/
      if ( v13 ) /*0x4e1096*/
      {
        if ( (this->member.super.flags & 0x4000) == 0 /*0x4e10b2*/
          || (baseForm = this->member.baseForm) == 0
          || baseForm->member.type != kFormType_Tree )
        {
          (*(void (__thiscall **)(int, float *, volatile LONG *))(*(_DWORD *)v13 + 0x88))(v13, &v53, niNode); /*0x4e10c2*/
          if ( v53 != 0.0 ) /*0x4e10ca*/
          {
            v15 = v53; /*0x4e10cc*/
            if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v53) + 4)) ) /*0x4e10d2*/
              (**(void (__thiscall ***)(_DWORD, int))LODWORD(v15))(LODWORD(v15), 1); /*0x4e10e8*/
          }
        }
        v16 = *(float *)(v12 + 0x58); /*0x4e10f0*/
        v52 = *(float *)(v12 + 0x60); /*0x4e10f3*/
        v17 = *(float *)(v12 + 0x5C); /*0x4e10f7*/
        v55 = *(float *)(v12 + 0x54); /*0x4e10fa*/
        qmemcpy(v58, (const void *)(v12 + 0x30), sizeof(v58)); /*0x4e110a*/
        v6 = node; /*0x4e110c*/
        v9 = v50; /*0x4e1110*/
        v56 = v16; /*0x4e1114*/
        v57 = v17; /*0x4e1118*/
      }
      ShadowSceneNode = (void *)GetShadowSceneNode(0); /*0x4e111f*/
      ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, (NiAVObject *)v12); /*0x4e1129*/
      if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->IsMobileObject)( /*0x4e1139*/
             this,
             a4,
             a3,
             st5_0) )
      {
        v19 = (int **)GetShadowSceneNode(0); /*0x4e1142*/
        ShadowSceneNode_RemoveActiveLightByCasterRoot(v19, v12); /*0x4e114c*/
      }
      if ( !v6 ) /*0x4e1153*/
      {
        sub_4D7470(this); /*0x4e115b*/
        if ( (this->member.super.flags & 0x20) == 0 ) /*0x4e1169*/
        {                                       // DX11 interior observer audit, OblivionNew reverified 2026-09-19: native TESObjectREFR_Set3D block tests ESI; nonzero path invokes [REFR vtable+198h] with EDI, then conditionally calls 45D220 through save-manager [B33B00]. Zero path calls 45D220 and 45D390. Both converge at 4E11A7, which reads ExtraLight from REFR+44h. External-patch evidence: verified EngineBugFixes 2.22 SavedHavokDataFix replaces 7 bytes here with JMP/NOP/NOP to module+EB30 (helper+E8D0), resumes at 4E11A7. The renderer observes the enclosing Set3D scope and requires the exact verified helper/relocations/continuation before accepting this foreign patch.
          if ( v9 ) /*0x4e116d*/
          {
            if ( this->vtbl->IsDead(this, 0) ) /*0x4e117b*/
              sub_45D220(g_TESSaveLoadGame, 0, this); /*0x4e1188*/
          }
          else
          {
            sub_45D220(g_TESSaveLoadGame, 0, this); /*0x4e1196*/
            sub_45D390(g_TESSaveLoadGame, (int)this); /*0x4e11a2*/
          }
        }
        Light = (void **)ExtraDataList_GetLight(&this->member.baseExtraList);// Native Set3D saved-state branches converge here: ECX = REFR(EBP)+44h; call ExtraDataList_GetLight at 4E11AA; optional light processing follows. Also the separately verified EngineBugFixes 2.22 SavedHavokDataFix continuation. Do not infer EBF helper semantics from these retail bytes; external helper evidence is recorded separately. /*0x4e11af*/
        if ( Light ) /*0x4e11b3*/
        {
          if ( *Light ) /*0x4e11b5*/
          {
            v48 = *Light; /*0x4e11bb*/
            v21 = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x4e11be*/
            ShadowSceneNode_RemoveFullLightBySource(v21, v48); /*0x4e11c8*/
            v22 = (volatile LONG *)*Light; /*0x4e11cd*/
            if ( *Light ) /*0x4e11cd*/
            {
              if ( !InterlockedDecrement(v22 + 1) ) /*0x4e11d7*/
              {
                if ( v22 ) /*0x4e11e3*/
                  (**(void (__thiscall ***)(void *, int))v22)((void *)v22, 1); /*0x4e11ed*/
              }
              *Light = 0; /*0x4e11ef*/
            }
          }
          ExtraDataList_RemoveExtraLight(&this->member.baseExtraList); /*0x4e11f8*/
          v9 = v50; /*0x4e11fd*/
        }
        if ( this->vtbl->IsMobileObject(this) /*0x4e1239*/
          && (this->vtbl->super.ClearModified((TESForm *)this, 0x2000000), (v23 = *((_DWORD *)this + 0x16)) != 0)
          && (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23) <= 1
          && (v24 = *((int ****)this + 0x16)) != 0 )
        {
          sub_64FFF0(v24, 0); /*0x4e123d*/
        }
        else
        {
          Light = (void **)&this->member.baseExtraList.vtbl; /*0x4e1244*/
          if ( BaseExtraList_GetAnimExtraData_(&this->member.baseExtraList) ) /*0x4e1249*/
            sub_41F590(&this->member.baseExtraList.vtbl); /*0x4e1254*/
        }
        if ( v9 ) /*0x4e125b*/
        {
          UnequipWeapon(this, v12, (int)Light, st5_0, a3, a4); /*0x4e125f*/
          a4 = sub_4DC8F0(this, a4, st5_0, a3, (int)this, 0); /*0x4e1268*/
          UnequipLight(this); /*0x4e126f*/
          TESObjectREFR_ClearEquippedAmmo3D(this); /*0x4e1276*/
        }
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl->Unk_5B)(this, 0); /*0x4e1288*/
        ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)v12, dword_A7D0EC); /*0x4e1291*/
        if ( ExtraData ) /*0x4e1298*/
        {
          if ( ((int)ExtraData[1].__vftable & 0x10) != 0 ) /*0x4e12a3*/
            sub_4DE1C0((int)v9, v12); /*0x4e12a6*/
        }
        if ( v9 ) /*0x4e12b0*/
        {
          CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x4e12b4*/
          if ( CharProxy ) /*0x4e12bb*/
            sub_4D9A50(CharProxy, 0); /*0x4e12c1*/
          v27 = *((_DWORD *)this + 0x16); /*0x4e12c6*/
          if ( v27 ) /*0x4e12cb*/
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v27 + 0x470))(v27, 0); /*0x4e12d7*/
        }
        sound = (unsigned int **)MEMORY[0xB33398]->sound; /*0x4e12df*/
        if ( sound ) /*0x4e12e4*/
        {
          a4 = 0.0; /*0x4e12e6*/
          SoundManager_StopRefLoopingSoundsWithFade(sound, (LONG)this, 0.0); /*0x4e12ed*/
        }
      }
      parentCell = this->member.parentCell; /*0x4e12f2*/
      if ( !parentCell || parentCell->members.cellProcessLevel != 1 ) /*0x4e12fd*/
      {
        ActorProcessManager_FinishHitEffectsForTarget((ActorProcessManager *)&qword_B3BB2C[0x75], this); /*0x4e1305*/
        if ( g_liveArrowProjectileCount > 0 ) /*0x4e1311*/
          sub_607B90(this, 1); /*0x4e1316*/
      }
      sub_6FFAC0((_WORD *)v12, off_A3CEB0); /*0x4e1325*/
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x4e132e*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x4e1340*/
      Unk_51 = this->vtbl->Unk_51; /*0x4e1345*/
      niNode = 0; /*0x4e134d*/
      Unk_51(this); /*0x4e1355*/
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4e1359*/
      v31 = (volatile LONG *)this->member.niNode; /*0x4e135e*/
      if ( v31 ) /*0x4e1366*/
      {
        if ( !InterlockedDecrement(v31 + 1) ) /*0x4e136c*/
          (**(void (__thiscall ***)(void *, int))v31)((void *)v31, 1); /*0x4e1382*/
        this->member.niNode = 0; /*0x4e1384*/
      }
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4e138d*/
      if ( node ) /*0x4e139a*/
        goto LABEL_78; /*0x4e139a*/
      if ( !this->member.baseForm ) /*0x4e13a0*/
        goto LABEL_77; /*0x4e13a0*/
      v49 = this; /*0x4e13a9*/
      if ( (this->member.super.flags & 0x80000) == 0 ) /*0x4e13aa*/
      {
        ((void (__thiscall *)(TESForm *, TESObjectREFR *))this->member.baseForm->vtbl[1].Unk_05)( /*0x4e13b7*/
          this->member.baseForm,
          this);
LABEL_77:
        sub_4D9310((char *)this, 0); /*0x4e13cb*/
LABEL_78:
        MobileObject_SetNiNode((MobileObject *)this, node); /*0x4e13d4*/
        if ( node ) /*0x4e13e2*/
        {
          if ( v51 ) /*0x4e13ed*/
          {
            v32 = v56; /*0x4e13f7*/
            v33 = v57; /*0x4e13fd*/
            v53 = fabs(v52); /*0x4e1401*/
            v34 = v53; /*0x4e1405*/
            node->members.m_localTransform.pos.x = v55; /*0x4e140b*/
            node->members.m_localTransform.scale = v34; /*0x4e140e*/
            qmemcpy(&node->members.m_localTransform, v58, 0x24u); /*0x4e141d*/
            node->members.m_localTransform.pos.y = v32; /*0x4e1423*/
            node->members.m_localTransform.pos.z = v33; /*0x4e1426*/
            (*(void (__usercall **)(int@<ecx>, NiAVObject *, int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v51 + 0x84))( /*0x4e1434*/
              v51,
              node,
              1,
              a4,
              a3,
              st5_0);
            sub_897A20((int)node, 1); /*0x4e1439*/
            NiAVObject_InitializePropertyState(node); /*0x4e1443*/
            NiNode_UpdateDynamicEffectState((NiNode *)node); /*0x4e144a*/
            NiAVObject_UpdateNiAVObject(node, 0.0, 0); /*0x4e1459*/
          }
          v35 = this->member.baseForm;          // TESObjectREFR_Set3D owner-extra-data preparation continues through 0x004E150C. This function is not one of the seven direct retail AddShadowCaster callers. /*0x4e145e*/
          if ( v35 ) /*0x4e1463*/
          {
            if ( v35->member.type != kFormType_Tree ) /*0x4e146d*/
            {
              m_extraDataListLen = node->members.super.m_extraDataListLen; /*0x4e1477*/
              v37 = m_extraDataListLen; /*0x4e147b*/
              v38 = 0; /*0x4e147e*/
              if ( m_extraDataListLen ) /*0x4e1482*/
              {
                while ( 1 ) /*0x4e1484*/
                {
                  --v37; /*0x4e1484*/
                  if ( v38 ) /*0x4e1489*/
                    break; /*0x4e1489*/
                  m_extraDataList = node->members.super.m_extraDataList; /*0x4e1493*/
                  v40 = m_extraDataList[(unsigned __int16)v37]; /*0x4e1499*/
                  if ( v40 ) /*0x4e149e*/
                  {
                    v41 = v40->__vftable->super.GetType((NiObject *)m_extraDataList[(unsigned __int16)v37]); /*0x4e14a7*/
                    if ( v41 ) /*0x4e14ab*/
                    {
                      while ( v41 != &stru_B35ACC ) /*0x4e14b5*/
                      {
                        v41 = v41->parent; /*0x4e14b7*/
                        if ( !v41 ) /*0x4e14bc*/
                          goto LABEL_91; /*0x4e14bc*/
                      }
                      v38 = (int)v40; /*0x4e14c0*/
                    }
                  }
LABEL_91:
                  if ( !v37 ) /*0x4e14c4*/
                  {
                    if ( !v38 ) /*0x4e14c8*/
                      goto LABEL_93; /*0x4e14c8*/
                    break; /*0x4e14c8*/
                  }
                }
                *(_DWORD *)(v38 + 0xC) = this; /*0x4e150c*/
              }
              else
              {
LABEL_93:
                *(float *)&v42 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x4e14ca*/
                v53 = *(float *)&v42; /*0x4e14d4*/
                LOBYTE(v59) = 1; /*0x4e14da*/
                if ( *(float *)&v42 == 0.0 ) /*0x4e14df*/
                {
                  LOBYTE(v59) = 0; /*0x4e1501*/
                  NiObjectNET_AddExtraData((const void **)&node->vtbl, v38, 0); /*0x4e1505*/
                }
                else
                {
                  v43 = (unsigned int *)sub_4D67C0(v42, (unsigned int)this); /*0x4e14e4*/
                  LOBYTE(v59) = 0; /*0x4e14ee*/
                  NiObjectNET_AddExtraData((const void **)&node->vtbl, v38, v43); /*0x4e14f3*/
                }
              }
            }
          }
        }
        if ( !sub_45A500(g_TESSaveLoadGame) && !node )// Common continuation after TESObjectREFR owner-extra-data attach/refresh; not a direct retail shadow-caster admission callsite. /*0x4e1523*/
        {
          p_baseExtraList = &this->member.baseExtraList; /*0x4e1525*/
          if ( ExtraDataList_GetTeleport(p_baseExtraList) ) /*0x4e152a*/
          {
            Teleport = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4e1535*/
            if ( sub_42B460(&Teleport->linkedDoor) ) /*0x4e153c*/
            {
              v46 = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4e1547*/
              v47 = sub_42B460(&v46->linkedDoor); /*0x4e1550*/
              sub_4CCA60(v47, 0); /*0x4e1557*/
            }
          }
        }
        return; /*0x4e1557*/
      }
    }
    else
    {
      if ( node ) /*0x4e13bd*/
        goto LABEL_78; /*0x4e13bd*/
      v49 = this; /*0x4e13bf*/
    }
    sub_439DC0((_DWORD **)MEMORY[0xB33A1C], (volatile LONG *)v49); /*0x4e13c6*/
    goto LABEL_77; /*0x4e13c6*/
  }
}
