char __thiscall sub_5C50A0(_DWORD *this, char arg0)
{
  PlayerCharacter *v3; // ecx
  void (__thiscall *Unk_4C)(TESObjectREFR *); // edx
  int *v6; // esi
  unsigned int v7; // ebp
  int v8; // esi
  char *v9; // eax
  char *v10; // eax
  char *v11; // edx
  _DWORD *v12; // eax
  char *v13; // eax
  char *v14; // eax
  char *v15; // edx
  _DWORD *v16; // eax
  unsigned int v17; // ebp
  int v18; // eax
  const char **v19; // eax
  int v20; // eax
  int v21; // ebp
  char *v22; // ecx
  int *v23; // edi
  const char *v24; // eax
  char *m_data; // esi
  char *v26; // eax
  char *v27; // esi
  const char *v28; // eax
  int *v29; // eax
  void (__thiscall ***v30)(_DWORD, int); // esi
  NiRenderedTexture *v31; // edi
  NiTexturingProperty *v32; // eax
  NiTexturingProperty *v33; // esi
  NiNode *v34; // esi
  BSShaderProperty *v35; // eax
  int v36; // eax
  void (__thiscall ***v37)(_DWORD, int); // esi
  int v38; // eax
  int v39; // eax
  NiAVObject *v40; // eax
  NiNode *v41; // esi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v43; // esi
  BOOL v44; // eax
  float *v45; // eax
  int v46; // ecx
  double v47; // st6
  BOOL v48; // eax
  float *v49; // eax
  int v50; // ecx
  double v51; // st6
  NiNode *v52; // eax
  NiAVObject *v53; // eax
  int v54; // edi
  NiProperty *v55; // eax
  NiProperty *v56; // esi
  BOOL v57; // eax
  float *v58; // eax
  int v59; // ecx
  double v60; // st6
  BOOL v61; // eax
  float *v62; // eax
  int v63; // ecx
  double v64; // st6
  NiAVObject *v65; // eax
  LONG (__stdcall *v66)(volatile LONG *); // edi
  NiNode *v67; // esi
  void (__thiscall ***v68)(_DWORD, int); // esi
  NiRenderedTexture *v69; // esi
  BSStringT v70; // [esp+4h] [ebp-10Ch] BYREF
  BSStringT v71; // [esp+Ch] [ebp-104h] BYREF
  int a2; // [esp+14h] [ebp-FCh]
  int v73; // [esp+18h] [ebp-F8h]
  int v74; // [esp+30h] [ebp-E0h] BYREF
  int v75; // [esp+34h] [ebp-DCh]
  NiNode *v76; // [esp+38h] [ebp-D8h] BYREF
  BSStringT v77; // [esp+3Ch] [ebp-D4h] BYREF
  BSStringT v78; // [esp+44h] [ebp-CCh] BYREF
  float v79; // [esp+4Ch] [ebp-C4h]
  float v80; // [esp+50h] [ebp-C0h]
  float v81; // [esp+54h] [ebp-BCh]
  float v82; // [esp+58h] [ebp-B8h]
  NiRenderedTexture *v83; // [esp+5Ch] [ebp-B4h] BYREF
  BSStringT ArgList; // [esp+60h] [ebp-B0h] BYREF
  int v85; // [esp+68h] [ebp-A8h] BYREF
  BSStringT *v86; // [esp+6Ch] [ebp-A4h]
  int v87; // [esp+70h] [ebp-A0h]
  __int16 v88; // [esp+74h] [ebp-9Ch]
  __int16 v89; // [esp+76h] [ebp-9Ah]
  int v90; // [esp+78h] [ebp-98h]
  __int16 v91; // [esp+7Ch] [ebp-94h]
  __int16 v92; // [esp+7Eh] [ebp-92h]
  float v93[9]; // [esp+80h] [ebp-90h] BYREF
  unsigned int a1[24]; // [esp+A4h] [ebp-6Ch] BYREF
  unsigned int v95; // [esp+10Ch] [ebp-4h]

  v75 = (int)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  v83 = 0;
  v95 = 0;
  v85 = 0;
  v76 = 0;
  ArgList.m_data = 0;
  ArgList.m_dataLen = 0;
  ArgList.m_bufLen = 0;
  v78.m_data = 0;
  *(_DWORD *)&v78.m_dataLen = 0;
  v77.m_data = 0;
  *(_DWORD *)&v77.m_dataLen = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v3 = TESDataHandler_g_PlayerRef;
  Unk_4C = TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C;
  LOBYTE(v95) = 7;
  if ( !((int (__thiscall *)(PlayerCharacter *, _DWORD))Unk_4C)(v3, 0) )
  {
LABEL_2:
    FormHeapFree(0);
    FormHeapFree(0);
    FormHeapFree((unsigned int)v77.m_data);
    v77.m_data = 0;
    *(_DWORD *)&v77.m_dataLen = 0;
    FormHeapFree((unsigned int)v78.m_data);
    v78.m_data = 0;
    *(_DWORD *)&v78.m_dataLen = 0;
    FormHeapFree(0);
    LOBYTE(v95) = 1;
    return 0;
  }
  if ( arg0 )
  {
    v6 = (int *)(*(_DWORD *)(v75 + 0xE8) + 0x8C);
    v7 = 0xFFFFFFFF;
    if ( *(_DWORD *)(v75 + 0xE8) == 0xFFFFFF74 )
      goto LABEL_2;
    while ( v7 != *(this + 0x21C) )
    {
      if ( v6 )
      {
        if ( *v6 )
        {
          if ( sub_51FE80((_BYTE *)*v6) )
          {
            if ( sub_51FFD0((_BYTE *)*v6, v75) )
              ++v7;
          }
        }
      }
      if ( v7 != *(this + 0x21C) )
        v6 = (int *)v6[1];
      if ( !v6 )
        goto LABEL_2;
    }
    if ( !v6 )
      goto LABEL_2;
    v8 = *v6;
    if ( !v8 )
    {
      FormHeapFree(0);
      FormHeapFree(0);
      FormHeapFree((unsigned int)v77.m_data);
      v77.m_data = 0;
      *(_DWORD *)&v77.m_dataLen = 0;
      FormHeapFree((unsigned int)v78.m_data);
      v78.m_data = 0;
      *(_DWORD *)&v78.m_dataLen = 0;
      FormHeapFree(0);
      LOBYTE(v95) = 1;
      sub_7016A0((NiD3DVertexShader *)&v76);
      LOBYTE(v95) = 0;
      sub_7016A0((NiD3DVertexShader *)&v85);
      v95 = 0xFFFFFFFF;
      sub_7016A0((NiD3DVertexShader *)&v83);
      return 0;
    }
    v9 = *(char **)(v8 + 0x1C);
    if ( !v9 )
      v9 = EmptyString;
    v73 = (int)v9;
    v10 = (char *)dword_B38F88;
    a2 = 0xFB4;
    *(float *)&v74 = COERCE_FLOAT(&v71);
    BSStringT_constr_str(&v71, v10);
    v11 = (char *)dword_B38F70;
    v86 = &v70;
    LOBYTE(v95) = 8;
    BSStringT_constr_str(&v70, v11);
    LOBYTE(v95) = 7;
    v12 = (_DWORD *)sub_5C3440(
                      this,
                      v70.m_data,
                      *(int *)&v70.m_dataLen,
                      (unsigned __int8 *)v71.m_data,
                      *(int *)&v71.m_dataLen);
    Tile_SetString(v12, (_DWORD *)a2, (char *)v73);
    v13 = *(char **)(v8 + 0x1C);
    if ( !v13 )
      v13 = EmptyString;
    v73 = (int)v13;
    v14 = (char *)dword_B38FB8;
    a2 = 0xFB4;
    v86 = &v71;
    BSStringT_constr_str(&v71, v14);
    v15 = (char *)dword_B38F88;
    *(float *)&v74 = COERCE_FLOAT(&v70);
    LOBYTE(v95) = 9;
    BSStringT_constr_str(&v70, v15);
    LOBYTE(v95) = 7;
    v16 = (_DWORD *)sub_5C3440(
                      this,
                      v70.m_data,
                      *(int *)&v70.m_dataLen,
                      (unsigned __int8 *)v71.m_data,
                      *(int *)&v71.m_dataLen);
    Tile_SetString(v16, (_DWORD *)a2, (char *)v73);
    *(_DWORD *)(v75 + 0x1C8) = v8;
    sub_5C34D0(this);
  }
  v17 = 0;
  v74 = *(unsigned __int16 *)(((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                                TESDataHandler_g_PlayerRef,
                                0)
                            + 0xB6);
  if ( *(float *)&v74 != 0.0 )
  {
    while ( 1 )
    {
      v18 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
              TESDataHandler_g_PlayerRef,
              0);
      v19 = *(unsigned __int16 *)(v18 + 0xB6) > v17 ? *(const char ***)(*(_DWORD *)(v18 + 0xB0) + 4 * v17) : 0;
      if ( !strcmp(v19[2], "FaceGenHair") )
        break;
      if ( ++v17 >= v74 )
        goto LABEL_78;
    }
    v20 = (*((int (__thiscall **)(const char **))*v19 + 4))(v19);
    v21 = v20;
    if ( v20 )
    {
      v85 = v20;
      InterlockedIncrement((volatile LONG *)(v20 + 4));
      v73 = (int)v22;
      if ( arg0 )
      {
        sub_70FD80(v93, flt_A3721C);
        v23 = (int *)v75;
        v24 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(v75 + 0x1C8) + 0x24) + 0x14))(*(_DWORD *)(v75 + 0x1C8) + 0x24);
        BSStringT_Static_Format(&ArgList, "Meshes\\%s", v24);
        m_data = ArgList.m_data;
        v73 = 1;
        a2 = 1;
        *(_DWORD *)&v71.m_dataLen = 0;
        v71.m_data = sub_550010(&v77, ArgList.m_data);
        *(_DWORD *)&v70.m_dataLen = m_data;
        v26 = sub_54FEB0(&v78, m_data);
        v27 = (char *)sub_553620((int)v26, *(int *)&v70.m_dataLen, (int)v71.m_data, *(int *)&v71.m_dataLen, a2, v73);
        ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
        LOBYTE(v95) = 0xA;
        sub_5221C0(v23, a1);
        if ( v27 )
          sub_559870(v27, a1, (Ni2DBuffer **)&v76);
        if ( v76 )
        {
          NiObjectNET_SetName((NiObjectNET *)v76, "FaceGenHair");
          v74 = v23[0x73];
          sub_550980((int)v76, *(float *)&v74);
          if ( (*(_BYTE *)(v21 + 0x18) & 1) != 0 )
            v76->members.super.m_flags |= 1u;
          v28 = *(const char **)(v23[0x72] + 0x40);
          if ( !v28 )
            v28 = EmptyString;
          BSStringT_Static_Format(&ArgList, "Textures\\%s", v28);
          v29 = (int *)sub_442890((UInt32 *)&v74, ArgList.m_data, 0, 0);
          LOBYTE(v95) = 0xB;
          sub_55E2A0((int *)&v83, v29);
          LOBYTE(v95) = 0xA;
          if ( *(float *)&v74 != 0.0 )
          {
            v30 = (void (__thiscall ***)(_DWORD, int))v74;
            if ( !InterlockedDecrement((volatile LONG *)(v74 + 4)) )
              (**v30)(v30, 1);
          }
          v31 = v83;
          if ( v83 )
          {
            v32 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
            v86 = (BSStringT *)v32;
            LOBYTE(v95) = 0xC;
            if ( v32 )
              v33 = NiTexturingProperty::NiTexturingProperty(v32);
            else
              v33 = 0;
            LOBYTE(v95) = 0xA;
            NiTexturingProperty::SetUnk08(v33, v31);
            sub_405870(v33, 3);
            sub_405900(v33, 2);
            if ( NiNode_GetNiPropertyByID(v76, 6) )
            {
              sub_708560(v76, (volatile LONG **)&v74, 6);
              sub_7016A0((NiD3DVertexShader *)&v74);
            }
            sub_405680(v76, (BSShaderProperty *)v33);
          }
          if ( !NiNode_GetNiPropertyByID(v76, 0) )
          {
            v34 = v76;
            v35 = (BSShaderProperty *)sub_550550();
            sub_405680(v34, v35);
          }
          qmemcpy(&v76->members.super.m_localTransform, v93, 0x24u);
          v36 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                  TESDataHandler_g_PlayerRef,
                  0);
          (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v36 + 0x88))(v36, &v74, v21);
          if ( *(float *)&v74 != 0.0 )
          {
            v37 = (void (__thiscall ***)(_DWORD, int))v74;
            if ( !InterlockedDecrement((volatile LONG *)(v74 + 4)) )
              (**v37)(v37, 1);
          }
          v38 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                  TESDataHandler_g_PlayerRef,
                  0);
          (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)v38 + 0x84))(v38, v76, 1);
          v39 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                  TESDataHandler_g_PlayerRef,
                  0);
          v40 = (NiAVObject *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v39 + 0x58))(v39, "FaceGenHair");
          v41 = (NiNode *)v40;
          if ( v40 )
          {
            sub_7B8940(v40, 1, 1, 1);
            NiPropertyByID = NiNode_GetNiPropertyByID(v41, 4);
            v43 = NiPropertyByID;
            if ( NiPropertyByID )
              v44 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 5;
            else
              v44 = 0;
            v45 = v44 ? (float *)v43 : 0;
            if ( v45 )
            {
              v46 = *(_DWORD *)(v75 + 0x1E8);
              v75 = (unsigned __int8)v46;
              v47 = dbl_A3DDD8;
              v79 = (double)(unsigned __int8)v46 / v47;
              v75 = BYTE2(v46);
              v45[0x2A] = v79;
              v80 = (double)BYTE1(v46) / v47;
              v45[0x2B] = v80;
              v81 = (double)v75 / v47;
              v82 = 1.0;
              v45[0x2C] = v81;
              v45[0x2D] = v82;
            }
            else
            {
              if ( v43 )
                v48 = (*((int (__thiscall **)(NiProperty *))v43->vtbl + 0x15))(v43) == 0xA;
              else
                v48 = 0;
              v49 = v48 ? (float *)v43 : 0;
              if ( v49 )
              {
                v50 = *(_DWORD *)(v75 + 0x1E8);
                v75 = (unsigned __int8)v50;
                v51 = dbl_A3DDD8;
                v79 = (double)(unsigned __int8)v50 / v51;
                v75 = BYTE2(v50);
                v49[0x3C] = v79;
                v80 = (double)BYTE1(v50) / v51;
                v49[0x3D] = v80;
                v81 = (double)v75 / v51;
                v82 = 1.0;
                v49[0x3E] = v81;
                v49[0x3F] = v82;
              }
            }
          }
          v52 = (NiNode *)((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                            TESDataHandler_g_PlayerRef,
                            0);
          NiNode_UpdateDynamicEffectState(v52);
          v53 = (NiAVObject *)((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                                TESDataHandler_g_PlayerRef,
                                0);
          NiAVObject_InitializePropertyState(v53);
        }
        LOBYTE(v95) = 7;
        _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
      }
      else
      {
        v54 = v75;
        v74 = *(int *)(v75 + 0x1CC);
        sub_550980(v21, *(float *)&v74);
        v55 = NiNode_GetNiPropertyByID((NiNode *)v21, 4);
        v56 = v55;
        if ( v55 )
          v57 = (*((int (__thiscall **)(NiProperty *))v55->vtbl + 0x15))(v55) == 5;
        else
          v57 = 0;
        v58 = v57 ? (float *)v56 : 0;
        if ( v58 )
        {
          v59 = *(_DWORD *)(v54 + 0x1E8);
          v74 = (unsigned __int8)v59;
          v60 = dbl_A3DDD8;
          v79 = (double)(unsigned __int8)v59 / v60;
          v74 = BYTE2(v59);
          v58[0x2A] = v79;
          v80 = (double)BYTE1(v59) / v60;
          v58[0x2B] = v80;
          v81 = (double)v74 / v60;
          v82 = 1.0;
          v58[0x2C] = v81;
          v58[0x2D] = v82;
        }
        else
        {
          if ( v56 )
            v61 = (*((int (__thiscall **)(NiProperty *))v56->vtbl + 0x15))(v56) == 0xA;
          else
            v61 = 0;
          v62 = v61 ? (float *)v56 : 0;
          if ( v62 )
          {
            v63 = *(_DWORD *)(v54 + 0x1E8);
            v74 = (unsigned __int8)v63;
            v64 = dbl_A3DDD8;
            v79 = (double)(unsigned __int8)v63 / v64;
            v74 = BYTE2(v63);
            v62[0x3C] = v79;
            v80 = (double)BYTE1(v63) / v64;
            v62[0x3D] = v80;
            v81 = (double)v74 / v64;
            v82 = 1.0;
            v62[0x3E] = v81;
            v62[0x3F] = v82;
          }
        }
      }
      v73 = 1;
      *(float *)&a2 = 0.0;
      v65 = (NiAVObject *)((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                            TESDataHandler_g_PlayerRef,
                            0);
      NiAVObject_UpdateNiAVObject(v65, *(float *)&a2, v73);
    }
  }
LABEL_78:
  FormHeapFree(0);
  FormHeapFree(0);
  FormHeapFree((unsigned int)v77.m_data);
  v77.m_data = 0;
  *(_DWORD *)&v77.m_dataLen = 0;
  FormHeapFree((unsigned int)v78.m_data);
  v78.m_data = 0;
  *(_DWORD *)&v78.m_dataLen = 0;
  FormHeapFree((unsigned int)ArgList.m_data);
  v66 = InterlockedDecrement;
  LOBYTE(v95) = 1;
  if ( v76 )
  {
    v67 = v76;
    if ( !v66((volatile LONG *)&v76->members) )
      v67->vtbl->super.super.super.Destructor((NiRefObject *)v67, 1);
  }
  v68 = (void (__thiscall ***)(_DWORD, int))v85;
  LOBYTE(v95) = 0;
  if ( v85 )
  {
    if ( !v66((volatile LONG *)(v85 + 4)) )
      (**v68)(v68, 1);
  }
  v69 = v83;
  v95 = 0xFFFFFFFF;
  if ( v83 )
  {
    if ( !v66((volatile LONG *)&v83->member) )
      v69->__vftable->super.super.super.Destructor((NiRefObject *)v69, 1);
  }
  return 1;
}
