void __usercall ActiveEffectsMenu_BuildPopup__(
        double a1@<st2>,
        double st6_0@<st1>,
        int a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v11; // ebx
  Tile **v12; // edi
  ActiveEffect *data; // esi
  int *effectItem; // ecx
  const char **v15; // ebx
  const char **v16; // eax
  int v17; // ebx
  bool v18; // zf
  EffectItem *v19; // eax
  UInt32 effectFlags; // ecx
  const char *m_data; // eax
  char *MagicTypeName; // eax
  TESBoundObject *boundObjectOrParentForm; // eax
  void *item; // eax
  char *v25; // eax
  int v26; // eax
  Tile *DescendantByName; // eax
  Tile **v28; // esi
  int v29; // edi
  Tile *v30; // ecx
  Tile *v31; // edi
  int v32; // esi
  _DWORD *v33; // ecx
  double Float; // st7
  _DWORD *v35; // ecx
  Tile *v36; // ecx
  int v37; // [esp+Ch] [ebp-17Ch]
  int v38; // [esp+10h] [ebp-178h]
  BSStringT v39; // [esp+14h] [ebp-174h]
  int v40; // [esp+1Ch] [ebp-16Ch]
  int v41; // [esp+20h] [ebp-168h]
  int v42; // [esp+24h] [ebp-164h]
  EffectNode *v43; // [esp+28h] [ebp-160h]
  BSStringT *v44; // [esp+2Ch] [ebp-15Ch]
  int v45; // [esp+30h] [ebp-158h]
  int v46; // [esp+34h] [ebp-154h]
  BSStringT v47; // [esp+38h] [ebp-150h]
  int v48; // [esp+40h] [ebp-148h]
  int v49; // [esp+44h] [ebp-144h]
  int v50[2]; // [esp+48h] [ebp-140h] BYREF
  _DWORD *a2; // [esp+50h] [ebp-138h]
  _DWORD *v52; // [esp+58h] [ebp-130h]
  _DWORD *v53; // [esp+68h] [ebp-120h]
  EffectSetting *v54; // [esp+6Ch] [ebp-11Ch]
  int v55; // [esp+70h] [ebp-118h]
  BSStringT v56; // [esp+74h] [ebp-114h] BYREF
  int v57; // [esp+7Ch] [ebp-10Ch]
  BSStringT name; // [esp+80h] [ebp-108h] BYREF
  int v59; // [esp+88h] [ebp-100h]
  Tile *v60; // [esp+8Ch] [ebp-FCh]
  double v61; // [esp+90h] [ebp-F8h] BYREF
  unsigned int v62; // [esp+9Ch] [ebp-ECh] BYREF
  char v63[12]; // [esp+A4h] [ebp-E4h] BYREF
  char v64[196]; // [esp+B0h] [ebp-D8h] BYREF

  v46 = a3; /*0x5b4a58*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x400); /*0x5b4a5c*/
  v49 = (int)OpenMenuTile; /*0x5b4a66*/
  if ( !OpenMenuTile ) /*0x5b4a6a*/
    return; /*0x5b4a6a*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5b4a80*/
  v9 = OblivionDynamicCast( /*0x5b4a86*/
         ParentMenu,
         0,
         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
         &MagicPopupMenu `RTTI Type Descriptor',
         0);
  v10 = v9; /*0x5b4a8b*/
  v48 = (int)v9; /*0x5b4a92*/
  if ( !v9 ) /*0x5b4a96*/
    return; /*0x5b4a96*/
  v9[0x16] = 1; /*0x5b4a9c*/
  v42 = *(_DWORD *)(a3 + 0x1C); /*0x5b4ab2*/
  v11 = 0; /*0x5b4ab9*/
  v41 = 0; /*0x5b4abb*/
  v43 = reference->super.super.magicTarget.vtbl->GetActiveEffectList(&reference->super.super.magicTarget); /*0x5b4ac3*/
  if ( !v43 ) /*0x5b4ac7*/
  {
LABEL_32:
    v28 = (Tile **)&v10[v11 + 0xB]; /*0x5b4d46*/
    v29 = 8 - v11; /*0x5b4d4f*/
    do /*0x5b4d69*/
    {
      v30 = *v28++; /*0x5b4d51*/
      Tile_SetFloat(v30, 0xFA1u, 1.0); /*0x5b4d61*/
      --v29; /*0x5b4d66*/
    }
    while ( v29 ); /*0x5b4d69*/
    goto LABEL_34; /*0x5b4d69*/
  }
  v12 = (Tile **)(v10 + 0xB); /*0x5b4acd*/
  do /*0x5b4ad4*/
  {
    data = v43->data; /*0x5b4ad4*/
    if ( !v43->data ) /*0x5b4ad4*/
      break; /*0x5b4ad4*/
    if ( v11 >= 8 ) /*0x5b4ae1*/
      goto LABEL_34; /*0x5b4ae1*/
    if ( *(_DWORD *)(v42 + 0x98) == 0x46464553 ) /*0x5b4af6*/
    {
      effectItem = (int *)data->members.effectItem; /*0x5b4af8*/
      if ( *(_DWORD *)(effectItem[7] + 0x98) == 0x46464553 ) /*0x5b4b04*/
      {
        v15 = (const char **)EffectItem_GetName(effectItem, (int)v50, v37, v38, v39, v40, v41, v42, (int)v43, v44); /*0x5b4b10*/
        v16 = (const char **)EffectItem_GetName( /*0x5b4b26*/
                               v52,
                               (int)&v56.m_dataLen,
                               v45,
                               v46,
                               v47,
                               v48,
                               v49,
                               v50[0],
                               v50[1],
                               (BSStringT *)a2);
        v17 = CRT_StricmpLocaleDispatch(*v16, *v15); /*0x5b4b3d*/
        BSStringT_Clear(&v62); /*0x5b4b3f*/
        BSStringT_Clear((unsigned int *)&v61); /*0x5b4b53*/
        v18 = v17 == 0; /*0x5b4b58*/
        v11 = (int)v53; /*0x5b4b5a*/
        if ( !v18 ) /*0x5b4b5e*/
          goto LABEL_29; /*0x5b4b5e*/
      }
    }
    v19 = data->members.effectItem; /*0x5b4b64*/
    if ( v54 != v19->setting ) /*0x5b4b6e*/
      goto LABEL_29; /*0x5b4b6e*/
    effectFlags = v54->effectFlags; /*0x5b4b74*/
    if ( ((effectFlags & 0x80000) != 0 || (effectFlags & 0x100000) != 0) /*0x5b4b93*/
      && *(_DWORD *)(v57 + 0x14) != v19->actorValueOrOther )
    {
      goto LABEL_29; /*0x5b4b93*/
    }
    m_data = v54->texture.super.path.m_data; /*0x5b4b9d*/
    if ( !m_data ) /*0x5b4ba2*/
      m_data = EmptyString; /*0x5b4ba4*/
    _sprintf(v64, "%s\\%s", "Icons", m_data); /*0x5b4bb9*/
    MagicTypeName = (char *)Magic_GetMagicTypeName(data->members.spellType); /*0x5b4bc2*/
    BSStringT_constr_str(&v56, MagicTypeName); /*0x5b4bcf*/
    BSStringT_Append(&v56, (char *)&word_A56274); /*0x5b4be8*/
    if ( (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)data->members.item + 0x18))(data->members.item) == 6 ) /*0x5b4bfa*/
    {
      boundObjectOrParentForm = data->members.boundObjectOrParentForm; /*0x5b4bfc*/
      if ( !boundObjectOrParentForm ) /*0x5b4c01*/
        goto LABEL_24; /*0x5b4c01*/
      item = OblivionDynamicCast( /*0x5b4c12*/
               boundObjectOrParentForm,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESFullName `RTTI Type Descriptor',
               0);
      if ( !item ) /*0x5b4c1c*/
        goto LABEL_24; /*0x5b4c1c*/
    }
    else
    {
      item = data->members.item; /*0x5b4c20*/
    }
    v25 = *((char **)item + 1); /*0x5b4c23*/
    if ( !v25 ) /*0x5b4c28*/
      v25 = EmptyString; /*0x5b4c2a*/
    BSStringT_Append(&v56, v25); /*0x5b4c34*/
