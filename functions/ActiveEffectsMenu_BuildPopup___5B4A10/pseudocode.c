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
  char **Name; // ebx
  char **v16; // eax
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
  int v27; // eax
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
  int v39; // [esp+14h] [ebp-174h]
  int v40; // [esp+18h] [ebp-170h]
  int v41; // [esp+1Ch] [ebp-16Ch]
  int v42; // [esp+20h] [ebp-168h]
  int v43; // [esp+24h] [ebp-164h]
  EffectNode *v44; // [esp+28h] [ebp-160h]
  int v45; // [esp+2Ch] [ebp-15Ch]
  int v46; // [esp+30h] [ebp-158h]
  int v47; // [esp+34h] [ebp-154h]
  unsigned __int8 *v48; // [esp+38h] [ebp-150h]
  int v49; // [esp+3Ch] [ebp-14Ch]
  int v50; // [esp+40h] [ebp-148h]
  int v51; // [esp+44h] [ebp-144h]
  int v52[2]; // [esp+48h] [ebp-140h] BYREF
  _DWORD *a2; // [esp+50h] [ebp-138h]
  _DWORD *v54; // [esp+58h] [ebp-130h]
  _DWORD *v55; // [esp+68h] [ebp-120h]
  EffectSetting *v56; // [esp+6Ch] [ebp-11Ch]
  int v57; // [esp+70h] [ebp-118h]
  BSStringT v58; // [esp+74h] [ebp-114h] BYREF
  int v59; // [esp+7Ch] [ebp-10Ch]
  BSStringT v60; // [esp+80h] [ebp-108h] BYREF
  int v61; // [esp+88h] [ebp-100h]
  Tile *v62; // [esp+8Ch] [ebp-FCh]
  double v63; // [esp+90h] [ebp-F8h] BYREF
  unsigned int v64; // [esp+9Ch] [ebp-ECh] BYREF
  char v65[12]; // [esp+A4h] [ebp-E4h] BYREF
  char v66[196]; // [esp+B0h] [ebp-D8h] BYREF

  v47 = a3;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x400);
  v51 = (int)OpenMenuTile;
  if ( !OpenMenuTile )
    return;
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  v9 = OblivionDynamicCast(
         ParentMenu,
         0,
         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
         &MagicPopupMenu `RTTI Type Descriptor',
         0);
  v10 = v9;
  v50 = (int)v9;
  if ( !v9 )
    return;
  v9[0x16] = 1;
  v43 = *(_DWORD *)(a3 + 0x1C);
  v11 = 0;
  v42 = 0;
  v44 = TESDataHandler_g_PlayerRef->super.super.magicTarget.vtbl->GetEffectList(&TESDataHandler_g_PlayerRef->super.super.magicTarget);
  if ( !v44 )
  {
LABEL_32:
    v28 = (Tile **)&v10[v11 + 0xB];
    v29 = 8 - v11;
    do
    {
      v30 = *v28++;
      Tile_SetFloat(v30, (_DWORD *)0xFA1, 1.0);
      --v29;
    }
    while ( v29 );
    goto LABEL_34;
  }
  v12 = (Tile **)(v10 + 0xB);
  do
  {
    data = v44->data;
    if ( !v44->data )
      break;
    if ( v11 >= 8 )
      goto LABEL_34;
    if ( *(_DWORD *)(v43 + 0x98) == 0x46464553 )
    {
      effectItem = (int *)data->members.effectItem;
      if ( *(_DWORD *)(effectItem[7] + 0x98) == 0x46464553 )
      {
        Name = (char **)EffectItem_GetName(effectItem, (int)v52, v37, v38, v39, v40, v41, v42, v43, (int)v44, v45);
        v16 = (char **)EffectItem_GetName(
                         v54,
                         (int)&v58.m_dataLen,
                         v46,
                         v47,
                         (int)v48,
                         v49,
                         v50,
                         v51,
                         v52[0],
                         v52[1],
                         (int)a2);
        v17 = _strcmp(*v16, *Name);
        BSStringT_Clear(&v64);
        BSStringT_Clear((unsigned int *)&v63);
        v18 = v17 == 0;
        v11 = (int)v55;
        if ( !v18 )
          goto LABEL_29;
      }
    }
    v19 = data->members.effectItem;
    if ( v56 != v19->setting )
      goto LABEL_29;
    effectFlags = v56->effectFlags;
    if ( ((effectFlags & 0x80000) != 0 || (effectFlags & 0x100000) != 0)
      && *(_DWORD *)(v59 + 0x14) != v19->actorValueOrOther )
    {
      goto LABEL_29;
    }
    m_data = v56->texture.super.path.m_data;
    if ( !m_data )
      m_data = EmptyString;
    _sprintf(v66, "%s\\%s", "Icons", m_data);
    MagicTypeName = (char *)Magic_GetMagicTypeName(data->members.spellType);
    BSStringT_constr_str(&v58, MagicTypeName);
    BSStringT_Append(&v58, (char *)&word_A56274);
    if ( (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)data->members.item + 0x18))(data->members.item) == 6 )
    {
      boundObjectOrParentForm = data->members.boundObjectOrParentForm;
      if ( !boundObjectOrParentForm )
        goto LABEL_24;
      item = OblivionDynamicCast(
               boundObjectOrParentForm,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESFullName `RTTI Type Descriptor',
               0);
      if ( !item )
        goto LABEL_24;
    }
    else
    {
      item = data->members.item;
    }
    v25 = *((char **)item + 1);
    if ( !v25 )
      v25 = EmptyString;
    BSStringT_Append(&v58, v25);
