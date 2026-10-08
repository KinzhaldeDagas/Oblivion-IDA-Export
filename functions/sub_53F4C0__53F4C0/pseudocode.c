SkyObjectVtbl *__thiscall sub_53F4C0(SkyObject *this, float a2)
{
  Sky *GlobalObject; // ebx
  UInt32 unk0DC; // eax
  TESWeather *firstWeather; // edi
  TESWeather *secondWeather; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st7
  TESSaveLoadGame_SerializationView *v10; // ecx
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
  const char *v25; // eax
  __int64 v26; // rax
  char *v27; // edi
  float v28; // edi
  int v29; // edi
  bool v30; // zf
  PlayerCharacter *v31; // ecx
  int v32; // eax
  PlayerCharacter *v33; // ecx
  ExtraDataList *DwordAtOffset40; // eax
  double WaterHeight; // st7
  float v36; // edi
  NiNode *v37; // eax
  NiAVObject *v38; // esi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v40; // eax
  NiProperty *v41; // ebx
  unsigned __int16 *m_pcName; // esi
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
  const char *v62; // [esp+0h] [ebp-34h]
  char v63; // [esp+17h] [ebp-1Dh]
  float v65; // [esp+1Ch] [ebp-18h] BYREF
  float v66; // [esp+20h] [ebp-14h]
  float weatherPercent; // [esp+24h] [ebp-10h]
  float v68; // [esp+28h] [ebp-Ch]
  double v69; // [esp+2Ch] [ebp-8h]
  int m_controller; // [esp+38h] [ebp+4h]
  int v71; // [esp+38h] [ebp+4h]

  GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x53f4d2*/
  unk0DC = GlobalObject->unk0DC; /*0x53f4d4*/
  if ( unk0DC == 1 || (v63 = 0, !unk0DC) ) /*0x53f4e8*/
    v63 = 1; /*0x53f4ea*/
  firstWeather = GlobalObject->firstWeather; /*0x53f4ef*/
  weatherPercent = GlobalObject->weatherPercent; /*0x53f4fa*/
  secondWeather = GlobalObject->secondWeather; /*0x53f4fe*/
  v7 = dbl_A3F398; /*0x53f501*/
  if ( firstWeather ) /*0x53f507*/
  {
    LODWORD(v68) = *((unsigned __int8 *)firstWeather + 0x4E); /*0x53f50d*/
    v8 = (dbl_A3F460 - 0.0) * ((double)SLODWORD(v68) * v7) + 0.0; /*0x53f525*/
  }
  else
  {
    v8 = 0.0; /*0x53f529*/
  }
  v66 = v8; /*0x53f52d*/
  if ( secondWeather ) /*0x53f531*/
  {
    LODWORD(v68) = *((unsigned __int8 *)secondWeather + 0x4F); /*0x53f537*/
    v9 = v7 * (double)SLODWORD(v68) * dbl_A48DD8 + dbl_A30E40; /*0x53f547*/
  }
  else
  {
    v9 = flt_A37080; /*0x53f551*/
  }
  v10 = g_TESSaveLoadGame; /*0x53f557*/
  v68 = v9; /*0x53f55d*/
  if ( sub_45A500(v10) ) /*0x53f561*/
  {
    if ( *((_DWORD *)this + 2) ) /*0x53f56e*/
    {
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**((_DWORD **)this + 3) + 0x88))( /*0x53f586*/
        *((_DWORD *)this + 3),
        &v65,
        *((_DWORD *)this + 2));
      if ( v65 != 0.0 ) /*0x53f58e*/
      {
        v11 = v65; /*0x53f590*/
        if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v65) + 4)) ) /*0x53f596*/
          (**(void (__thiscall ***)(float, int))LODWORD(v11))(COERCE_FLOAT(LODWORD(v11)), 1); /*0x53f5ac*/
      }
      v12 = *((_DWORD *)this + 2); /*0x53f5ae*/
      if ( v12 ) /*0x53f5b3*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x53f5b9*/
          (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x53f5cf*/
        *((_DWORD *)this + 2) = 0; /*0x53f5d1*/
      }
    }
    if ( this->members.rootNode ) /*0x53f5d4*/
    {
      (*(void (__thiscall **)(_DWORD, float *, NiNode *))(**((_DWORD **)this + 3) + 0x88))( /*0x53f5ec*/
        *((_DWORD *)this + 3),
        &v65,
        this->members.rootNode);
      if ( v65 != 0.0 ) /*0x53f5f4*/
      {
        v13 = v65; /*0x53f5f6*/
        if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v65) + 4)) ) /*0x53f5fc*/
          (**(void (__thiscall ***)(float, int))LODWORD(v13))(COERCE_FLOAT(LODWORD(v13)), 1); /*0x53f612*/
      }
      rootNode = this->members.rootNode; /*0x53f614*/
      if ( rootNode ) /*0x53f619*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&rootNode->members) ) /*0x53f61f*/
          rootNode->vtbl->super.super.super.Destructor((NiRefObject *)rootNode, 1); /*0x53f635*/
        this->members.rootNode = 0; /*0x53f637*/
      }
    }
    v15 = GlobalObject->secondWeather; /*0x53f63a*/
    if ( v15 ) /*0x53f63f*/
    {
      v16 = (char *)(*(int (__thiscall **)(int))(*((_DWORD *)v15 + 0xC) + 0x14))((int)v15 + 0x30); /*0x53f64a*/
      sub_53F1F0((int)this, v16); /*0x53f64f*/
    }
    v17 = GlobalObject->firstWeather; /*0x53f654*/
    if ( v17 ) /*0x53f659*/
    {
      v18 = (char *)(*(int (__thiscall **)(int))(*((_DWORD *)v17 + 0xC) + 0x14))((int)v17 + 0x30); /*0x53f668*/
      sub_53F1F0((int)this, v18); /*0x53f66d*/
    }
    goto LABEL_48; /*0x53f672*/
  }
  v19 = *((_DWORD *)this + 5); /*0x53f677*/
  if ( v19 )
  {
    v20 = (int)firstWeather + 0x30; /*0x53f682*/
    if ( v20 )
    {
      v21 = *(_WORD *)(v19 + 8); /*0x53f68d*/
      v22 = v21 == 0xFFFF ? strlen(*(const char **)(v19 + 4)) : v21;
      LOWORD(v23) = *(_WORD *)(v20 + 8); /*0x53f6b2*/
      v23 = (_WORD)v23 == 0xFFFF ? strlen(*(const char **)(v20 + 4)) : (unsigned __int16)v23;
      if ( v22 == v23 ) /*0x53f6d4*/
      {
        v24 = *((_DWORD *)this + 5); /*0x53f6db*/
        v62 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x14))(v20); /*0x53f6e4*/
        v25 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v24 + 0x14))(v24); /*0x53f6ea*/
        if ( !CRT_StricmpLocaleDispatch(v25, v62) ) /*0x53f6ed*/
        {
          v26 = ((__int64 (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v20 + 0x14))(v20); /*0x53f700*/
          v27 = (char *)v26; /*0x53f708*/
          if ( ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], SHIDWORD(v26), v26) ) /*0x53f70b*/
          {
            *((_DWORD *)this + 5) = 0; /*0x53f717*/
            sub_53F1F0((int)this, v27); /*0x53f71a*/
            QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)v27, 1, 1); /*0x53f72a*/
          }
          goto LABEL_48; /*0x53f72f*/
        }
      }
    }
    *((_DWORD *)this + 5) = 0; /*0x53f731*/