LABEL_24:
    sub_5B2140((int)data); /*0x5b4c39*/
    if ( v26 >= 0 ) /*0x5b4c46*/
    {
      _sprintf(v63, " (%d)", v26); /*0x5b4c53*/
      BSStringT_Append(&v56, v63); /*0x5b4c64*/
    }
    Tile_SetFloat(*v12, 0xFA1u, fConstant_2); /*0x5b4c7a*/
    Tile_SetString(*v12, (_DWORD *)0xFAF, v64); /*0x5b4c8b*/
    Tile_SetString(*v12, (_DWORD *)0xFAE, v56.m_data); /*0x5b4c9c*/
    Tile_SetFloat(*v12, 0xFB0u, kTerrainLODQuadRayDirectionZ); /*0x5b4cb2*/
    name.m_data = 0; /*0x5b4cb7*/
    name.m_dataLen = 0; /*0x5b4cbb*/
    name.m_bufLen = 0; /*0x5b4cc0*/
    BSStringT_Static_Format(&name, "magicpop_effect_%d_icon", v11 + 1); /*0x5b4cdb*/
    DescendantByName = Tile_FindDescendantByName(*v12, name.m_data); /*0x5b4cea*/
    if ( DescendantByName ) /*0x5b4cf1*/
      *((_DWORD *)DescendantByName + 0xB) |= 0x10u; /*0x5b4cf9*/
    v53 = (_DWORD *)(v11 + 1); /*0x5b4d00*/
    ++v12; /*0x5b4d04*/
    BSStringT_Clear((unsigned int *)&name); /*0x5b4d0f*/
    BSStringT_Clear((unsigned int *)&v56); /*0x5b4d23*/
    ++v11; /*0x5b4d28*/
