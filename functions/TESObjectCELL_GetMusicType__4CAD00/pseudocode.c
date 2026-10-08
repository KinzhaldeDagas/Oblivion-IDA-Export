// Verified: resolves the music type for a cell by using region-data ID 7, virtual sound-type lookup, and a position/cell cache; falls back to worldspace music when no region sound type is selected.
BSExtraData *__thiscall TESObjectCELL_GetMusicType(TESObjectCELL *this, int a2)
{
  float x; // eax
  float y; // ecx
  float z; // edx
  BSExtraData *v6; // esi
  int *v7; // ecx
  TESWorldSpace *worldSpace; // ecx
  char v11; // bl
  CellCoordinates *coords; // eax
  SInt32 v13; // eax
  TESCELL_CoordOrLight v14; // eax
  SInt32 v15; // eax
  int *v16; // ebp
  TESWorldSpace *v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // ebp
  int *v22; // esi
  TESWorldSpace *v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  TESWorldSpace *v27; // ecx
  int v28; // [esp+10h] [ebp-Ch]
  int *v29; // [esp+18h] [ebp-4h]
  int v30; // [esp+20h] [ebp+4h]

  sub_496EA0((char *)&unk_B35C80, this); /*0x4cad0f*/
  if ( (LOBYTE(g_CachedCellMusicPositionAndInit[2]) & 1) == 0 ) /*0x4cad1b*/
  {
    x = g_zeroNiPoint3.x; /*0x4cad1d*/
    y = g_zeroNiPoint3.y; /*0x4cad22*/
    z = g_zeroNiPoint3.z; /*0x4cad28*/
    LODWORD(g_CachedCellMusicPositionAndInit[2]) |= 1u; /*0x4cad2e*/
    *(float *)&g_CachedCellMusicPositionX = x; /*0x4cad35*/
    g_CachedCellMusicPositionAndInit[0] = y; /*0x4cad3a*/
    g_CachedCellMusicPositionAndInit[1] = z; /*0x4cad40*/
  }
  v6 = sub_41F9C0(&this->members.extraData); /*0x4cad50*/
  if ( v6 || (this->members.flags0 & 1) != 0 ) /*0x4cad5a*/
    goto LABEL_9; /*0x4cad5a*/
  v7 = (int *)sub_41F9B0(&this->members.extraData); /*0x4cad63*/
  v29 = v7; /*0x4cad67*/
  if ( !v7 ) /*0x4cad6b*/
  {
    if ( (this->members.flags0 & 1) == 0 ) /*0x4cad71*/
    {
      worldSpace = this->members.worldSpace; /*0x4cad73*/
      if ( worldSpace ) /*0x4cad78*/
        v6 = (BSExtraData *)sub_4EF0F0(worldSpace); /*0x4cad7f*/
    }
LABEL_9:
    sub_496F50(&unk_B35C80, this); /*0x4cad81*/
    return v6; /*0x4cad95*/
  }
  if ( a2
    && ((v11 = this->members.flags0 & 1) != 0 || (coords = this->members.coordOrLight.coords) == 0
      ? (v13 = 0)
      : (v13 = coords->x),
        (v30 = v13 << 0xC, v28 = (v13 << 0xC) + 0x1000, v11)
     || (v14.coords = (CellCoordinates *)this->members.coordOrLight) == 0
      ? (v15 = 0)
      : (v15 = v14.coords->y),
        (double)v30 <= *(float *)a2
     && (double)v28 >= *(float *)a2
     && (double)(v15 << 0xC) <= *(float *)(a2 + 4)
     && (double)((v15 << 0xC) + 0x1000) >= *(float *)(a2 + 4)) )
  {
    if ( sub_8AA350((float *)a2, (float *)&g_CachedCellMusicPositionX) && g_CachedCellMusicType != 3 ) /*0x4cae53*/
    {
      sub_496F50(&unk_B35C80, this); /*0x4cae5b*/
      return (BSExtraData *)g_CachedCellMusicType; /*0x4cae6c*/
    }
    v16 = *(int **)&g_TESDataHandler[0xCD8]; /*0x4cae74*/
    v17 = 0; /*0x4cae7a*/
    if ( !v11 ) /*0x4cae7e*/
      v17 = this->members.worldSpace; /*0x4cae80*/
    v18 = *v16; /*0x4cae88*/
    v19 = TESRegionList_SelectDataAtWorldPosition( /*0x4caea2*/
            v29,
            7,
            *(float *)a2,
            *(float *)(a2 + 4),
            *(_DWORD *)(a2 + 8),
            (int)v17);
    v20 = (*(int (__thiscall **)(int *, int))(v18 + 0x1C))(v16, v19); /*0x4caead*/
    if ( v20 ) /*0x4caeb3*/
    {
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x24))(v20); /*0x4caebe*/
      g_CachedCellMusicType = v21; /*0x4caec0*/
    }
    else
    {
      v21 = 0; /*0x4caec8*/
      g_CachedCellMusicType = 0; /*0x4caeca*/
    }
    LODWORD(g_CachedCellMusicPositionX) = *(_DWORD *)a2; /*0x4caed2*/
    g_CachedCellMusicPositionAndInit[0] = *(float *)(a2 + 4); /*0x4caedb*/
    g_CachedCellMusicPositionAndInit[1] = *(float *)(a2 + 8); /*0x4caee4*/
    g_CachedCellMusicCell = 0; /*0x4caee9*/
  }
  else if ( g_CachedCellMusicCell && (TESObjectCELL *)g_CachedCellMusicCell == this ) /*0x4caefc*/
  {
    v21 = g_CachedCellMusicType; /*0x4caefe*/
  }
  else
  {
    v22 = *(int **)&g_TESDataHandler[0xCD8]; /*0x4caf0c*/
    v23 = 0; /*0x4caf12*/
    if ( (this->members.flags0 & 1) == 0 ) /*0x4caf18*/
      v23 = this->members.worldSpace; /*0x4caf1a*/
    v24 = *v22; /*0x4caf1d*/
    v25 = TESRegionList_SelectDataForLocation(v7, 7, 0, (int)v23); /*0x4caf24*/
    v26 = (*(int (__thiscall **)(int *, int))(v24 + 0x1C))(v22, v25); /*0x4caf2f*/
    if ( v26 ) /*0x4caf33*/
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x24))(v26); /*0x4caf3e*/
    else
      v21 = 0; /*0x4caf42*/
    g_CachedCellMusicType = v21; /*0x4caf44*/
    g_CachedCellMusicCell = (int)this; /*0x4caf4a*/
  }
  if ( !v21 && (this->members.flags0 & 1) == 0 ) /*0x4caf58*/
  {
    v27 = this->members.worldSpace; /*0x4caf5a*/
    if ( v27 ) /*0x4caf5f*/
    {
      v21 = sub_4EF0F0(v27); /*0x4caf66*/
      g_CachedCellMusicType = v21; /*0x4caf68*/
    }
  }
  sub_496F50(&unk_B35C80, this); /*0x4caf74*/
  return (BSExtraData *)v21; /*0x4cad8e*/
}
