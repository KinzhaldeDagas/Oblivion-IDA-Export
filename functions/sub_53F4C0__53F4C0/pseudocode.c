SkyObjectVtbl *__thiscall sub_53F4C0(SkyObject *this, float a2)
{
  Sky *GlobalObject; // ebx
  UInt32 unk0DC; // eax
  TESWeather *firstWeather; // edi
  TESWeather *secondWeather; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st7
  TESSaveLoad *v10; // ecx
  float v11; // edi
  int v12; // edi
  float v13; // edi
  NiNode *rootNode; // edi
  TESWeather *v15; // eax
  char *v16; // eax
  TESWeather *v17; // eax
  char *v18; // eax
  int v19; // eax
  int v20; // edi
  unsigned __int16 v21; // cx
  unsigned int v22; // ebx
  unsigned int v23; // eax
  int v24; // ebx
  char *v25; // eax
  __int64 v26; // rax
  char *v27; // edi
  float v28; // edi
  int v29; // edi
  bool v30; // zf
  TESObjectREFR *v31; // ecx
  NiAVObjectVtbl *vtbl; // eax
  TESObjectREFR *v33; // ecx
  TESObjectCELL *ParentCell; // eax
  double WaterHeight; // st7
  float v36; // edi
  NiNode *v37; // eax
  int v38; // esi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v40; // eax
  NiProperty *v41; // ebx
  unsigned __int16 *v42; // esi
  int v43; // ecx
  int v44; // eax
  __int16 v45; // bp
  int v46; // edi
  void (__thiscall *v47)(unsigned __int16 *, _DWORD); // edx
  unsigned int v48; // edi
  int v49; // eax
  int v50; // esi
  NiProperty *v51; // eax
  NiProperty *v52; // eax
  NiProperty *v53; // ebx
  unsigned __int16 *v54; // esi
  int v55; // ecx
  int v56; // eax
  __int16 v57; // bp
  int v58; // edi
  void (__thiscall *v59)(unsigned __int16 *, _DWORD); // edx
  NiNode *v60; // eax
  SkyObjectVtbl *result; // eax
  char *v62; // [esp+0h] [ebp-34h]
  char v63; // [esp+17h] [ebp-1Dh]
  float v65; // [esp+1Ch] [ebp-18h] BYREF
  float v66; // [esp+20h] [ebp-14h]
  float weatherPercent; // [esp+24h] [ebp-10h]
  float v68; // [esp+28h] [ebp-Ch]
  double v69; // [esp+2Ch] [ebp-8h]
  int m_controller; // [esp+38h] [ebp+4h]
  int v71; // [esp+38h] [ebp+4h]

  GlobalObject = Sky_CreateOrGetGlobalObject();
  unk0DC = GlobalObject->unk0DC;
  if ( unk0DC == 1 || (v63 = 0, !unk0DC) )
    v63 = 1;
  firstWeather = GlobalObject->firstWeather;
  weatherPercent = GlobalObject->weatherPercent;
  secondWeather = GlobalObject->secondWeather;
  v7 = dbl_A3F398;
  if ( firstWeather )
  {
    LODWORD(v68) = *((unsigned __int8 *)firstWeather + 0x4E);
    v8 = (dbl_A3F460 - 0.0) * ((double)SLODWORD(v68) * v7) + 0.0;
  }
  else
  {
    v8 = 0.0;
  }
  v66 = v8;
  if ( secondWeather )
  {
    LODWORD(v68) = *((unsigned __int8 *)secondWeather + 0x4F);
    v9 = v7 * (double)SLODWORD(v68) * dbl_A48DD8 + dbl_A30E40;
  }
  else
  {
    v9 = flt_A37080;
  }
  v10 = SaveLoad_CurrentSavegame;
  v68 = v9;
  if ( sub_45A500(v10) )
  {
    if ( *((_DWORD *)this + 2) )
    {
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**((_DWORD **)this + 3) + 0x88))(
        *((_DWORD *)this + 3),
        &v65,
        *((_DWORD *)this + 2));
      if ( v65 != 0.0 )
      {
        v11 = v65;
        if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v65) + 4)) )
          (**(void (__thiscall ***)(float, int))LODWORD(v11))(COERCE_FLOAT(LODWORD(v11)), 1);
      }
      v12 = *((_DWORD *)this + 2);
      if ( v12 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
          (**(void (__thiscall ***)(int, int))v12)(v12, 1);
        *((_DWORD *)this + 2) = 0;
      }
    }
    if ( this->members.rootNode )
    {
      (*(void (__thiscall **)(_DWORD, float *, NiNode *))(**((_DWORD **)this + 3) + 0x88))(
        *((_DWORD *)this + 3),
        &v65,
        this->members.rootNode);
      if ( v65 != 0.0 )
      {
        v13 = v65;
        if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v65) + 4)) )
          (**(void (__thiscall ***)(float, int))LODWORD(v13))(COERCE_FLOAT(LODWORD(v13)), 1);
      }
      rootNode = this->members.rootNode;
      if ( rootNode )
      {
        if ( !InterlockedDecrement((volatile LONG *)&rootNode->members) )
          rootNode->vtbl->super.super.super.Destructor((NiRefObject *)rootNode, 1);
        this->members.rootNode = 0;
      }
    }
    v15 = GlobalObject->secondWeather;
    if ( v15 )
    {
      v16 = (char *)(*(int (__thiscall **)(int))(*((_DWORD *)v15 + 0xC) + 0x14))((int)v15 + 0x30);
      sub_53F1F0((int)this, v16);
    }
    v17 = GlobalObject->firstWeather;
    if ( v17 )
    {
      v18 = (char *)(*(int (__thiscall **)(int))(*((_DWORD *)v17 + 0xC) + 0x14))((int)v17 + 0x30);
      sub_53F1F0((int)this, v18);
    }
    goto LABEL_48;
  }
  v19 = *((_DWORD *)this + 5);
  if ( v19 )
  {
    v20 = (int)firstWeather + 0x30;
    if ( v20 )
    {
      v21 = *(_WORD *)(v19 + 8);
      v22 = v21 == 0xFFFF ? strlen(*(const char **)(v19 + 4)) : v21;
      LOWORD(v23) = *(_WORD *)(v20 + 8);
      v23 = (_WORD)v23 == 0xFFFF ? strlen(*(const char **)(v20 + 4)) : (unsigned __int16)v23;
      if ( v22 == v23 )
      {
        v24 = *((_DWORD *)this + 5);
        v62 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x14))(v20);
        v25 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v24 + 0x14))(v24);
        if ( !_strcmp(v25, v62) )
        {
          v26 = ((__int64 (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v20 + 0x14))(v20);
          v27 = (char *)v26;
          if ( ModelLoader_IsModelLoaded__(ModelLoaderPtr, SHIDWORD(v26), v26) )
          {
            *((_DWORD *)this + 5) = 0;
            sub_53F1F0((int)this, v27);
            QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)v27, 1, 1);
          }
          goto LABEL_48;
        }
      }
    }
    *((_DWORD *)this + 5) = 0;