LABEL_47:
    sub_53F420(this, v20); /*0x53f746*/
    goto LABEL_48; /*0x53f749*/
  }
  if ( (GlobalObject->Flags0FC & 3) != 0 && firstWeather ) /*0x53f741*/
  {
    v20 = (int)firstWeather + 0x30; /*0x53f743*/
    goto LABEL_47; /*0x53f743*/
  }
LABEL_48:
  if ( weatherPercent >= 1.0 ) /*0x53f759*/
  {
    if ( *((_DWORD *)this + 2) ) /*0x53f75b*/
    {
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**((_DWORD **)this + 3) + 0x88))( /*0x53f773*/
        *((_DWORD *)this + 3),
        &v65,
        *((_DWORD *)this + 2));
      if ( v65 != 0.0 ) /*0x53f77b*/
      {
        v28 = v65; /*0x53f77d*/
        if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v65) + 4)) ) /*0x53f783*/
          (**(void (__thiscall ***)(float, int))LODWORD(v28))(COERCE_FLOAT(LODWORD(v28)), 1); /*0x53f799*/
      }
      v29 = *((_DWORD *)this + 2); /*0x53f79b*/
      if ( v29 ) /*0x53f7a0*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) ) /*0x53f7a6*/
          (**(void (__thiscall ***)(int, int))v29)(v29, 1); /*0x53f7bc*/
        *((_DWORD *)this + 2) = 0; /*0x53f7be*/
      }
    }
  }
  v30 = this->members.rootNode == 0; /*0x53f7c1*/
  *((float *)this + 4) = 0.0; /*0x53f7c6*/
  if ( !v30 || *((_DWORD *)this + 2) )
  {
    v31 = reference; /*0x53f7dc*/
    v30 = reference == 0; /*0x53f7e2*/
    flt_B2DAEC = flt_B2DAEC + a2; /*0x53f7e8*/
    if ( !v30 ) /*0x53f7ee*/
    {
      if ( Shared_GetDwordAtOffset40(v31) ) /*0x53f7f0*/
      {
        if ( (*(_BYTE *)(Shared_GetDwordAtOffset40(reference) + 0x24) & 2) != 0 ) /*0x53f80d*/
        {
          if ( *((_WORD *)g_WorldSceneReceiverRoot + 0x5B) ) /*0x53f814*/
            v32 = **((_DWORD **)g_WorldSceneReceiverRoot + 0x2C); /*0x53f827*/
          else
            v32 = 0; /*0x53f81d*/
          v33 = reference; /*0x53f82f*/
          v69 = *(float *)(v32 + 0x90); /*0x53f835*/
          DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v33); /*0x53f839*/
          WaterHeight = TESObjectCELL_GetWaterHeight(DwordAtOffset40); /*0x53f840*/
          if ( WaterHeight > v69 ) /*0x53f84e*/
            v63 = 1; /*0x53f850*/
        }
      }
    }
    if ( this->members.rootNode )
    {
      v65 = 0.0; /*0x53f860*/
      if ( v66 < (double)weatherPercent ) /*0x53f873*/
        v65 = (weatherPercent - v66) / (1.0 - v66); /*0x53f87f*/
      v66 = 0.0; /*0x53f889*/
LABEL_71:
      v36 = v66; /*0x53f891*/
      while ( 1 )
      {
        v37 = this->members.rootNode; /*0x53f8a4*/
        v38 = (unsigned int)v37->members.children.end > LODWORD(v36) ? v37->members.children.data[LODWORD(v36)] : 0;
        ++LODWORD(v36); /*0x53f8bf*/
        v66 = v36; /*0x53f8c4*/
        if ( !v38 ) /*0x53f8c8*/
          break; /*0x53f8c8*/
        if ( NiNode_GetNiPropertyByID((NiNode *)v38, 4) ) /*0x53f8d2*/
        {
          NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v38, 4); /*0x53f8df*/
          if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xF ) /*0x53f8f9*/
          {
            v40 = NiNode_GetNiPropertyByID((NiNode *)v38, 4); /*0x53f8ff*/
            v41 = v40; /*0x53f904*/
            if ( v40 ) /*0x53f908*/
            {
              m_pcName = (unsigned __int16 *)v38[1].members.super.m_pcName; /*0x53f90a*/
              m_controller = (int)v40[4].members.m_controller; /*0x53f91a*/
              v43 = (unsigned __int16)(m_pcName[0x20] / m_controller); /*0x53f92a*/
              LODWORD(v69) = (unsigned __int16)m_controller | 0xC00; /*0x53f937*/
              v44 = *(_DWORD *)m_pcName; /*0x53f93b*/
              LODWORD(v69) = (int)((double)m_controller * v65); /*0x53f941*/
              v45 = LOWORD(v69); /*0x53f94a*/
              v46 = v43 * LOWORD(v69); /*0x53f956*/
              if ( (_WORD)v46 != (*(unsigned __int16 (__thiscall **)(unsigned __int16 *))(v44 + 0x5C))(m_pcName) ) /*0x53f960*/
              {
                (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)m_pcName + 0x58))(m_pcName, v46); /*0x53f96a*/
                v47 = *(void (__thiscall **)(unsigned __int16 *, _DWORD))(*(_DWORD *)m_pcName + 0x4C); /*0x53f971*/
                if ( v45 ) /*0x53f974*/
                  v47(m_pcName, m_pcName[4]); /*0x53f97b*/
                else
                  v47(m_pcName, 0); /*0x53f981*/
              }
              *((float *)this + 4) = (double)(int)v41[4].members.m_controller * v65 + *((float *)this + 4); /*0x53f991*/
              goto LABEL_71; /*0x53f994*/
            }
          }
        }
      }
    }
    if ( *((_DWORD *)this + 2) )
    {
      v66 = 0.0; /*0x53f9a9*/
      *(float *)&v48 = 0.0; /*0x53f9c0*/
      if ( v68 > (double)weatherPercent ) /*0x53f9bc*/
        v66 = 1.0 - weatherPercent / v68; /*0x53f9c6*/
      while ( 1 )
      {
        v49 = *((_DWORD *)this + 2); /*0x53f9e4*/
        v50 = *(unsigned __int16 *)(v49 + 0xB6) > v48 ? *(_DWORD *)(*(_DWORD *)(v49 + 0xB0) + 4 * v48) : 0;
        ++v48; /*0x53f9ff*/
        v68 = *(float *)&v48; /*0x53fa04*/
        if ( !v50 ) /*0x53fa08*/
          break; /*0x53fa08*/
        if ( NiNode_GetNiPropertyByID((NiNode *)v50, 4) ) /*0x53fa12*/
        {
          v51 = NiNode_GetNiPropertyByID((NiNode *)v50, 4); /*0x53fa1f*/
          if ( (*((int (__thiscall **)(NiProperty *))v51->vtbl + 0x15))(v51) == 0xF ) /*0x53fa39*/
          {
            v52 = NiNode_GetNiPropertyByID((NiNode *)v50, 4); /*0x53fa3f*/
            v53 = v52; /*0x53fa44*/
            if ( v52 ) /*0x53fa48*/
            {
              v54 = *(unsigned __int16 **)(v50 + 0xB4); /*0x53fa4a*/
              v71 = (int)v52[4].members.m_controller; /*0x53fa5a*/
              v55 = (unsigned __int16)(v54[0x20] / v71); /*0x53fa6a*/
              LODWORD(v69) = (unsigned __int16)v71 | 0xC00; /*0x53fa77*/
              v56 = *(_DWORD *)v54; /*0x53fa7b*/
              LODWORD(v69) = (int)((double)v71 * v66); /*0x53fa81*/
              v57 = LOWORD(v69); /*0x53fa8a*/
              v58 = v55 * LOWORD(v69); /*0x53fa96*/
              if ( (_WORD)v58 != (*(unsigned __int16 (__thiscall **)(unsigned __int16 *))(v56 + 0x5C))(v54) ) /*0x53faa0*/
              {
                (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)v54 + 0x58))(v54, v58); /*0x53faaa*/
                v59 = *(void (__thiscall **)(unsigned __int16 *, _DWORD))(*(_DWORD *)v54 + 0x4C); /*0x53fab1*/
                if ( v57 ) /*0x53fab4*/
                  v59(v54, v54[4]); /*0x53fabb*/
                else
                  v59(v54, 0); /*0x53fac1*/
              }
              *((float *)this + 4) = (double)(int)v53[4].members.m_controller * v66 + *((float *)this + 4); /*0x53fad1*/
            }
            *(float *)&v48 = v68; /*0x53f9d4*/
          }
        }
      }
    }
  }
  v60 = this->members.rootNode; /*0x53fadd*/
  if ( v60 ) /*0x53fae7*/
  {
    if ( v63 ) /*0x53faee*/
      v60->members.super.m_flags |= 1u; /*0x53faf0*/
    else
      v60->members.super.m_flags &= ~1u; /*0x53faf7*/
  }
  result = *((SkyObjectVtbl **)this + 2); /*0x53fafb*/
  if ( result ) /*0x53fb00*/
  {
    if ( v63 ) /*0x53fb07*/
      LOWORD(result[2].GetObjectNode) |= 1u; /*0x53fb09*/
    else
      LOWORD(result[2].GetObjectNode) &= ~1u; /*0x53fb18*/
  }
  return result; /*0x53fb0e*/
}
