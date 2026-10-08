void __thiscall sub_5D8370(int this)
{
  int v5; // eax
  int v6; // edx
  unsigned int i; // esi
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  int *v10; // eax
  int *v11; // ebp
  Tile *v12; // esi
  const char *v13; // eax
  int v14; // eax
  int v15; // eax
  char **DisplayText; // eax
  double v17; // st7
  SkillMasteryLevel v18; // eax
  _DWORD *v19; // ecx
  _DWORD **v20; // eax
  _DWORD *v21; // ecx
  double v22; // st7
  Tile *v23; // ecx
  Tile *v24; // esi
  Tile *v25; // esi
  float value; // [esp+4h] [ebp-150h]
  _DWORD *v27[2]; // [esp+8h] [ebp-14Ch] BYREF
  BSStringT v28; // [esp+10h] [ebp-144h]
  int v29; // [esp+18h] [ebp-13Ch]
  int v30; // [esp+1Ch] [ebp-138h]
  BSStringT v31; // [esp+20h] [ebp-134h] BYREF
  BSStringT *v32; // [esp+28h] [ebp-12Ch]
  char *v33; // [esp+2Ch] [ebp-128h]
  _DWORD *a2; // [esp+30h] [ebp-124h]
  _DWORD **a3; // [esp+3Ch] [ebp-118h]
  int v36; // [esp+48h] [ebp-10Ch]
  int v37; // [esp+50h] [ebp-104h]
  int v38; // [esp+54h] [ebp-100h]
  int v39[2]; // [esp+58h] [ebp-FCh] BYREF
  char v40[212]; // [esp+64h] [ebp-F0h] BYREF
  int v41; // [esp+14Ch] [ebp-8h]

  sub_5893F0(*(_DWORD **)(this + 0x30)); /*0x5d83b0*/
  v5 = *(_DWORD *)(this + 0x74); /*0x5d83b5*/
  if ( v5 ) /*0x5d83bc*/
  {
    v6 = v5 + 0x18; /*0x5d83c2*/
    *(float *)&a2 = 0.0; /*0x5d83c5*/
    v33 = (char *)(v5 + 0x18); /*0x5d83c9*/
    for ( i = 0; ; i = v36 + 1 ) /*0x5d83cd*/
    {
      v8 = (_DWORD *)(v6 + 0x10); /*0x5d83cf*/
      v9 = 0; /*0x5d83d2*/
      *(_DWORD *)&v31.m_dataLen = i; /*0x5d83d6*/
      if ( v6 == 0xFFFFFFF0 ) /*0x5d83da*/
        break; /*0x5d83da*/
      do /*0x5d83ec*/
      {
        if ( *v8 ) /*0x5d83e0*/
          ++v9; /*0x5d83e4*/
        v8 = (_DWORD *)v8[1]; /*0x5d83e7*/
      }
      while ( v8 ); /*0x5d83ec*/
      if ( i >= v9 ) /*0x5d83f0*/
        break; /*0x5d83f0*/
      EffectItemList_GetItemByIndex2((char *)(v6 + 0xC), i); /*0x5d83fa*/
      v11 = v10; /*0x5d83ff*/
      if ( v10 ) /*0x5d8403*/
      {
        v12 = Menu::RenderTemplate((Menu *)this, *(Tile **)(this + 0x30), "added_effect_template", 0); /*0x5d841a*/
        if ( v12 ) /*0x5d841e*/
        {
          a3 = v27; /*0x5d8429*/
          EffectItem_GetName( /*0x5d8430*/
            v11,
            (int)v27,
            (int)v27[0],
            (int)v27[1],
            v28,
            v29,
            v30,
            (int)v31.m_data,
            *(int *)&v31.m_dataLen,
            v32);
          sub_58A020((BSStringT *)v12, v33, (int)a2); /*0x5d8437*/
          v13 = *(const char **)(v11[7] + 0x48); /*0x5d843f*/
          if ( !v13 ) /*0x5d8444*/
            v13 = EmptyString; /*0x5d8446*/
          _sprintf(v40, "%s\\%s", "Icons", v13); /*0x5d845b*/
          Tile_SetFloat(v12, 0xFA8u, flt_A3D8F4); /*0x5d8473*/
          *(float *)&a2 = (float)v38; /*0x5d847f*/
          Tile_SetFloat(v12, 0xFAEu, *(float *)&a2); /*0x5d8487*/
          ++v38; /*0x5d848c*/
          Tile_SetString(v12, (_DWORD *)0xFAF, v40); /*0x5d849d*/
          v14 = *(_DWORD *)(this + 0x74); /*0x5d84a2*/
          if ( v14 ) /*0x5d84a7*/
            v15 = v14 + 0x18; /*0x5d84a9*/
          else
            v15 = 0; /*0x5d84ae*/
          DisplayText = (char **)EffectItem_GetDisplayText((int)v39, v15, 1.0); /*0x5d84be*/
          Tile_SetString(v12, (_DWORD *)0xFB0, *DisplayText); /*0x5d84d4*/
          FormHeapFree(v39[0]); /*0x5d84e9*/
          v17 = (double)v36; /*0x5d84ee*/
          v39[0] = 0; /*0x5d84f8*/
          v39[1] = 0; /*0x5d8501*/
          if ( v36 < 0 ) /*0x5d8506*/
            v17 = v17 + flt_A2FC78; /*0x5d8508*/
          *(float *)&a2 = v17; /*0x5d850e*/
          Tile_SetFloat(v12, 0xFB1u, *(float *)&a2); /*0x5d8518*/
        }
      }
      v6 = v37; /*0x5d8521*/
    }
    if ( EffectItemList_GetStrongestItem( /*0x5d8536*/
           (_DWORD *)(*(_DWORD *)(this + 0x74) + 0x24),
           3,
           0,
           (int)v28.m_data,
           *(int *)&v28.m_dataLen,
           v29,
           v30,
           (char)v31.m_data) )
    {
      *(float *)v27 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)(this + 0x74) + 0x24))( /*0x5d8552*/
                        *(_DWORD *)(this + 0x74) + 0x24,
                        0);
      v18 = Calc_MagickaMasteryLevel(*(float *)v27); /*0x5d8555*/
      if ( ActorValue_GetMinimumSkillForMastery(v18) <= 0 ) /*0x5d8565*/
      {
        v22 = 1.0; /*0x5d85bd*/
        v27[0] = v19; /*0x5d85bf*/
      }
      else
      {
        v20 = (_DWORD **)EffectItemList_SkillReqMsg((_DWORD *)(*(_DWORD *)(this + 0x74) + 0x24), &v31); /*0x5d8572*/
        v21 = *(_DWORD **)(this + 4); /*0x5d8579*/
        v27[0] = *v20; /*0x5d857c*/
        v41 = 1; /*0x5d8582*/
        Tile_SetString(v21, (_DWORD *)0xFB1, (char *)v27[0]); /*0x5d858d*/
        v41 = 0xFFFFFFFF; /*0x5d8597*/
        FormHeapFree((unsigned int)v31.m_data); /*0x5d85a2*/
        v22 = fConstant_2; /*0x5d85a7*/
        v31.m_data = 0; /*0x5d85ad*/
        *(_DWORD *)&v31.m_dataLen = 0; /*0x5d85b6*/
      }
      v23 = *(Tile **)(this + 4); /*0x5d85c0*/
      *(float *)v27 = v22; /*0x5d85c3*/
      Tile_SetFloat(v23, 0xFB4u, *(float *)v27); /*0x5d85cb*/
    }
    v24 = *(Tile **)(this + 4); /*0x5d85d9*/
    value = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(*(_DWORD *)(this + 0x74) + 0x24))( /*0x5d85e7*/
              *(_DWORD *)(this + 0x74) + 0x24,
              reference);
    Tile_SetFloat(v24, 0xFB2u, value); /*0x5d85f1*/
    v25 = *(Tile **)(this + 4); /*0x5d85f6*/
    *(float *)&v31.m_data = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(*(_DWORD *)(this + 0x74) + 0x24))( /*0x5d8615*/
                              *(_DWORD *)(this + 0x74) + 0x24,
                              reference)
                          * flt_B37ED0[0x44];
    Tile_SetFloat(v25, 0xFB3u, *(float *)&v31.m_data); /*0x5d8625*/
  }
}