LABEL_29:
    v55 = *(_DWORD *)(v55 + 4); /*0x5b4d2a*/
  }
  while ( v55 ); /*0x5b4ad4*/
  if ( v11 < 8 ) /*0x5b4d40*/
  {
    v10 = (_DWORD *)v59; /*0x5b4d42*/
    goto LABEL_32; /*0x5b4d42*/
  }
LABEL_34:
  v31 = v60; /*0x5b4d6b*/
  Tile_SetFloat(v60, 0xFAEu, a5); /*0x5b4d7d*/
  Tile_SetFloat(v31, 0xFAFu, a6); /*0x5b4d90*/
  Tile_SetFloat(v31, 0xFB1u, a7); /*0x5b4da3*/
  v32 = v59; /*0x5b4dab*/
  v33 = *(_DWORD **)(v59 + 0x28); /*0x5b4daf*/
  *(float *)(v59 + 0x50) = a4; /*0x5b4db2*/
  v61 = a4; /*0x5b4dba*/
  Float = Tile_GetFloat(v33, 0xFCB); /*0x5b4dbe*/
  a2 = v35; /*0x5b4dc7*/
  v36 = *(Tile **)(v32 + 0x4C); /*0x5b4dc8*/
  *(float *)(v32 + 0x54) = v61 - Float; /*0x5b4dcb*/
  Tile_SetFloat(v36, 0xFA1u, 1.0); /*0x5b4dd8*/
  sub_58FBA0((int)v31, a1, st6_0, 1.0, 0); /*0x5b4de1*/
}
