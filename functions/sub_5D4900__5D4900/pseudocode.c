void __usercall sub_5D4900(_DWORD *this@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double Float@<st0>)
{
  char *v4; // esi
  TileWindow *v5; // eax
  int v6; // eax
  int *v7; // edi
  unsigned int *TileFromTemplate; // eax
  BSStringT *v9; // esi
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // ecx
  const char *v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  char *v16; // [esp+4h] [ebp-180h]
  int v17; // [esp+8h] [ebp-17Ch]
  int v18; // [esp+Ch] [ebp-178h]
  int v19; // [esp+10h] [ebp-174h]
  int v20; // [esp+14h] [ebp-170h]
  int v21; // [esp+18h] [ebp-16Ch]
  float v22; // [esp+1Ch] [ebp-168h]
  _DWORD *v23; // [esp+1Ch] [ebp-168h]
  _DWORD *v24; // [esp+20h] [ebp-164h]
  _DWORD *v25; // [esp+20h] [ebp-164h]
  _DWORD *v26; // [esp+24h] [ebp-160h]
  _DWORD *v27; // [esp+24h] [ebp-160h]
  int v28; // [esp+28h] [ebp-15Ch]
  int v29; // [esp+28h] [ebp-15Ch]
  float v30; // [esp+28h] [ebp-15Ch]
  float v31; // [esp+28h] [ebp-15Ch]
  float v32; // [esp+28h] [ebp-15Ch]
  int v33; // [esp+2Ch] [ebp-158h]
  int v34; // [esp+30h] [ebp-154h]
  _DWORD *v35; // [esp+34h] [ebp-150h] BYREF
  _DWORD *v36; // [esp+38h] [ebp-14Ch]
  int a3; // [esp+3Ch] [ebp-148h]
  _DWORD *v38; // [esp+40h] [ebp-144h]
  BSStringT v39; // [esp+44h] [ebp-140h] BYREF
  char *a2; // [esp+4Ch] [ebp-138h]
  unsigned int v41; // [esp+50h] [ebp-134h]
  int v42; // [esp+54h] [ebp-130h]
  char *v43; // [esp+58h] [ebp-12Ch] BYREF
  int v44; // [esp+5Ch] [ebp-128h]
  TileWindow *v45; // [esp+60h] [ebp-124h]
  char *v46; // [esp+64h] [ebp-120h]
  int v47; // [esp+68h] [ebp-11Ch]
  int v48; // [esp+6Ch] [ebp-118h]
  int v49[62]; // [esp+70h] [ebp-114h] BYREF
  char v50; // [esp+168h] [ebp-1Ch]
  int v51; // [esp+180h] [ebp-4h]

  v4 = (char *)this;
  v5 = (TileWindow *)*(this + 0xE);
  v38 = this;
  v45 = v5;
  v39.m_data = 0;
  v39.m_dataLen = 0;
  v39.m_bufLen = 0;
  BSStringT_Set(&v39, "known_effect_template", 0);
  v6 = *((_DWORD *)v4 + 0xA);
  v51 = 0;
  if ( v6 )
    v36 = (_DWORD *)(v6 + 0x78);
  else
    v36 = 0;
  a3 = 0;
  if ( v36 )
  {
    while ( 1 )
    {
      v7 = (int *)v36[1];
      TileFromTemplate = Menu_CreateTileFromTemplate(v4, st5_0, st6_0, Float, v45, v39.m_data, 0);
      v9 = (BSStringT *)TileFromTemplate;
      if ( TileFromTemplate )
      {
        if ( v7 )
        {
          *(float *)&v35 = (float)a3;
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, *(float *)&v35);
          Tile_SetFloat((Tile *)v9, (_DWORD *)0xFAE, *(float *)&v35);
          v35 = (_DWORD *)(a3 + 0x3E8);
          v22 = (float)(a3 + 0x3E8);
          Tile_SetFloat((Tile *)v9, (_DWORD *)0xFA8, v22);
          v10 = v7[4];
          LOBYTE(v11) = v10 == 1;
          LOBYTE(v10) = v10 == 0;
          v16 = *(char **)EffectItem_BuildDisplayString(
                            (int)&v43,
                            6,
                            COERCE_INT(1.0),
                            v10,
                            0,
                            v11,
                            (int)v24,
                            (int)v26,
                            v28,
                            v33,
                            v34,
                            (int)v35,
                            (int)v36,
                            a3,
                            (int)v38,
                            (int)v39.m_data,
                            *(int *)&v39.m_dataLen,
                            (int)a2,
                            v41,
                            v42,
                            (int)v43,
                            v44,
                            (int)v45,
                            (int)v46,
                            v47,
                            v48,
                            v49[0],
                            v49[1],
                            v49[2],
                            v49[3],
                            v49[4],
                            v49[5],
                            v49[6],
                            v49[7],
                            v49[8],
                            v49[9],
                            v49[0xA],
                            v49[0xB],
                            v49[0xC]);
          v50 = 1;
          Tile_SetString(v9, (_DWORD *)0xFB0, v16);
          v50 = 0;
          FormHeapFree((unsigned int)v38);
          v38 = 0;
          v39.m_data = 0;
          EffectItem_GetName(v7, (int)&v35, v17, v18, v19, v20, v21, (int)v23, (int)v25, (int)v27, v29);
          BSStringT_Set(v9 + 1, v43, 0);
          FormHeapFree((unsigned int)v43);
          v12 = *((_DWORD **)a2 + 0x11);
          v43 = 0;
          v44 = 0;
          Float = Tile_GetFloat(v12, 0xFB5);
          v30 = Float;
          Tile_SetFloat((Tile *)v9, (_DWORD *)0xFB1, v30);
          v13 = *(const char **)(v7[7] + 0x48);
          if ( !v13 )
            v13 = EmptyString;
          _sprintf((char *)v49, "%s\\%s", "Icons", v13);
          Tile_SetString(v9, (_DWORD *)0xFAF, (char *)v49);
          v38 = (_DWORD *)*v7;
          v31 = (float)(int)v38;
          Tile_SetFloat((Tile *)v9, (_DWORD *)0xFB2, v31);
          Tile_SetFloat((Tile *)v9, (_DWORD *)0xFB4, flt_A31C80);
          Tile_SetFloat((Tile *)v9, (_DWORD *)0xFC9, fConstant_2);
          v14 = *((_DWORD **)a2 + 0x11);
          ++*(_DWORD *)&v39.m_dataLen;
          v32 = Tile_GetFloat(v14, 0xFB5);
          Tile_SetFloat((Tile *)v9, (_DWORD *)0xFB6, v32);
        }
      }
      v15 = *((_DWORD *)v39.m_data + 2);
      if ( !v15 )
        break;
      v39.m_data = (char *)(v15 - 4);
      if ( v15 == 4 )
        break;
      v4 = a2;
    }
  }
  FormHeapFree(v41);
}
