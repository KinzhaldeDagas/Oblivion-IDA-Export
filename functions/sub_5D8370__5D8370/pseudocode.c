void __usercall sub_5D8370(int a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double a4@<st0>)
{
  int v5; // eax
  int v6; // edx
  unsigned int i; // esi
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  int *ItemByIndex2; // ebp
  unsigned int *TileFromTemplate; // esi
  const char *v12; // eax
  int v13; // eax
  int v14; // eax
  char **DisplayText; // eax
  int v16; // eax
  _DWORD *v17; // ecx
  _DWORD **v18; // eax
  _DWORD *v19; // ecx
  double v20; // st7
  Tile *v21; // ecx
  Tile *v22; // esi
  Tile *v23; // esi
  float v24; // [esp+4h] [ebp-150h]
  _DWORD *v25[6]; // [esp+8h] [ebp-14Ch] BYREF
  BSStringT v26; // [esp+20h] [ebp-134h] BYREF
  int v27; // [esp+28h] [ebp-12Ch]
  char *v28; // [esp+2Ch] [ebp-128h]
  _DWORD *a2; // [esp+30h] [ebp-124h]
  _DWORD **a3; // [esp+3Ch] [ebp-118h]
  int v31; // [esp+48h] [ebp-10Ch]
  int v32; // [esp+50h] [ebp-104h]
  int v33; // [esp+54h] [ebp-100h]
  int v34[2]; // [esp+58h] [ebp-FCh] BYREF
  char v35[212]; // [esp+64h] [ebp-F0h] BYREF
  int v36; // [esp+14Ch] [ebp-8h]

  sub_5893F0(*(_DWORD **)(a1 + 0x30));
  v5 = *(_DWORD *)(a1 + 0x74);
  if ( v5 )
  {
    v6 = v5 + 0x18;
    *(float *)&a2 = 0.0;
    v28 = (char *)(v5 + 0x18);
    for ( i = 0; ; i = v31 + 1 )
    {
      v8 = (_DWORD *)(v6 + 0x10);
      v9 = 0;
      *(_DWORD *)&v26.m_dataLen = i;
      if ( v6 == 0xFFFFFFF0 )
        break;
      do
      {
        if ( *v8 )
          ++v9;
        v8 = (_DWORD *)v8[1];
      }
      while ( v8 );
      if ( i >= v9 )
        break;
      ItemByIndex2 = (int *)EffectItemList_GetItemByIndex2((char *)(v6 + 0xC), i);
      if ( ItemByIndex2 )
      {
        TileFromTemplate = Menu_CreateTileFromTemplate(
                             (_DWORD *)a1,
                             st5_0,
                             st6_0,
                             a4,
                             *(TileWindow **)(a1 + 0x30),
                             "added_effect_template",
                             0);
        if ( TileFromTemplate )
        {
          a3 = v25;
          EffectItem_GetName(
            ItemByIndex2,
            (int)v25,
            (int)v25[0],
            (int)v25[1],
            (int)v25[2],
            (int)v25[3],
            (int)v25[4],
            (int)v25[5],
            (int)v26.m_data,
            *(int *)&v26.m_dataLen,
            v27);
          sub_58A020((BSStringT *)TileFromTemplate, v28, (int)a2);
          v12 = *(const char **)(ItemByIndex2[7] + 0x48);
          if ( !v12 )
            v12 = EmptyString;
          _sprintf(v35, "%s\\%s", "Icons", v12);
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, flt_A3D8F4);
          *(float *)&a2 = (float)v33;
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, *(float *)&a2);
          ++v33;
          Tile_SetString(TileFromTemplate, (_DWORD *)0xFAF, v35);
          v13 = *(_DWORD *)(a1 + 0x74);
          if ( v13 )
            v14 = v13 + 0x18;
          else
            v14 = 0;
          DisplayText = (char **)EffectItem_GetDisplayText((int)v34, v14, 1.0);
          Tile_SetString(TileFromTemplate, (_DWORD *)0xFB0, *DisplayText);
          FormHeapFree(v34[0]);
          a4 = (double)v31;
          v34[0] = 0;
          v34[1] = 0;
          if ( v31 < 0 )
            a4 = a4 + flt_A2FC78;
          *(float *)&a2 = a4;
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, *(float *)&a2);
        }
      }
      v6 = v32;
    }
    if ( EffectItemList_GetStrongestItem(3, 0) )
    {
      *(float *)v25 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)(a1 + 0x74) + 0x24))(
                        *(_DWORD *)(a1 + 0x74) + 0x24,
                        0);
      v16 = Calc_MagickaMasteryLevel(*(float *)v25);
      if ( ActorValue_GetMasterySkill(v16) <= 0 )
      {
        v20 = 1.0;
        v25[0] = v17;
      }
      else
      {
        v18 = (_DWORD **)EffectItemList_SkillReqMsg((void *)(*(_DWORD *)(a1 + 0x74) + 0x24), &v26);
        v19 = *(_DWORD **)(a1 + 4);
        v25[0] = *v18;
        v36 = 1;
        Tile_SetString(v19, (_DWORD *)0xFB1, (char *)v25[0]);
        v36 = 0xFFFFFFFF;
        FormHeapFree((unsigned int)v26.m_data);
        v20 = fConstant_2;
        v26.m_data = 0;
        *(_DWORD *)&v26.m_dataLen = 0;
      }
      v21 = *(Tile **)(a1 + 4);
      *(float *)v25 = v20;
      Tile_SetFloat(v21, (_DWORD *)0xFB4, *(float *)v25);
    }
    v22 = *(Tile **)(a1 + 4);
    v24 = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(*(_DWORD *)(a1 + 0x74) + 0x24))(
            *(_DWORD *)(a1 + 0x74) + 0x24,
            TESDataHandler_g_PlayerRef);
    Tile_SetFloat(v22, (_DWORD *)0xFB2, v24);
    v23 = *(Tile **)(a1 + 4);
    *(float *)&v26.m_data = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(*(_DWORD *)(a1 + 0x74) + 0x24))(
                              *(_DWORD *)(a1 + 0x74) + 0x24,
                              TESDataHandler_g_PlayerRef)
                          * fSpellmakingGoldMult;
    Tile_SetFloat(v23, (_DWORD *)0xFB3, *(float *)&v26.m_data);
  }
}