LABEL_24:
    sub_5B2140((int)data);
    if ( v26 >= 0 )
    {
      _sprintf(v65, " (%d)", v26);
      BSStringT_Append(&v58, v65);
    }
    Tile_SetFloat(*v12, (_DWORD *)0xFA1, fConstant_2);
    Tile_SetString(*v12, (_DWORD *)0xFAF, v66);
    Tile_SetString(*v12, (_DWORD *)0xFAE, v58.m_data);
    Tile_SetFloat(*v12, (_DWORD *)0xFB0, flt_A30634);
    v60.m_data = 0;
    v60.m_dataLen = 0;
    v60.m_bufLen = 0;
    BSStringT_Static_Format(&v60, "magicpop_effect_%d_icon", v11 + 1);
    v27 = sub_589930(*v12, (unsigned __int8 *)v60.m_data);
    if ( v27 )
      *(_DWORD *)(v27 + 0x2C) |= 0x10u;
    v55 = (_DWORD *)(v11 + 1);
    ++v12;
    BSStringT_Clear((unsigned int *)&v60);
    BSStringT_Clear((unsigned int *)&v58);
    ++v11;
LABEL_29:
    v57 = *(_DWORD *)(v57 + 4);
  }
  while ( v57 );
  if ( v11 < 8 )
  {
    v10 = (_DWORD *)v61;
    goto LABEL_32;
  }
LABEL_34:
  v31 = v62;
  Tile_SetFloat(v62, (_DWORD *)0xFAE, a5);
  Tile_SetFloat(v31, (_DWORD *)0xFAF, a6);
  Tile_SetFloat(v31, (_DWORD *)0xFB1, a7);
  v32 = v61;
  v33 = *(_DWORD **)(v61 + 0x28);
  *(float *)(v61 + 0x50) = a4;
  v63 = a4;
  Float = Tile_GetFloat(v33, 0xFCB);
  a2 = v35;
  v36 = *(Tile **)(v32 + 0x4C);
  *(float *)(v32 + 0x54) = v63 - Float;
  Tile_SetFloat(v36, (_DWORD *)0xFA1, 1.0);
  sub_58FBA0((int)v31, a1, st6_0, 1.0, 0);
}