LABEL_47:
    sub_53F420(this, v20);
    goto LABEL_48;
  }
  if ( (GlobalObject->Flags0FC & 3) != 0 && firstWeather )
  {
    v20 = (int)firstWeather + 0x30;
    goto LABEL_47;
  }
LABEL_48:
  if ( weatherPercent >= 1.0 )
  {
    if ( *((_DWORD *)this + 2) )
    {
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**((_DWORD **)this + 3) + 0x88))(
        *((_DWORD *)this + 3),
        &v65,
        *((_DWORD *)this + 2));
      if ( v65 != 0.0 )
      {
        v28 = v65;
        if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v65) + 4)) )
          (**(void (__thiscall ***)(float, int))LODWORD(v28))(COERCE_FLOAT(LODWORD(v28)), 1);
      }
      v29 = *((_DWORD *)this + 2);
      if ( v29 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) )
          (**(void (__thiscall ***)(int, int))v29)(v29, 1);
        *((_DWORD *)this + 2) = 0;
      }
    }
  }
  v30 = this->members.rootNode == 0;
  *((float *)this + 4) = 0.0;
  if ( !v30 || *((_DWORD *)this + 2) )
  {
    v31 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    v30 = TESDataHandler_g_PlayerRef == 0;
    flt_B2DAEC = flt_B2DAEC + a2;
    if ( !v30 )
    {
      if ( TESObjectREFR_GetParentCell(v31) )
      {
        if ( (TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef)->members.flags0 & 2) != 0 )
        {
          if ( g_worldScenegraph->super.children.end )
            vtbl = g_worldScenegraph->super.children.data->vtbl;
          else
            vtbl = 0;
          v33 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
          v69 = *(float *)&vtbl[1].super.Unk_03;
          ParentCell = TESObjectREFR_GetParentCell(v33);
          WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell);
          if ( WaterHeight > v69 )
            v63 = 1;
        }
      }
    }
    if ( this->members.rootNode )
    {
      v65 = 0.0;
      if ( v66 < (double)weatherPercent )
        v65 = (weatherPercent - v66) / (1.0 - v66);
      v66 = 0.0;
LABEL_71:
      v36 = v66;
      while ( 1 )
      {
        v37 = this->members.rootNode;
        v38 = (unsigned int)v37->members.children.end > LODWORD(v36)
            ? *((_DWORD *)&v37->members.children.data->vtbl + LODWORD(v36))
            : 0;
        ++LODWORD(v36);
        v66 = v36;
        if ( !v38 )
          break;
        if ( NiNode_GetNiPropertyByID((NiNode *)v38, 4) )
        {
          NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v38, 4);
          if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xF )
          {
            v40 = NiNode_GetNiPropertyByID((NiNode *)v38, 4);
            v41 = v40;
            if ( v40 )
            {
              v42 = *(unsigned __int16 **)(v38 + 0xB4);
              m_controller = (int)v40[4].members.m_controller;
              v43 = (unsigned __int16)(v42[0x20] / m_controller);
              LODWORD(v69) = (unsigned __int16)m_controller | 0xC00;
              v44 = *(_DWORD *)v42;
              LODWORD(v69) = (int)((double)m_controller * v65);
              v45 = LOWORD(v69);
              v46 = v43 * LOWORD(v69);
              if ( (_WORD)v46 != (*(unsigned __int16 (__thiscall **)(unsigned __int16 *))(v44 + 0x5C))(v42) )
              {
                (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)v42 + 0x58))(v42, v46);
                v47 = *(void (__thiscall **)(unsigned __int16 *, _DWORD))(*(_DWORD *)v42 + 0x4C);
                if ( v45 )
                  v47(v42, v42[4]);
                else
                  v47(v42, 0);
              }
              *((float *)this + 4) = (double)(int)v41[4].members.m_controller * v65 + *((float *)this + 4);
              goto LABEL_71;
            }
          }
        }
      }
    }
    if ( *((_DWORD *)this + 2) )
    {
      v66 = 0.0;
      *(float *)&v48 = 0.0;
      if ( v68 > (double)weatherPercent )
        v66 = 1.0 - weatherPercent / v68;
      while ( 1 )
      {
        v49 = *((_DWORD *)this + 2);
        v50 = *(unsigned __int16 *)(v49 + 0xB6) > v48 ? *(_DWORD *)(*(_DWORD *)(v49 + 0xB0) + 4 * v48) : 0;
        ++v48;
        v68 = *(float *)&v48;
        if ( !v50 )
          break;
        if ( NiNode_GetNiPropertyByID((NiNode *)v50, 4) )
        {
          v51 = NiNode_GetNiPropertyByID((NiNode *)v50, 4);
          if ( (*((int (__thiscall **)(NiProperty *))v51->vtbl + 0x15))(v51) == 0xF )
          {
            v52 = NiNode_GetNiPropertyByID((NiNode *)v50, 4);
            v53 = v52;
            if ( v52 )
            {
              v54 = *(unsigned __int16 **)(v50 + 0xB4);
              v71 = (int)v52[4].members.m_controller;
              v55 = (unsigned __int16)(v54[0x20] / v71);
              LODWORD(v69) = (unsigned __int16)v71 | 0xC00;
              v56 = *(_DWORD *)v54;
              LODWORD(v69) = (int)((double)v71 * v66);
              v57 = LOWORD(v69);
              v58 = v55 * LOWORD(v69);
              if ( (_WORD)v58 != (*(unsigned __int16 (__thiscall **)(unsigned __int16 *))(v56 + 0x5C))(v54) )
              {
                (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)v54 + 0x58))(v54, v58);
                v59 = *(void (__thiscall **)(unsigned __int16 *, _DWORD))(*(_DWORD *)v54 + 0x4C);
                if ( v57 )
                  v59(v54, v54[4]);
                else
                  v59(v54, 0);
              }
              *((float *)this + 4) = (double)(int)v53[4].members.m_controller * v66 + *((float *)this + 4);
            }
            *(float *)&v48 = v68;
          }
        }
      }
    }
  }
  v60 = this->members.rootNode;
  if ( v60 )
  {
    if ( v63 )
      v60->members.super.m_flags |= 1u;
    else
      v60->members.super.m_flags &= ~1u;
  }
  result = *((SkyObjectVtbl **)this + 2);
  if ( result )
  {
    if ( v63 )
      LOWORD(result[2].GetObjectNode) |= 1u;
    else
      LOWORD(result[2].GetObjectNode) &= ~1u;
  }
  return result;
}
