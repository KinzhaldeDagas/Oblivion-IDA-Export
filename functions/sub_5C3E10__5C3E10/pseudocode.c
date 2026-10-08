char __thiscall sub_5C3E10(_DWORD *this)
{
  NiTexture *v2; // esi
  unsigned int v3; // ebx
  PlayerCharacter *v4; // ecx
  void (__thiscall *Unk_4C)(TESObjectREFR *); // edx
  NiTexture *nextTex; // eax
  MipMapFlag *p_formatPrefs; // esi
  unsigned int v8; // ebp
  NiTexture *v9; // ebp
  PixelLayout pixelLayout; // esi
  char *v11; // eax
  const char *value; // eax
  const char *v13; // eax
  Tile *ControlTile; // eax
  int v15; // eax
  const char **v16; // ebp
  MipMapFlag v17; // esi
  char *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  Tile *v21; // eax
  NiNode *v22; // esi
  NiNode *v23; // eax
  NiNode *v24; // edi
  NiNode *v25; // esi
  NiNode *v26; // edi
  NiNode *v27; // esi
  MipMapFlag mipmapFormat; // eax
  const char *v29; // eax
  char *m_data; // ebp
  NiTexture *v31; // eax
  NiTexturingProperty *v32; // eax
  NiTexturingProperty *v33; // esi
  int ***v34; // edi
  int ***v35; // edi
  NiTexture *v36; // esi
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
  NiTexture *texture; // [esp+20h] [ebp-20h] BYREF
  void *slot; // [esp+24h] [ebp-1Ch] BYREF
  BSStringT *v50; // [esp+28h] [ebp-18h]
  BSStringT ArgList; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int v52; // [esp+3Ch] [ebp-4h]

  v2 = (NiTexture *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c3e49*/
  v3 = 0; /*0x5c3e4b*/
  texture = v2; /*0x5c3e4d*/
  v46 = 0; /*0x5c3e51*/
  v52 = 0; /*0x5c3e55*/
  v47 = 0; /*0x5c3e59*/
  v4 = reference; /*0x5c3e5d*/
  Unk_4C = reference->vtbl->super.super.super.Unk_4C; /*0x5c3e65*/
  LOBYTE(v52) = 1; /*0x5c3e6c*/
  if ( !((int (__thiscall *)(PlayerCharacter *, _DWORD))Unk_4C)(v4, 0) ) /*0x5c3e75*/
    return 0; /*0x5c3e75*/
  nextTex = v2[4].members.nextTex; /*0x5c3e7b*/
  p_formatPrefs = (MipMapFlag *)&nextTex[3].members.formatPrefs; /*0x5c3e81*/
  v8 = 0xFFFFFFFF; /*0x5c3e87*/
  if ( nextTex == (NiTexture *)0xFFFFFF58 ) /*0x5c3e8c*/
    goto LABEL_11; /*0x5c3e8c*/
  while ( v8 != *(this + 0x21F) ) /*0x5c3e96*/
  {
    if ( p_formatPrefs ) /*0x5c3e9e*/
    {
      if ( *p_formatPrefs ) /*0x5c3ea0*/
      {
        if ( sub_51ED80(*(_BYTE **)p_formatPrefs) ) /*0x5c3ea6*/
          ++v8; /*0x5c3eaf*/
      }
    }
    if ( v8 != *(this + 0x21F) ) /*0x5c3eb8*/
      p_formatPrefs = *((MipMapFlag **)p_formatPrefs + 1); /*0x5c3eba*/
    if ( !p_formatPrefs ) /*0x5c3ebf*/
      goto LABEL_11; /*0x5c3ebf*/
  }
  if ( !p_formatPrefs ) /*0x5c3f95*/
  {
LABEL_11:
    v9 = texture; /*0x5c3ec1*/
    pixelLayout = texture[4].members.nextTex[3].members.formatPrefs.pixelLayout; /*0x5c3ecb*/
    if ( pixelLayout ) /*0x5c3ed3*/
    {
      v11 = *(char **)(pixelLayout + 0x1C); /*0x5c3ed9*/
      if ( !v11 ) /*0x5c3ede*/
        v11 = EmptyString; /*0x5c3ee0*/
      v45 = v11; /*0x5c3ee5*/
      value = stru_B38F90.value; /*0x5c3ee6*/
      v44 = 0xFB4; /*0x5c3eeb*/
      v50 = &v43; /*0x5c3ef5*/
      v43.m_data = 0; /*0x5c3efb*/
      v43.m_dataLen = 0; /*0x5c3efd*/
      v43.m_bufLen = 0; /*0x5c3f01*/
      BSStringT_Set(&v43, value, 0); /*0x5c3f05*/
      v13 = g_gameSetting_sMain.value; /*0x5c3f0a*/
      slot = &v42; /*0x5c3f14*/
      LOBYTE(v52) = 3; /*0x5c3f1a*/
      v42.m_data = 0; /*0x5c3f1f*/
      v42.m_dataLen = 0; /*0x5c3f21*/
      v42.m_bufLen = 0; /*0x5c3f25*/
      BSStringT_Set(&v42, v13, 0); /*0x5c3f29*/
      LOBYTE(v52) = 1; /*0x5c3f30*/
      ControlTile = RaceSexMenu_FindControlTile(this, v42, v43); /*0x5c3f35*/
      Tile_SetString(ControlTile, (_DWORD *)v44, v45); /*0x5c3f3c*/
      v9[9].members.formatPrefs.mipmapFormat = pixelLayout; /*0x5c3f41*/
      goto LABEL_15; /*0x5c3f41*/
    }
    return 0; /*0x5c431d*/
  }
  v17 = *p_formatPrefs; /*0x5c3f9b*/
  if ( v17 == kMipMap_Disabled ) /*0x5c3f9f*/
    return 0; /*0x5c3f9f*/
  v18 = *(char **)(v17 + 0x1C); /*0x5c3fa5*/
  if ( !v18 ) /*0x5c3faa*/
    v18 = EmptyString; /*0x5c3fac*/
  v45 = v18; /*0x5c3fb1*/
  v19 = stru_B38F90.value; /*0x5c3fb2*/
  v44 = 0xFB4; /*0x5c3fb7*/
  slot = &v43; /*0x5c3fc1*/
  v43.m_data = 0; /*0x5c3fc7*/
  v43.m_dataLen = 0; /*0x5c3fc9*/
  v43.m_bufLen = 0; /*0x5c3fcd*/
  BSStringT_Set(&v43, v19, 0); /*0x5c3fd1*/
  v20 = g_gameSetting_sMain.value; /*0x5c3fd6*/
  v50 = &v42; /*0x5c3fe0*/
  LOBYTE(v52) = 2; /*0x5c3fe6*/
  v42.m_data = 0; /*0x5c3feb*/
  v42.m_dataLen = 0; /*0x5c3fed*/
  v42.m_bufLen = 0; /*0x5c3ff1*/
  BSStringT_Set(&v42, v20, 0); /*0x5c3ff5*/
  LOBYTE(v52) = 1; /*0x5c3ffc*/
  v21 = RaceSexMenu_FindControlTile(this, v42, v43); /*0x5c4001*/
  Tile_SetString(v21, (_DWORD *)v44, v45); /*0x5c4008*/
  texture[9].members.formatPrefs.mipmapFormat = v17; /*0x5c4011*/
LABEL_15:
  slot = (void *)*(unsigned __int16 *)(((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)( /*0x5c3f47*/
                                         reference,
                                         0)
                                     + 0xB6);
  if ( slot ) /*0x5c3f65*/
  {
    do /*0x5c40d8*/
    {
      v15 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0); /*0x5c3f7b*/
      if ( *(unsigned __int16 *)(v15 + 0xB6) > v3 ) /*0x5c3f86*/
        v16 = *(const char ***)(*(_DWORD *)(v15 + 0xB0) + 4 * v3); /*0x5c4022*/
      else
        v16 = 0; /*0x5c3f8c*/
      if ( !strcmp(v16[2], "FaceGenEyeLeft") ) /*0x5c4034*/
      {
        v22 = (NiNode *)(*((int (__thiscall **)(const char **))*v16 + 4))(v16); /*0x5c4042*/
        if ( v46 != v22 ) /*0x5c404a*/
        {
          if ( v46 ) /*0x5c404e*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v46->members) ) /*0x5c4054*/
              v46->vtbl->super.super.super.Destructor((NiRefObject *)v46, 1); /*0x5c4068*/
          }
          v46 = v22; /*0x5c406c*/
          if ( v22 ) /*0x5c4070*/
            InterlockedIncrement((volatile LONG *)&v22->members); /*0x5c4076*/
        }
      }
      if ( !strcmp(v16[2], "FaceGenEyeRight") ) /*0x5c408b*/
      {
        v23 = (NiNode *)(*((int (__thiscall **)(const char **))*v16 + 4))(v16); /*0x5c4097*/
        v24 = v47; /*0x5c4099*/
        v25 = v23; /*0x5c409d*/
        if ( v47 != v23 ) /*0x5c40a1*/
        {
          if ( v47 ) /*0x5c40a5*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v47->members) ) /*0x5c40ab*/
              v24->vtbl->super.super.super.Destructor((NiRefObject *)v24, 1); /*0x5c40bd*/
          }
          v47 = v25; /*0x5c40c1*/
          if ( v25 ) /*0x5c40c5*/
            InterlockedIncrement((volatile LONG *)&v25->members); /*0x5c40cb*/
        }
      }
      ++v3; /*0x5c40d1*/
    }
    while ( v3 < (unsigned int)slot ); /*0x5c40d8*/
    v26 = v46; /*0x5c40de*/
    v27 = v47; /*0x5c40e4*/
    if ( !v46 || !v47 ) /*0x5c40f0*/
      goto LABEL_60; /*0x5c40f0*/
    ArgList.m_data = 0; /*0x5c40f8*/
    *(_DWORD *)&ArgList.m_dataLen = 0; /*0x5c40fc*/
    mipmapFormat = texture[9].members.formatPrefs.mipmapFormat; /*0x5c410a*/
    LOBYTE(v52) = 4; /*0x5c4112*/
    if ( mipmapFormat ) /*0x5c4117*/
    {
      v29 = *(const char **)(mipmapFormat + 0x28); /*0x5c4119*/
      if ( !v29 ) /*0x5c411e*/
        v29 = EmptyString; /*0x5c4120*/
      BSStringT_Static_Format(&ArgList, "Textures\\%s", v29); /*0x5c4130*/
    }
    else
    {
      BSStringT_Static_Format(&ArgList, "Textures\\Characters\\Eyes\\EyeDefault.dds"); /*0x5c4144*/
    }
    m_data = ArgList.m_data; /*0x5c414c*/
    OB_TES_LoadOrFindSourceTexture_010201A0((NiSourceTexture **)&texture, ArgList.m_data, 0, 0); /*0x5c415e*/
    v31 = texture; /*0x5c4163*/
    LOBYTE(v52) = 5; /*0x5c416b*/
    if ( texture ) /*0x5c416f*/
    {
      v32 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x5c4177*/
      v50 = (BSStringT *)v32; /*0x5c417f*/
      LOBYTE(v52) = 6; /*0x5c4185*/
      if ( v32 ) /*0x5c418a*/
        v33 = NiTexturingProperty::NiTexturingProperty(v32); /*0x5c4193*/
      else
        v33 = 0; /*0x5c4197*/
      LOBYTE(v52) = 5; /*0x5c41a0*/
      OB_NiTexturingProperty_SetBaseTexture_010201A0(v33, texture); /*0x5c41a4*/
      OB_NiTexturingProperty_SetClampMode_010201A0(v33, 3); /*0x5c41ad*/
      NiTexturingProperty_SetBaseMapFilterMode(v33, 2); /*0x5c41b6*/
      v34 = (int ***)v46; /*0x5c41bb*/
      if ( NiNode_GetNiPropertyByID(v46, 6) ) /*0x5c41c3*/
      {
        sub_708560(v34, (volatile LONG **)&slot, 6); /*0x5c41d5*/
        NiPointerSlot_Release(&slot); /*0x5c41de*/
      }
      sub_405680((NiNode *)v34, (BSShaderProperty *)v33); /*0x5c41e6*/
      v35 = (int ***)v47; /*0x5c41eb*/
      if ( NiNode_GetNiPropertyByID(v47, 6) ) /*0x5c41f3*/
      {
        sub_708560(v35, (volatile LONG **)&slot, 6); /*0x5c4205*/
        NiPointerSlot_Release(&slot); /*0x5c420e*/
      }
      sub_405680((NiNode *)v35, (BSShaderProperty *)v33); /*0x5c4216*/
      v31 = texture; /*0x5c421b*/
    }
    LOBYTE(v52) = 4; /*0x5c4221*/
    if ( v31 ) /*0x5c4226*/
    {
      v36 = v31; /*0x5c4228*/
      if ( !InterlockedDecrement((volatile LONG *)&v31->members) ) /*0x5c422e*/
        v36->__vftable->super.super.Destructor((NiRefObject *)v36, 1); /*0x5c4244*/
    }
    LOBYTE(v52) = 1; /*0x5c4247*/
    FormHeapFree((unsigned int)m_data); /*0x5c424c*/
  }
  v27 = v47; /*0x5c4254*/
  v26 = v46; /*0x5c4258*/
