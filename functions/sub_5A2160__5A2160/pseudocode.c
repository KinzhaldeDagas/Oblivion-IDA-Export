void __usercall sub_5A2160(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>)
{
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // ecx
  int *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // ebp
  _DWORD *a2; // ebx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  int v14; // ebp
  double (__thiscall ***v15)(_DWORD, _DWORD); // ecx
  double (__thiscall *v16)(_DWORD, _DWORD); // eax
  double v17; // st7
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // ebx
  unsigned int *TileFromTemplate; // eax
  BSStringT *v22; // esi
  char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  float v26; // [esp+4h] [ebp-148h]
  float v27; // [esp+4h] [ebp-148h]
  float Float; // [esp+4h] [ebp-148h]
  float v29; // [esp+4h] [ebp-148h]
  float v30; // [esp+4h] [ebp-148h]
  char v31; // [esp+8h] [ebp-144h]
  char v32; // [esp+Ch] [ebp-140h]
  int v33; // [esp+1Ch] [ebp-130h]
  _DWORD *v34; // [esp+20h] [ebp-12Ch]
  BSStringT v35; // [esp+24h] [ebp-128h] BYREF
  BSStringT v36; // [esp+2Ch] [ebp-120h] BYREF
  TileWindow *v37; // [esp+34h] [ebp-118h]
  char v38[260]; // [esp+38h] [ebp-114h] BYREF
  int v39; // [esp+148h] [ebp-4h]

  v5 = *(_DWORD **)(a1 + 0x90);
  if ( v5 )
  {
    BSSimpleList_Clear(v5);
    FormHeapFree(*(_DWORD *)(a1 + 0x90));
    *(_DWORD *)(a1 + 0x90) = 0;
  }
  v6 = *(_DWORD *)(a1 + 0x30);
  if ( v6 )
    *(_DWORD *)(a1 + 0x34) = OblivionDynamicCast(
                               *(void **)(v6 + 8),
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                               &TESEnchantableForm `RTTI Type Descriptor',
                               0);
  v7 = *(_DWORD *)(a1 + 0x34);
  if ( v7 )
  {
    if ( *(_DWORD *)(a1 + 0x2C) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x10))(v7) != 3
        || !*(_DWORD *)(*(_DWORD *)(a1 + 0x28) + 0x2C) && !*(_DWORD *)(*(_DWORD *)(a1 + 0x28) + 0x28) )
      {
        v8 = (int *)EffectSettingCollection_FilteredEffectList(0, 0, 0, 1, v31, v32);
        *(_DWORD *)(a1 + 0x90) = v8;
        sub_663AA0((int *)TESDataHandler_g_PlayerRef, v8);
      }
    }
  }
  v9 = *(_DWORD **)(a1 + 0x90);
  v10 = 0;
  while ( v9 )
  {
    if ( !v9[1] && !*v9 )
      break;
    a2 = (_DWORD *)*v9;
    if ( *v9
      && (a2[0x16] & 0x200000) != 0
      && sub_4194B0(*(_DWORD *)(a1 + 0x30), (int)a2, 1)
      && sub_419220(*(_DWORD **)(a1 + 0x28), a2) )
    {
      v10 = v9;
      v9 = (_DWORD *)v9[1];
    }
    else if ( v10 )
    {
      BSSimpleList_Remove(v10, (int)a2);
      v9 = (_DWORD *)v10[1];
    }
    else
    {
      v12 = (_DWORD *)v9[1];
      if ( v12 )
      {
        v9[1] = v12[1];
        *v9 = *v12;
        FormHeapFree((unsigned int)v12);
      }
      else
      {
        *v9 = 0;
      }
    }
  }
  v37 = *(TileWindow **)(a1 + 0x54);
  sub_5893F0(v37);
  v36.m_data = 0;
  v36.m_dataLen = 0;
  v36.m_bufLen = 0;
  BSStringT_Set(&v36, "known_effect_template", 0);
  v13 = *(_DWORD **)(a1 + 0x90);
  v14 = 0;
  v39 = 0;
  v34 = v13;
  v33 = 0;
  v35.m_data = 0;
  *(_DWORD *)&v35.m_dataLen = 0;
  v15 = (double (__thiscall ***)(_DWORD, _DWORD))(*(_DWORD *)(a1 + 0x28) + 0x24);
  v16 = **v15;
  LOBYTE(v39) = 1;
  v17 = v16(v15, 0) * fEnchantmentGoldMult;
  v18 = Double_To_SInt32(v17);
  BSStringT_Static_Format(&v35, "%d", v18);
  Tile_SetString(*(_DWORD **)(a1 + 0x48), (_DWORD *)0xFDE, v35.m_data);
  v19 = sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
  BSStringT_Static_Format(&v35, "%d", v19);
  Tile_SetString(*(_DWORD **)(a1 + 0x4C), (_DWORD *)0xFDE, v35.m_data);
  if ( v13 )
  {
    while ( 1 )
    {
      v20 = (_DWORD *)*v13;
      TileFromTemplate = Menu_CreateTileFromTemplate((_DWORD *)a1, st5_0, a3, v17, v37, v36.m_data, 0);
      v22 = (BSStringT *)TileFromTemplate;
      if ( TileFromTemplate )
      {
        if ( v20 )
        {
          v26 = (float)v33;
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, v26);
          v27 = (float)(v14 + 0x3E8);
          Tile_SetFloat((Tile *)v22, (_DWORD *)0xFA8, v27);
          v23 = (char *)v20[0xF];
          if ( !v23 )
            v23 = EmptyString;
          Tile_SetString(v22, (_DWORD *)0xFB0, v23);
          v24 = (const char *)v20[0xF];
          if ( !v24 )
            v24 = EmptyString;
          BSStringT_Set(v22 + 1, v24, 0);
          Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x60), 0xFB5);
          Tile_SetFloat((Tile *)v22, (_DWORD *)0xFB1, Float);
          v25 = (const char *)v20[0x12];
          if ( !v25 )
            v25 = EmptyString;
          _sprintf(v38, "%s\\%s", "Icons", v25);
          Tile_SetString(v22, (_DWORD *)0xFAF, v38);
          v29 = (float)(int)v20[0x26];
          Tile_SetFloat((Tile *)v22, (_DWORD *)0xFB2, v29);
          Tile_SetFloat((Tile *)v22, (_DWORD *)0xFB4, flt_A31C80);
          Tile_SetFloat((Tile *)v22, (_DWORD *)0xFC9, fConstant_2);
          v33 = ++v14;
          v17 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x60), 0xFB5);
          v30 = v17;
          Tile_SetFloat((Tile *)v22, (_DWORD *)0xFB6, v30);
        }
      }
      v34 = (_DWORD *)v34[1];
      if ( !v34 )
        break;
      v13 = v34;
    }
  }
  FormHeapFree((unsigned int)v35.m_data);
  FormHeapFree((unsigned int)v36.m_data);
}
