char __thiscall sub_5C3E10(_DWORD *this)
{
  TESForm *v2; // esi
  unsigned int v3; // ebx
  PlayerCharacter *v4; // ecx
  void (__thiscall *Unk_4C)(TESObjectREFR *); // edx
  Data *data; // eax
  char *v7; // esi
  unsigned int v8; // ebp
  int v9; // ebp
  int v10; // esi
  char *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  const char **v16; // ebp
  int v17; // esi
  char *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  _DWORD *v21; // eax
  NiNode *v22; // esi
  NiNode *v23; // eax
  NiNode *v24; // edi
  NiNode *v25; // esi
  NiNode *v26; // edi
  NiNode *v27; // esi
  int v28; // eax
  const char *v29; // eax
  char *m_data; // ebp
  int v31; // eax
  NiTexturingProperty *v32; // eax
  NiTexturingProperty *v33; // esi
  NiNode *v34; // edi
  NiNode *v35; // edi
  void (__thiscall ***v36)(_DWORD, int); // esi
  int v37; // eax
  NiAVObject *v38; // eax
  int v39; // eax
  NiAVObject *v40; // eax
  BSStringT v42; // [esp-14h] [ebp-54h] BYREF
  BSStringT v43; // [esp-Ch] [ebp-4Ch] BYREF
  int v44; // [esp-4h] [ebp-44h]
  char *v45; // [esp+0h] [ebp-40h]
  NiNode *v46; // [esp+18h] [ebp-28h]
  NiNode *v47; // [esp+1Ch] [ebp-24h]
  int v48; // [esp+20h] [ebp-20h] BYREF
  BSStringT *v49; // [esp+24h] [ebp-1Ch] BYREF
  BSStringT *v50; // [esp+28h] [ebp-18h]
  BSStringT ArgList; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int v52; // [esp+3Ch] [ebp-4h]

  v2 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  v3 = 0;
  v48 = (int)v2;
  v46 = 0;
  v52 = 0;
  v47 = 0;
  v4 = TESDataHandler_g_PlayerRef;
  Unk_4C = TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C;
  LOBYTE(v52) = 1;
  if ( !((int (__thiscall *)(PlayerCharacter *, _DWORD))Unk_4C)(v4, 0) )
    return 0;
  data = v2[9].member.modlist.data;
  v7 = &data->name[0x8C];
  v8 = 0xFFFFFFFF;
  if ( data == (Data *)0xFFFFFF58 )
    goto LABEL_11;
  while ( v8 != *(this + 0x21F) )
  {
    if ( v7 )
    {
      if ( *(_DWORD *)v7 )
      {
        if ( sub_51ED80(*(_BYTE **)v7) )
          ++v8;
      }
    }
    if ( v8 != *(this + 0x21F) )
      v7 = *((char **)v7 + 1);
    if ( !v7 )
      goto LABEL_11;
  }
  if ( !v7 )
  {
LABEL_11:
    v9 = v48;
    v10 = *(_DWORD *)(*(_DWORD *)(v48 + 0xE8) + 0xA8);
    if ( v10 )
    {
      v11 = *(char **)(v10 + 0x1C);
      if ( !v11 )
        v11 = EmptyString;
      v45 = v11;
      v12 = (const char *)dword_B38F90;
      v44 = 0xFB4;
      v50 = &v43;
      v43.m_data = 0;
      v43.m_dataLen = 0;
      v43.m_bufLen = 0;
      BSStringT_Set(&v43, v12, 0);
      v13 = (const char *)dword_B38F70;
      v49 = &v42;
      LOBYTE(v52) = 3;
      v42.m_data = 0;
      v42.m_dataLen = 0;
      v42.m_bufLen = 0;
      BSStringT_Set(&v42, v13, 0);
      LOBYTE(v52) = 1;
      v14 = (_DWORD *)sub_5C3440(
                        this,
                        v42.m_data,
                        *(int *)&v42.m_dataLen,
                        (unsigned __int8 *)v43.m_data,
                        *(int *)&v43.m_dataLen);
      Tile_SetString(v14, (_DWORD *)v44, v45);
      *(_DWORD *)(v9 + 0x1D0) = v10;
      goto LABEL_15;
    }
    return 0;
  }
  v17 = *(_DWORD *)v7;
  if ( !v17 )
    return 0;
  v18 = *(char **)(v17 + 0x1C);
  if ( !v18 )
    v18 = EmptyString;
  v45 = v18;
  v19 = (const char *)dword_B38F90;
  v44 = 0xFB4;
  v49 = &v43;
  v43.m_data = 0;
  v43.m_dataLen = 0;
  v43.m_bufLen = 0;
  BSStringT_Set(&v43, v19, 0);
  v20 = (const char *)dword_B38F70;
  v50 = &v42;
  LOBYTE(v52) = 2;
  v42.m_data = 0;
  v42.m_dataLen = 0;
  v42.m_bufLen = 0;
  BSStringT_Set(&v42, v20, 0);
  LOBYTE(v52) = 1;
  v21 = (_DWORD *)sub_5C3440(
                    this,
                    v42.m_data,
                    *(int *)&v42.m_dataLen,
                    (unsigned __int8 *)v43.m_data,
                    *(int *)&v43.m_dataLen);
  Tile_SetString(v21, (_DWORD *)v44, v45);
  *(_DWORD *)(v48 + 0x1D0) = v17;
LABEL_15:
  v49 = (BSStringT *)*(unsigned __int16 *)(((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                                             TESDataHandler_g_PlayerRef,
                                             0)
                                         + 0xB6);
  if ( v49 )
  {
    do
    {
      v15 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
              TESDataHandler_g_PlayerRef,
              0);
      if ( *(unsigned __int16 *)(v15 + 0xB6) > v3 )
        v16 = *(const char ***)(*(_DWORD *)(v15 + 0xB0) + 4 * v3);
      else
        v16 = 0;
      if ( !strcmp(v16[2], "FaceGenEyeLeft") )
      {
        v22 = (NiNode *)(*((int (__thiscall **)(const char **))*v16 + 4))(v16);
        if ( v46 != v22 )
        {
          if ( v46 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v46->members) )
              v46->vtbl->super.super.super.Destructor((NiRefObject *)v46, 1);
          }
          v46 = v22;
          if ( v22 )
            InterlockedIncrement((volatile LONG *)&v22->members);
        }
      }
      if ( !strcmp(v16[2], "FaceGenEyeRight") )
      {
        v23 = (NiNode *)(*((int (__thiscall **)(const char **))*v16 + 4))(v16);
        v24 = v47;
        v25 = v23;
        if ( v47 != v23 )
        {
          if ( v47 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v47->members) )
              v24->vtbl->super.super.super.Destructor((NiRefObject *)v24, 1);
          }
          v47 = v25;
          if ( v25 )
            InterlockedIncrement((volatile LONG *)&v25->members);
        }
      }
      ++v3;
    }
    while ( v3 < (unsigned int)v49 );
    v26 = v46;
    v27 = v47;
    if ( !v46 || !v47 )
      goto LABEL_60;
    ArgList.m_data = 0;
    *(_DWORD *)&ArgList.m_dataLen = 0;
    v28 = *(_DWORD *)(v48 + 0x1D0);
    LOBYTE(v52) = 4;
    if ( v28 )
    {
      v29 = *(const char **)(v28 + 0x28);
      if ( !v29 )
        v29 = EmptyString;
      BSStringT_Static_Format(&ArgList, "Textures\\%s", v29);
    }
    else
    {
      BSStringT_Static_Format(&ArgList, "Textures\\Characters\\Eyes\\EyeDefault.dds");
    }
    m_data = ArgList.m_data;
    sub_442890((UInt32 *)&v48, ArgList.m_data, 0, 0);
    v31 = v48;
    LOBYTE(v52) = 5;
    if ( v48 )
    {
      v32 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
      v50 = (BSStringT *)v32;
      LOBYTE(v52) = 6;
      if ( v32 )
        v33 = NiTexturingProperty::NiTexturingProperty(v32);
      else
        v33 = 0;
      LOBYTE(v52) = 5;
      NiTexturingProperty::SetUnk08(v33, (NiRenderedTexture *)v48);
      sub_405870(v33, 3);
      sub_405900(v33, 2);
      v34 = v46;
      if ( NiNode_GetNiPropertyByID(v46, 6) )
      {
        sub_708560(v34, (volatile LONG **)&v49, 6);
        sub_7016A0((NiD3DVertexShader *)&v49);
      }
      sub_405680(v34, (BSShaderProperty *)v33);
      v35 = v47;
      if ( NiNode_GetNiPropertyByID(v47, 6) )
      {
        sub_708560(v35, (volatile LONG **)&v49, 6);
        sub_7016A0((NiD3DVertexShader *)&v49);
      }
      sub_405680(v35, (BSShaderProperty *)v33);
      v31 = v48;
    }
    LOBYTE(v52) = 4;
    if ( v31 )
    {
      v36 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) )
        (**v36)(v36, 1);
    }
    LOBYTE(v52) = 1;
    FormHeapFree((unsigned int)m_data);
  }
  v27 = v47;
  v26 = v46;
LABEL_60:
  v37 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
          TESDataHandler_g_PlayerRef,
          0);
  v38 = (NiAVObject *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v37 + 0x58))(v37, "FaceGenEyeLeft");
  if ( v38 )
    sub_7B8940(v38, 1, 1, 1);
  v39 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
          TESDataHandler_g_PlayerRef,
          0);
  v40 = (NiAVObject *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v39 + 0x58))(v39, "FaceGenEyeRight");
  if ( v40 )
    sub_7B8940(v40, 1, 1, 1);
  LOBYTE(v52) = 0;
  if ( v27 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v27->members) )
      v27->vtbl->super.super.super.Destructor((NiRefObject *)v27, 1);
  }
  v52 = 0xFFFFFFFF;
  if ( v26 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v26->members) )
      v26->vtbl->super.super.super.Destructor((NiRefObject *)v26, 1);
  }
  return 1;
}