LABEL_60:
  v37 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0); /*0x5c425c*/
  v38 = (NiAVObject *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v37 + 0x58))(v37, "FaceGenEyeLeft"); /*0x5c427a*/
  if ( v38 ) /*0x5c427e*/
    BSShaderManager_AssignShadersRecursive(v38, 1u, 1, 1); /*0x5c4287*/
  v39 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0); /*0x5c429f*/
  v40 = (NiAVObject *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v39 + 0x58))(v39, "FaceGenEyeRight"); /*0x5c42ad*/
  if ( v40 ) /*0x5c42b1*/
    BSShaderManager_AssignShadersRecursive(v40, 1u, 1, 1); /*0x5c42ba*/
  LOBYTE(v52) = 0; /*0x5c42c4*/
  if ( v27 ) /*0x5c42c9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v27->members) ) /*0x5c42cf*/
      v27->vtbl->super.super.super.Destructor((NiRefObject *)v27, 1); /*0x5c42e1*/
  }
  v52 = 0xFFFFFFFF; /*0x5c42e5*/
  if ( v26 ) /*0x5c42ed*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v26->members) ) /*0x5c42f3*/
      v26->vtbl->super.super.super.Destructor((NiRefObject *)v26, 1); /*0x5c4305*/
  }
  return 1; /*0x5c4309*/
}
