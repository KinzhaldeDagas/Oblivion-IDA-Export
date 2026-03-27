TileWindow *__usercall sub_5ACB60@<eax>(TileWindow **this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  TileWindow **v4; // ebx
  char *m_data; // edi
  BSStringT *TileFromTemplate; // esi
  int AVFromGroupOffset; // eax
  unsigned int v8; // edi
  signed int AttributeLevelingBonus; // ebx
  unsigned int v10; // ebx
  char *Name; // eax
  char *SmallIcon; // eax
  const char *v13; // eax
  int i; // eax
  char v15; // cl
  TileWindow *result; // eax
  float a2; // [esp+0h] [ebp-150h]
  float a2a; // [esp+0h] [ebp-150h]
  BSStringT v19; // [esp+18h] [ebp-138h] BYREF
  int v20; // [esp+20h] [ebp-130h]
  BSStringT v21; // [esp+24h] [ebp-12Ch] BYREF
  __int16 v22; // [esp+2Ch] [ebp-124h]
  __int16 v23; // [esp+2Eh] [ebp-122h]
  TileWindow **v24; // [esp+30h] [ebp-120h]
  int BaseCalcAVi; // [esp+34h] [ebp-11Ch]
  char v26[255]; // [esp+38h] [ebp-118h] BYREF
  char v27; // [esp+137h] [ebp-19h]
  int v28; // [esp+14Ch] [ebp-4h]

  v4 = this;
  m_data = 0;
  v24 = this;
  v20 = 8;
  v21.m_data = 0;
  do
  {
    TileFromTemplate = (BSStringT *)Menu_CreateTileFromTemplate(v4, st5_0, a3, a4, v4[0xA], "levelup_template", 0);
    if ( TileFromTemplate )
    {
      AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, (char)m_data);
      a2 = (float)(int)v21.m_data;
      v8 = AVFromGroupOffset;
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, a2);
      AttributeLevelingBonus = Player_GetAttributeLevelingBonus(TESDataHandler_g_PlayerRef, v8);
      if ( AttributeLevelingBonus + Actor_GetBaseCalcAVi(v8) > 0x64 )
        AttributeLevelingBonus = 0x64 - Actor_GetBaseCalcAVi(v8);
      if ( AttributeLevelingBonus > 1 && (int)Actor_GetBaseCalcAVi(v8) < 0x64 )
      {
        *(_DWORD *)&v21.m_dataLen = 0;
        v22 = 0;
        v23 = 0;
        v28 = 0;
        BSStringT_Static_Format((BSStringT *)&v21.m_dataLen, off_A6C2A0, AttributeLevelingBonus);
        v10 = *(_DWORD *)&v21.m_dataLen;
        Tile_SetString(TileFromTemplate, (_DWORD *)0xFB0, *(char **)&v21.m_dataLen);
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAF, fConstant_2);
        v28 = 0xFFFFFFFF;
        FormHeapFree(v10);
        *(_DWORD *)&v21.m_dataLen = 0;
        v23 = 0;
        v22 = 0;
      }
      BaseCalcAVi = Actor_GetBaseCalcAVi(v8);
      a4 = (double)BaseCalcAVi;
      a2a = a4;
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, a2a);
      Name = (char *)ActorValue_GetName(v8);
      Tile_SetString(TileFromTemplate, (_DWORD *)0xFB2, Name);
      SmallIcon = (char *)ActorValue_GetSmallIcon(v8);
      Tile_SetString(TileFromTemplate, (_DWORD *)0xFB3, SmallIcon);
      v13 = (const char *)ActorValue_GetName(v8);
      v19.m_data = 0;
      v19.m_dataLen = 0;
      v19.m_bufLen = 0;
      BSStringT_Set(&v19, v13, 0);
      v28 = 1;
      for ( i = 0; i < 0x100; ++i )
      {
        v15 = v19.m_data[v19.m_data != 0 ? i : 0];
        v26[i] = v15;
        if ( v15 == 0x20 )
          v26[i] = 0x5F;
        if ( !v26[i] )
          break;
      }
      v27 = 0;
      BSStringT_Set(TileFromTemplate + 1, v26, 0);
      if ( (int)Actor_GetBaseCalcAVi(v8) >= 0x64 )
      {
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB4, 0.0);
        --v20;
      }
      v28 = 0xFFFFFFFF;
      FormHeapFree((unsigned int)v19.m_data);
      m_data = v21.m_data;
      v19.m_data = 0;
      v19.m_bufLen = 0;
      v19.m_dataLen = 0;
      v4 = v24;
    }
    v21.m_data = ++m_data;
  }
  while ( (int)m_data < 8 );
  result = v4[0xB];
  if ( (int)result >= v20 )
    v4[0xB] = (TileWindow *)v20;
  else
    v4[0xB] = result;
  return result;
}
