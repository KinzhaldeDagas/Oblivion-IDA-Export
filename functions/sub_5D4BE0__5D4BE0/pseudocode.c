void __usercall sub_5D4BE0(char *a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double Float@<st0>)
{
  char *v4; // edi
  int v5; // eax
  _DWORD *v6; // esi
  void (__thiscall ***v7)(_DWORD); // ecx
  void (__thiscall *v8)(_DWORD); // edx
  int v9; // eax
  int v10; // ebp
  char *v11; // edx
  unsigned int v12; // esi
  _DWORD *v13; // eax
  unsigned int v14; // ecx
  int *ItemByIndex2; // edi
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  unsigned int *TileFromTemplate; // eax
  Tile *v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  const char *v25; // eax
  Tile *v26; // ecx
  int v27; // [esp+4h] [ebp-174h] BYREF
  char *v28; // [esp+8h] [ebp-170h]
  int v29; // [esp+Ch] [ebp-16Ch]
  int v30; // [esp+10h] [ebp-168h]
  int v31; // [esp+14h] [ebp-164h]
  int v32; // [esp+18h] [ebp-160h]
  int v33; // [esp+1Ch] [ebp-15Ch]
  _DWORD *a2; // [esp+20h] [ebp-158h]
  _DWORD *v35; // [esp+24h] [ebp-154h]
  _DWORD *v36; // [esp+28h] [ebp-150h]
  float v37; // [esp+2Ch] [ebp-14Ch]
  int v38; // [esp+30h] [ebp-148h]
  unsigned int v39; // [esp+34h] [ebp-144h]
  _DWORD *v40; // [esp+38h] [ebp-140h]
  int a3; // [esp+3Ch] [ebp-13Ch]
  _DWORD *v42; // [esp+40h] [ebp-138h]
  BSStringT v43; // [esp+44h] [ebp-134h] BYREF
  int v44[2]; // [esp+4Ch] [ebp-12Ch] BYREF
  int v45; // [esp+54h] [ebp-124h]
  TileWindow *v46; // [esp+58h] [ebp-120h]
  int v47; // [esp+5Ch] [ebp-11Ch]
  char *v48; // [esp+60h] [ebp-118h]
  int v49; // [esp+64h] [ebp-114h]
  int v50; // [esp+68h] [ebp-110h]
  int v51[59]; // [esp+6Ch] [ebp-10Ch] BYREF
  char v52; // [esp+158h] [ebp-20h]
  int v53; // [esp+170h] [ebp-8h]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 0xF);
  v6 = *(_DWORD **)(v5 + 0x34);
  v43.m_data = a1;
  v47 = v5;
  while ( v6 )
  {
    v7 = (void (__thiscall ***)(_DWORD))v6[2];
    v6 = (_DWORD *)*v6;
    if ( v7 )
    {
      v8 = **v7;
      v35 = (_DWORD *)1;
      v8(v7);
    }
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*((_DWORD *)v4 + 0xF) + 0x30));
  v43.m_data = 0;
  v43.m_dataLen = 0;
  v43.m_bufLen = 0;
  BSStringT_Set(&v43, "added_effect_template", 0);
  v9 = *((_DWORD *)v4 + 0xA);
  v53 = 0;
  if ( v9 )
  {
    v10 = 0;
    v11 = (char *)(v9 + 0x78);
    v12 = 0;
    v45 = v9 + 0x78;
    *(float *)&v40 = 0.0;
    a3 = 0;
    while ( 1 )
    {
      v13 = v11 + 4;
      v14 = 0;
      if ( v11 == (char *)0xFFFFFFFC )
        break;
      do
      {
        if ( *v13 )
          ++v14;
        v13 = (_DWORD *)v13[1];
      }
      while ( v13 );
      if ( v12 >= v14 )
        break;
      ItemByIndex2 = (int *)EffectItemList_GetItemByIndex2(v11, v12);
      v16 = v42[0xB];
      if ( v16 )
      {
        v17 = ItemByIndex2[4];
        if ( !v17 && ((v18 = *(_DWORD *)(v16 + 8), *(_BYTE *)(v18 + 4) == 0x16) || *(_BYTE *)(v18 + 4) == 0x14)
          || v17 == 1 && *(_BYTE *)(*(_DWORD *)(v16 + 8) + 4) == 0x21 )
        {
          TileFromTemplate = Menu_CreateTileFromTemplate(v42, st5_0, st6_0, Float, v46, v43.m_data, 0);
          v20 = (Tile *)TileFromTemplate;
          if ( TileFromTemplate )
          {
            *(float *)&v40 = (float)(int)v40;
            Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, *(float *)&v40);
            Tile_SetFloat(v20, (_DWORD *)0xFAE, *(float *)&v40);
            v40 = (_DWORD *)(v10 + 0xBB8);
            *(float *)&a2 = (float)(v10 + 0xBB8);
            Tile_SetFloat(v20, (_DWORD *)0xFA8, *(float *)&a2);
            v21 = ItemByIndex2[4];
            ++v10;
            LOBYTE(v22) = v21 == 1;
            LOBYTE(v23) = v21 == 0;
            v28 = *(char **)EffectItem_BuildDisplayString(
                              (int)v44,
                              6,
                              COERCE_INT(1.0),
                              v23,
                              0,
                              v22,
                              (int)v35,
                              (int)v36,
                              SLODWORD(v37),
                              v38,
                              v39,
                              v10,
                              a3,
                              (int)v42,
                              (int)v43.m_data,
                              *(int *)&v43.m_dataLen,
                              v44[0],
                              v44[1],
                              v45,
                              (int)v46,
                              v47,
                              (int)v48,
                              v49,
                              v50,
                              v51[0],
                              v51[1],
                              v51[2],
                              v51[3],
                              v51[4],
                              v51[5],
                              v51[6],
                              v51[7],
                              v51[8],
                              v51[9],
                              v51[0xA],
                              v51[0xB],
                              v51[0xC],
                              v51[0xD],
                              v51[0xE]);
            v52 = 1;
            Tile_SetString(v20, (_DWORD *)0xFB0, v28);
            v52 = 0;
            FormHeapFree(v39);
            v43.m_data = (char *)&v27;
            v39 = 0;
            *(float *)&v40 = 0.0;
            EffectItem_GetName(ItemByIndex2, (int)&v27, v24, (int)v28, v29, v30, v31, v32, v33, (int)a2, (int)v35);
            sub_58A020((BSStringT *)v20, (char *)v36, SLODWORD(v37));
            v25 = *(const char **)(ItemByIndex2[7] + 0x48);
            if ( !v25 )
              v25 = EmptyString;
            _sprintf((char *)v51, "%s\\%s", "Icons", v25);
            Tile_SetString(v20, (_DWORD *)0xFAF, (char *)v51);
            v37 = (float)*ItemByIndex2;
            Tile_SetFloat(v20, (_DWORD *)0xFB2, v37);
            Tile_SetFloat(v20, (_DWORD *)0xFB4, flt_A6BC94);
            Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(v44[0] + 0x4C), 0xFB5);
            v37 = Float;
            Tile_SetFloat(v20, (_DWORD *)0xFB6, v37);
          }
        }
      }
      ++*(_DWORD *)&v43.m_dataLen;
      v4 = (char *)v44[0];
      v12 = *(_DWORD *)&v43.m_dataLen;
      v11 = v48;
    }
  }
  v26 = *((Tile **)v4 + 0x14);
  if ( v26 )
  {
    Tile_SetFloat(v26, (_DWORD *)0xFB7, flt_A6BC04);
    Tile_SetFloat(*((Tile **)v4 + 0x14), (_DWORD *)0xFB7, 0.0);
  }
  FormHeapFree((unsigned int)v43.m_data);
}
