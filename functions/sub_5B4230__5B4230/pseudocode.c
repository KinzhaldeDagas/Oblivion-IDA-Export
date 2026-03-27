// bad sp value at call has been detected, the output may be wrong!
int __cdecl sub_5B4230(
        int a1,
        float a2,
        float a3,
        float a4,
        int a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int WortcraftMaxEffects)
{
  Tile *OpenMenuTile; // eax
  Tile *v15; // ebx
  void *ParentMenu; // eax
  float *v17; // eax
  float *v18; // edi
  _DWORD *v19; // ecx
  _BYTE *v20; // ebp
  char **v21; // eax
  const char *v22; // ebx
  const char **v23; // eax
  const char *v24; // eax
  int (__thiscall *v25)(int); // eax
  int BaseCalcAVi; // eax
  BSStringT v28; // [esp+18h] [ebp-348h] BYREF
  int v29; // [esp+20h] [ebp-340h]
  double v30; // [esp+24h] [ebp-33Ch]
  int v31; // [esp+2Ch] [ebp-334h]
  double v32; // [esp+30h] [ebp-330h]
  int v33; // [esp+3Ch] [ebp-324h]
  Tile *v34; // [esp+40h] [ebp-320h]
  char v35[260]; // [esp+148h] [ebp-218h] BYREF
  char v36[260]; // [esp+24Ch] [ebp-114h] BYREF
  unsigned int v37; // [esp+35Ch] [ebp-4h]

  v29 = a1;
  v31 = a5;
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x400);
  v15 = OpenMenuTile;
  v34 = OpenMenuTile;
  if ( !OpenMenuTile
    || (ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile),
        v17 = (float *)OblivionDynamicCast(
                         ParentMenu,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                         &MagicPopupMenu `RTTI Type Descriptor',
                         0),
        (v18 = v17) == 0) )
  {
    JUMPOUT(0x5B49DC);
  }
  *((_DWORD *)v17 + 0x16) = 1;
  Tile_SetFloat(v15, (_DWORD *)0xFAE, a3);
  Tile_SetFloat(v15, (_DWORD *)0xFAF, a4);
  Tile_SetFloat(v15, (_DWORD *)0xFB1, a6);
  v19 = *((_DWORD **)v18 + 0xA);
  v18[0x14] = a2;
  v30 = a2;
  v18[0x15] = a2 - Tile_GetFloat(v19, 0xFCB);
  if ( a5 )
  {
    v20 = *(_BYTE **)(a5 + 8);
    if ( v20[4] == 0x21 )
    {
      _sprintf(v35, "%s\\%s", "Icons", "icon_small_damage.dds");
      Tile_SetFloat(*((Tile **)v18 + 0xB), (_DWORD *)0xFA1, fConstant_2);
      Tile_SetString(*((_DWORD **)v18 + 0xB), (_DWORD *)0xFAF, v35);
      Tile_SetFloat(*((Tile **)v18 + 0xB), (_DWORD *)0xFB0, flt_A2FE7C);
      if ( v20 )
      {
        v21 = *(char ***)(4 * (char)v20[0x90] + 0xB39A44);
        if ( v21 )
          Tile_SetString(*((_DWORD **)v18 + 0xB), (_DWORD *)0xFAE, *v21);
        else
          Tile_SetString(*((_DWORD **)v18 + 0xB), (_DWORD *)0xFAE, 0);
      }
    }
    else
    {
      if ( v20[4] != 0x14 )
        goto LABEL_16;
      _sprintf(v36, "%s\\%s", "Icons", "icon_small_armor.dds");
      Tile_SetFloat(*((Tile **)v18 + 0xB), (_DWORD *)0xFA1, fConstant_2);
      Tile_SetString(*((_DWORD **)v18 + 0xB), (_DWORD *)0xFAF, v36);
      Tile_SetFloat(*((Tile **)v18 + 0xB), (_DWORD *)0xFB0, flt_A2FE7C);
      if ( v20 )
      {
        v28.m_data = 0;
        v28.m_dataLen = 0;
        v28.m_bufLen = 0;
        v22 = (const char *)dword_B38BE8;
        v37 = 0;
        v23 = *(const char ***)(4 * (unsigned __int8)TESObjectARMO_ISHeavyArmor(v20) + 0xB084E8);
        if ( v23 )
          v24 = *v23;
        else
          v24 = 0;
        BSStringT_Static_Format(&v28, "%s %s", v24, v22);
        Tile_SetString(*((_DWORD **)v18 + 0xB), (_DWORD *)0xFAE, v28.m_data);
        v37 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v28);
      }
    }
    HIDWORD(v32) = 1;
  }
LABEL_16:
  v25 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18);
  v33 = 8;
  if ( v25(a1) == 8 )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi(0x13);
    WortcraftMaxEffects = Magic_GetWortcraftMaxEffects(BaseCalcAVi);
  }
  if ( a1 == 0xFFFFFFF0 )
    JUMPOUT(0x5B46DE);
  return sub_5B4524(
           a1,
           LODWORD(a2),
           LODWORD(a3),
           LODWORD(a4),
           a5,
           LODWORD(a6),
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           WortcraftMaxEffects);
}
