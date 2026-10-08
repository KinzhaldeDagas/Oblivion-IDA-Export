// Creates the eight Oblivion attribute rows for LevelUpMenu, displays the bonus derived from the oldest queued bucket, and disables attributes whose base value is already 100.
TileWindow *__thiscall LevelUpMenu_CreateAttributeRows(TileWindow **this)
{
  TileWindow **v2; // ebx
  char *m_data; // edi
  BSStringT *v4; // esi
  int AVFromGroupOffset; // eax
  unsigned int v6; // edi
  signed int AttributeLevelingBonus; // ebx
  unsigned int v8; // ebx
  char *Name; // eax
  char *SmallIcon; // eax
  const char *v11; // eax
  int i; // eax
  char v13; // cl
  TileWindow *result; // eax
  float a2; // [esp+0h] [ebp-150h]
  float a2a; // [esp+0h] [ebp-150h]
  BSStringT v17; // [esp+18h] [ebp-138h] BYREF
  int v18; // [esp+20h] [ebp-130h]
  BSStringT v19; // [esp+24h] [ebp-12Ch] BYREF
  __int16 v20; // [esp+2Ch] [ebp-124h]
  __int16 v21; // [esp+2Eh] [ebp-122h]
  TileWindow **v22; // [esp+30h] [ebp-120h]
  int BaseCalcAVi; // [esp+34h] [ebp-11Ch]
  char v24[255]; // [esp+38h] [ebp-118h] BYREF
  char v25; // [esp+137h] [ebp-19h]
  int v26; // [esp+14Ch] [ebp-4h]

  v2 = this; /*0x5acba0*/
  m_data = 0; /*0x5acba2*/
  v22 = this; /*0x5acba4*/
  v18 = 8; /*0x5acba8*/
  v19.m_data = 0; /*0x5acbb0*/
  do
  {
    v4 = (BSStringT *)Menu::RenderTemplate((Menu *)v2, v2[0xA], "levelup_template", 0); /*0x5acbc6*/
    if ( v4 )
    {
      AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, (char)m_data);// Level-up menu passes group 0 and offsets 0..7 here, mapping directly to the eight Oblivion attribute actor values. /*0x5acbd3*/
      a2 = (float)(int)v19.m_data; /*0x5acbe1*/
      v6 = AVFromGroupOffset; /*0x5acbe9*/
      Tile_SetFloat((Tile *)v4, 0xFAAu, a2); /*0x5acbeb*/
      AttributeLevelingBonus = Player_GetAttributeLevelingBonus(reference, v6); /*0x5acc03*/
      if ( AttributeLevelingBonus + Actor_GetBaseCalcAVi((int *)reference, AttributeLevelingBonus, v6, (int)v4, v6) > 0x64 )// If base plus displayed bonus exceeds 100, reduce the displayed bonus to 100 minus base. /*0x5acc0f*/
        AttributeLevelingBonus = 0x64 - Actor_GetBaseCalcAVi((int *)reference, AttributeLevelingBonus, v6, (int)v4, v6); /*0x5acc22*/
      if ( AttributeLevelingBonus > 1 /*0x5acc3c*/
        && Actor_GetBaseCalcAVi((int *)reference, AttributeLevelingBonus, v6, (int)v4, v6) < 0x64 )// Show the bonus label only when the derived multiplier is greater than 1 and the current base is below 100.
      {
        *(_DWORD *)&v19.m_dataLen = 0; /*0x5acc40*/
        v20 = 0; /*0x5acc44*/
        v21 = 0; /*0x5acc49*/
        v26 = 0; /*0x5acc59*/
        BSStringT_Static_Format((BSStringT *)&v19.m_dataLen, off_A6C2A0, AttributeLevelingBonus); /*0x5acc60*/
        v8 = *(_DWORD *)&v19.m_dataLen; /*0x5acc65*/
        Tile_SetString(v4, (_DWORD *)0xFB0, *(char **)&v19.m_dataLen); /*0x5acc74*/
        Tile_SetFloat((Tile *)v4, 0xFAFu, fConstant_2); /*0x5acc8a*/
        v26 = 0xFFFFFFFF; /*0x5acc90*/
        FormHeapFree(v8); /*0x5acc9b*/
        *(_DWORD *)&v19.m_dataLen = 0; /*0x5acca5*/
        v21 = 0; /*0x5acca9*/
        v20 = 0; /*0x5accae*/
      }
      BaseCalcAVi = Actor_GetBaseCalcAVi((int *)reference, 0, v6, (int)v4, v6); /*0x5accc3*/
      a2a = (float)BaseCalcAVi; /*0x5accce*/
      Tile_SetFloat((Tile *)v4, 0xFB1u, a2a); /*0x5accd6*/
      Name = (char *)ActorValue_GetName(v6); /*0x5accdc*/
      Tile_SetString(v4, (_DWORD *)0xFB2, Name); /*0x5accec*/
      SmallIcon = (char *)ActorValue_GetSmallIcon(v6); /*0x5accf2*/
      Tile_SetString(v4, (_DWORD *)0xFB3, SmallIcon); /*0x5acd02*/
      v11 = (const char *)ActorValue_GetName(v6); /*0x5acd08*/
      v17.m_data = 0; /*0x5acd16*/
      v17.m_dataLen = 0; /*0x5acd1a*/
      v17.m_bufLen = 0; /*0x5acd1f*/
      BSStringT_Set(&v17, v11, 0); /*0x5acd24*/
      v26 = 1; /*0x5acd29*/
      for ( i = 0; i < 0x100; ++i )
      {
        v13 = v17.m_data[v17.m_data != 0 ? i : 0];
        v24[i] = v13; /*0x5acd48*/
        if ( v13 == 0x20 ) /*0x5acd4c*/
          v24[i] = 0x5F; /*0x5acd4e*/
        if ( !v24[i] ) /*0x5acd53*/
          break; /*0x5acd58*/
      }
      v25 = 0; /*0x5acd6d*/
      BSStringT_Set(v4 + 1, v24, 0); /*0x5acd75*/
      if ( Actor_GetBaseCalcAVi((int *)reference, 0, v6, (int)v4, v6) >= 0x64 )// Hide and disable this attribute row when its current base is already 100. /*0x5acd89*/
      {
        Tile_SetFloat((Tile *)v4, 0xFB4u, 0.0); /*0x5acd98*/
        --v18; /*0x5acd9d*/
      }
      v26 = 0xFFFFFFFF; /*0x5acda7*/
      FormHeapFree((unsigned int)v17.m_data); /*0x5acdb2*/
      m_data = v19.m_data; /*0x5acdb7*/
      v17.m_data = 0; /*0x5acdbb*/
      v17.m_bufLen = 0; /*0x5acdbf*/
      v17.m_dataLen = 0; /*0x5acdc4*/
      v2 = v22; /*0x5acdc9*/
    }
    v19.m_data = ++m_data; /*0x5acdd6*/
  }
  while ( (int)m_data < 8 );
  result = v2[0xB]; /*0x5acde0*/
  if ( (int)result >= v18 ) /*0x5acde9*/
    v2[0xB] = (TileWindow *)v18; /*0x5acdf0*/
  else
    v2[0xB] = result; /*0x5acdeb*/
  return result; /*0x5acdf3*/
}
