void __thiscall sub_5C6EA0(_DWORD *this)
{
  TESForm *v2; // ebx
  Data *data; // esi
  int a2; // eax
  Data *v5; // esi
  int IsFemale; // eax
  char v7; // al
  const char *value; // eax
  const char *v9; // eax
  Tile *ControlTile; // esi
  const char *v11; // eax
  const char *v12; // eax
  Tile *v13; // eax
  BSStringT v14; // [esp-14h] [ebp-44h] BYREF
  BSStringT v15; // [esp-Ch] [ebp-3Ch] BYREF
  BSStringT v16; // [esp-4h] [ebp-34h] BYREF
  char v17; // [esp+1Bh] [ebp-15h]
  BSStringT *v18; // [esp+1Ch] [ebp-14h]
  BSStringT *v19; // [esp+20h] [ebp-10h]
  int v20; // [esp+2Ch] [ebp-4h]

  v2 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c6ed9*/
  data = v2[9].member.modlist.data; /*0x5c6edb*/
  a2 = TESActorBase_IsFemale(v2); /*0x5c6ee3*/
  if ( sub_52B490(data, a2) ) /*0x5c6eeb*/
  {
    v5 = v2[9].member.modlist.data; /*0x5c6ef4*/
    IsFemale = TESActorBase_IsFemale(v2); /*0x5c6efc*/
    v2[0x13].vtbl = (TESFormVtbl *)sub_52B490(v5, IsFemale); /*0x5c6f09*/
  }
  v7 = v2[9].member.modlist.data->name[0x80]; /*0x5c6f15*/
  v18 = &v16; /*0x5c6f22*/
  v17 = v7; /*0x5c6f26*/
  value = stru_B39330.value; /*0x5c6f2a*/
  v16 = 0; /*0x5c6f31*/
  BSStringT_Set(&v16, value, 0); /*0x5c6f3b*/
  v9 = g_gameSetting_sHair.value; /*0x5c6f40*/
  v19 = &v15; /*0x5c6f4a*/
  v20 = 0; /*0x5c6f50*/
  v15.m_data = 0; /*0x5c6f54*/
  v15.m_dataLen = 0; /*0x5c6f56*/
  v15.m_bufLen = 0; /*0x5c6f5a*/
  BSStringT_Set(&v15, v9, 0); /*0x5c6f5e*/
  v20 = 0xFFFFFFFF; /*0x5c6f65*/
  ControlTile = RaceSexMenu_FindControlTile(this, v15, v16); /*0x5c6f72*/
  *(float *)&v16.m_dataLen = -Tile_GetFloat(ControlTile, 0xFAE); /*0x5c6f83*/
  Tile_SetFloat(ControlTile, 0xFB1u, *(float *)&v16.m_dataLen); /*0x5c6f8d*/
  v18 = (BSStringT *)v17; /*0x5c6f97*/
  *(float *)&v16.m_dataLen = (float)v17; /*0x5c6fa2*/
  Tile_SetFloat(ControlTile, 0xFB1u, *(float *)&v16.m_dataLen); /*0x5c6faa*/
  Tile_SetFloat(ControlTile, 0xFB1u, 0.0); /*0x5c6fbc*/
  LOBYTE(v18) = v2[9].member.modlist.data->name[0x80]; /*0x5c6fcd*/
  *(_DWORD *)&v16.m_dataLen = sub_52B780((char)v18); /*0x5c6fde*/
  v11 = stru_B39330.value; /*0x5c6fdf*/
  v16.m_data = (char *)0xFB4; /*0x5c6fe4*/
  v19 = &v15; /*0x5c6fee*/
  v15.m_data = 0; /*0x5c6ff4*/
  v15.m_dataLen = 0; /*0x5c6ff6*/
  v15.m_bufLen = 0; /*0x5c6ffa*/
  BSStringT_Set(&v15, v11, 0); /*0x5c6ffe*/
  v12 = g_gameSetting_sHair.value; /*0x5c7003*/
  v20 = 1; /*0x5c700d*/
  v18 = &v14; /*0x5c7015*/
  v14.m_data = 0; /*0x5c7019*/
  v14.m_dataLen = 0; /*0x5c701b*/
  v14.m_bufLen = 0; /*0x5c701f*/
  BSStringT_Set(&v14, v12, 0); /*0x5c7025*/
  v20 = 0xFFFFFFFF; /*0x5c702c*/
  v13 = RaceSexMenu_FindControlTile(this, v14, v15); /*0x5c7034*/
  Tile_SetString(v13, v16.m_data, *(char **)&v16.m_dataLen); /*0x5c703b*/
  sub_5C5F00(this); /*0x5c7042*/
  sub_5C34D0(this); /*0x5c7049*/
}
