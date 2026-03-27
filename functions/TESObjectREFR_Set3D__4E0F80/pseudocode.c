void __userpurge TESObjectREFR_Set3D(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        NiAVObject *a5)
{
  NiAVObject *v6; // edi
  float v7; // eax
  float v8; // edx
  double Scale; // st7
  TESObjectREFR *v10; // esi
  TESForm *v11; // eax
  int v12; // eax
  int v14; // ecx
  TESForm *baseForm; // eax
  float v16; // esi
  float v17; // edx
  float v18; // eax
  _DWORD *ShadowSceneNode; // eax
  _DWORD *v20; // eax
  int *p_baseExtraList; // edi
  _DWORD *v22; // eax
  int v23; // esi
  int v24; // ecx
  int ***v25; // ecx
  double v26; // st7
  NiExtraData *ExtraData; // eax
  bhkCharacterProxy *CharProxy; // eax
  int v29; // ecx
  _DWORD **sound; // ecx
  TESObjectCELL *parentCell; // eax
  void (__thiscall *Unk_51)(TESObjectREFR *); // edx
  volatile LONG *v33; // esi
  float v34; // edx
  float v35; // eax
  TESForm *v38; // eax
  UInt16 m_extraDataListLen; // ax
  int v40; // edi
  int v41; // ebx
  NiExtraData **m_extraDataList; // ecx
  NiExtraData *v43; // esi
  int v44; // eax
  unsigned int *v45; // eax
  unsigned int *v46; // eax
  ExtraDataList *v47; // ebp
  TeleportData *Teleport; // eax
  TeleportData *v49; // eax
  TESObjectCELL *v50; // eax
  float a2; // [esp+14h] [ebp-6Ch]
  int v52; // [esp+18h] [ebp-68h]
  float v53; // [esp+18h] [ebp-68h]
  TESObjectREFR *v54; // [esp+18h] [ebp-68h]
  TESObjectREFR *v55; // [esp+30h] [ebp-50h]
  int v56; // [esp+34h] [ebp-4Ch]
  float v58; // [esp+3Ch] [ebp-44h] BYREF
  volatile LONG *niNode; // [esp+40h] [ebp-40h]
  float v60; // [esp+44h] [ebp-3Ch]
  float v61; // [esp+48h] [ebp-38h]
  float v62; // [esp+4Ch] [ebp-34h]
  _BYTE v63[36]; // [esp+50h] [ebp-30h] BYREF
  int v64; // [esp+7Ch] [ebp-4h]

  v6 = a5;
  if ( this->member.niNode == a5 )
  {
    if ( !a5 )
      sub_439DC0((_DWORD **)ModelLoaderPtr, (volatile LONG *)this);
    return;
  }
  v7 = this->member.pos[0];
  v8 = this->member.pos[2];
  v61 = this->member.pos[1];
  v60 = v7;
  v62 = v8;
  Scale = TESObjectREFR_GetScale(this);
  __asm { fstp    [esp+64h+var_48] }
  v10 = 0;
  v56 = 0;
  v55 = 0;
  if ( this->vtbl->IsActor(this) )
  {
    v10 = this;
    v55 = this;
  }
  if ( !this->member.niNode || !a5 || (v11 = this->member.baseForm) == 0 || v11->member.type != kFormType_Tree )
  {
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
    {
      if ( v10 )
      {
        if ( ((int (__thiscall *)(TESObjectREFR *))v10->vtbl[2].super.Unk_0C)(v10) )
        {
          v12 = ((int (__thiscall *)(TESObjectREFR *))v10->vtbl[2].super.Unk_0C)(v10);
          (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 0x164))(v12);
        }
      }
    }
    niNode = (volatile LONG *)this->member.niNode;
    _EBX = (int)niNode;
    if ( niNode )
      InterlockedIncrement(niNode + 1);
    v64 = 0;
    if ( niNode )
    {
      v14 = *((_DWORD *)niNode + 7);
      v56 = v14;
      if ( v14 )
      {
        if ( (this->member.super.flags & 0x4000) == 0
          || (baseForm = this->member.baseForm) == 0
          || baseForm->member.type != kFormType_Tree )
        {
          (*(void (__thiscall **)(int, float *, volatile LONG *))(*(_DWORD *)v14 + 0x88))(v14, &v58, niNode);
          if ( v58 != 0.0 )
          {
            v16 = v58;
            if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v58) + 4)) )
              (**(void (__thiscall ***)(_DWORD, int))LODWORD(v16))(LODWORD(v16), 1);
          }
        }
        __asm { fld     dword ptr [ebx+60h] }
        v17 = *(float *)(_EBX + 0x58);
        __asm { fstp    [esp+64h+var_48] }
        v18 = *(float *)(_EBX + 0x5C);
        v60 = *(float *)(_EBX + 0x54);
        qmemcpy(v63, (const void *)(_EBX + 0x30), sizeof(v63));
        v6 = a5;
        v10 = v55;
        v61 = v17;
        v62 = v18;
      }
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
      sub_7C5E70(ShadowSceneNode, _EBX);
      if ( this->vtbl->IsMobileObject(this) )
      {
        v20 = (_DWORD *)GetShadowSceneNode(0);
        sub_7C76D0(v20, _EBX);
      }
      if ( !v6 )
      {
        sub_4D7470(this);
        if ( (this->member.super.flags & 0x20) == 0 )
        {
          if ( v10 )
          {
            if ( this->vtbl->IsDead(this, 0) )
              sub_45D220(SaveLoad_CurrentSavegame, 0, this);
          }
          else
          {
            sub_45D220(SaveLoad_CurrentSavegame, 0, this);
            sub_45D390(SaveLoad_CurrentSavegame, (int)this);
          }
        }
        p_baseExtraList = (int *)sub_41E650(&this->member.baseExtraList);
        if ( p_baseExtraList )
        {
          if ( *p_baseExtraList )
          {
            v52 = *p_baseExtraList;
            v22 = (_DWORD *)GetShadowSceneNode(0);
            sub_7C7DC0(v22, v52);
            v23 = *p_baseExtraList;
            if ( *p_baseExtraList )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
              {
                if ( v23 )
                  (**(void (__thiscall ***)(int, int))v23)(v23, 1);
              }
              *p_baseExtraList = 0;
            }
          }
          sub_41F5B0(&this->member.baseExtraList.vtbl);
          v10 = v55;
        }
        if ( this->vtbl->IsMobileObject(this)
          && (this->vtbl->super.ClearModified((TESForm *)this, 0x2000000), (v24 = *((_DWORD *)this + 0x16)) != 0)
          && (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v24 + 8))(v24) <= 1
          && (v25 = *((int ****)this + 0x16)) != 0 )
        {
          sub_64FFF0(v25, 0);
        }
        else
        {
          p_baseExtraList = (int *)&this->member.baseExtraList;
          if ( BaseExtraList_GetAnimExtraData_(&this->member.baseExtraList) )
            sub_41F590(&this->member.baseExtraList.vtbl);
        }
        if ( v10 )
        {
          UnequipWeapon(this, _EBX, (int)p_baseExtraList, st5_0, a3, Scale);
          v26 = sub_4DC8F0(this, Scale, st5_0, a3, (int)this, 0);
          UnequipLight(this, st5_0, a3, v26);
          sub_4DCCF0(this, (int)this, st5_0, a3, v26);
        }
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl->Unk_5B)(this, 0);
        ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)_EBX, dword_A7D0EC);
        if ( ExtraData )
        {
          if ( ((int)ExtraData[1].__vftable & 0x10) != 0 )
            sub_4DE1C0((int)v10, _EBX);
        }
        if ( v10 )
        {
          CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
          if ( CharProxy )
            sub_4D9A50(CharProxy, 0);
          v29 = *((_DWORD *)this + 0x16);
          if ( v29 )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v29 + 0x470))(v29, 0);
        }
        sound = (_DWORD **)OSGlobals->sound;
        if ( sound )
        {
          __asm { fldz }
          __asm { fstp    [esp+68h+var_68]; float }
          sub_6AC420(sound, (int)this, v53);
        }
      }
      parentCell = this->member.parentCell;
      if ( !parentCell || parentCell->members.cellProcessLevel != 1 )
      {
        sub_678D90((int *)&ActorProcessManager_ptr, (LONG)this);
        if ( dword_B3B7D0 > 0 )
          sub_607B90(this, 1);
      }
      sub_6FFAC0((_WORD *)_EBX, off_A3CEB0);
      if ( !InterlockedDecrement((volatile LONG *)(_EBX + 4)) )
        (**(void (__thiscall ***)(int, int))_EBX)(_EBX, 1);
      Unk_51 = this->vtbl->Unk_51;
      niNode = 0;
      Unk_51(this);
      nullsub_returnTrue_0arg();
      v33 = (volatile LONG *)this->member.niNode;
      if ( v33 )
      {
        if ( !InterlockedDecrement(v33 + 1) )
          (**(void (__thiscall ***)(void *, int))v33)((void *)v33, 1);
        this->member.niNode = 0;
      }
      nullsub_returnTrue_0arg();
      if ( a5 )
        goto LABEL_78;
      if ( !this->member.baseForm )
        goto LABEL_77;
      v54 = this;
      if ( (this->member.super.flags & 0x80000) == 0 )
      {
        ((void (__thiscall *)(TESForm *, TESObjectREFR *))this->member.baseForm->vtbl[1].Unk_05)(
          this->member.baseForm,
          this);
LABEL_77:
        sub_4D9310((char *)this, 0);
LABEL_78:
        sub_4D7D10((MobileObject *)this, (volatile LONG *)a5);
        if ( a5 )
        {
          if ( v56 )
          {
            __asm { fld     [esp+64h+var_48] }
            v34 = v61;
            __asm { fabs }
            v35 = v62;
            __asm
            {
              fstp    [esp+64h+var_44]
              fld     [esp+64h+var_44]
            }
            a5->members.m_localTransform.pos.x = v60;
            __asm { fstp    dword ptr [ebx+60h] }
            a5->members.m_localTransform.scale = _ET1;
            qmemcpy(&a5->members.m_localTransform, v63, 0x24u);
            a5->members.m_localTransform.pos.y = v34;
            a5->members.m_localTransform.pos.z = v35;
            (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)v56 + 0x84))(v56, a5, 1);
            sub_897A20((int)a5, 1);
            NiAVObject_InitializePropertyState(a5);
            NiNode_UpdateDynamicEffectState((NiNode *)a5);
            __asm { fldz }
            __asm { fstp    [esp+6Ch+a2]; a2 }
            NiAVObject_UpdateNiAVObject(a5, a2, 0);
          }
          v38 = this->member.baseForm;
          if ( v38 )
          {
            if ( v38->member.type != kFormType_Tree )
            {
              m_extraDataListLen = a5->members.super.m_extraDataListLen;
              v40 = m_extraDataListLen;
              v41 = 0;
              if ( m_extraDataListLen )
              {
                while ( 1 )
                {
                  --v40;
                  if ( v41 )
                    break;
                  m_extraDataList = a5->members.super.m_extraDataList;
                  v43 = m_extraDataList[(unsigned __int16)v40];
                  if ( v43 )
                  {
                    v44 = (int)v43->__vftable->super.GetType((NiObject *)m_extraDataList[(unsigned __int16)v40]);
                    if ( v44 )
                    {
                      while ( (char *)v44 != dword_B35ACC )
                      {
                        v44 = *(_DWORD *)(v44 + 4);
                        if ( !v44 )
                          goto LABEL_91;
                      }
                      v41 = (int)v43;
                    }
                  }
LABEL_91:
                  if ( !v40 )
                  {
                    if ( !v41 )
                      goto LABEL_93;
                    break;
                  }
                }
                *(_DWORD *)(v41 + 0xC) = this;
              }
              else
              {
LABEL_93:
                *(float *)&v45 = COERCE_FLOAT(FormHeapAlloc(0x10u));
                v58 = *(float *)&v45;
                LOBYTE(v64) = 1;
                if ( *(float *)&v45 == 0.0 )
                {
                  LOBYTE(v64) = 0;
                  NiNode_AddNiExtraData((const void **)&a5->vtbl, v41, 0);
                }
                else
                {
                  v46 = sub_4D67C0(v45, (unsigned int)this);
                  LOBYTE(v64) = 0;
                  NiNode_AddNiExtraData((const void **)&a5->vtbl, v41, v46);
                }
              }
            }
          }
        }
        if ( !sub_45A500(SaveLoad_CurrentSavegame) && !a5 )
        {
          v47 = &this->member.baseExtraList;
          if ( ExtraDataList_GetTeleport(v47) )
          {
            Teleport = ExtraDataList_GetTeleport(v47);
            if ( sub_42B460(&Teleport->linkedDoor) )
            {
              v49 = ExtraDataList_GetTeleport(v47);
              v50 = sub_42B460(&v49->linkedDoor);
              sub_4CCA60(v50, 0);
            }
          }
        }
        return;
      }
    }
    else
    {
      if ( a5 )
        goto LABEL_78;
      v54 = this;
    }
    sub_439DC0((_DWORD **)ModelLoaderPtr, (volatile LONG *)v54);
    goto LABEL_77;
  }
}
