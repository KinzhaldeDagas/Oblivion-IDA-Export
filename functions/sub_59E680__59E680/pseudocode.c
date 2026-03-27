char __usercall sub_59E680@<al>(int a1@<ecx>, int esi0@<esi>, double a3@<st2>, double a4@<st1>)
{
  UnkBohBoh *v5; // ebp
  void (__thiscall ***v6)(void *, int); // eax
  double Float; // st7
  BSStringT *TileFromTemplate; // esi
  TileWindow *v10; // edx
  const char **v11; // eax
  char **v12; // eax
  InterfaceManager *Singleton; // eax
  char *v14; // eax
  char *v15; // ecx
  int v16; // eax
  InterfaceManager *v17; // eax
  bool v18; // al
  Tile **v19; // eax
  float a2; // [esp+4h] [ebp-48h]
  float a2a; // [esp+4h] [ebp-48h]
  float a2b; // [esp+4h] [ebp-48h]
  float a2c; // [esp+4h] [ebp-48h]
  float a2d; // [esp+4h] [ebp-48h]
  float a2e; // [esp+4h] [ebp-48h]
  float a2f; // [esp+4h] [ebp-48h]
  float a2g; // [esp+4h] [ebp-48h]
  _BYTE v28[5]; // [esp+1Fh] [ebp-2Dh]
  bool v29; // [esp+1Fh] [ebp-2Dh]
  _DWORD *v30; // [esp+24h] [ebp-28h] BYREF
  _DWORD *v31; // [esp+28h] [ebp-24h]
  BSStringT v32; // [esp+2Ch] [ebp-20h] BYREF
  BSStringT v33; // [esp+34h] [ebp-18h] BYREF
  unsigned int v34; // [esp+48h] [ebp-4h]

  v5 = sub_6B8660();
  v30 = *(_DWORD **)(*(_DWORD *)(a1 + 0x28) + 0x34);
  while ( v30 )
  {
    v6 = (void (__thiscall ***)(void *, int))sub_7AA860(
                                               (BSTextureManager *)(*(_DWORD *)(a1 + 0x28) + 0x30),
                                               (NiTPointerList_Node_void **)&v30);
    if ( v6 )
      (**v6)(v6, 1);
  }
  v28[4] = 0;
  *(_DWORD *)v28 = (unsigned __int8)sub_6B85C0(v5, 1);
  if ( v28[0] )
    Float = fConstant_2;
  else
    Float = 1.0;
  a2 = Float;
  Tile_SetFloat(*(Tile **)(a1 + 0x44), (_DWORD *)0xFA1, a2);
  if ( *(_BYTE *)(a1 + 0x88) )
  {
    *(_BYTE *)(a1 + 0x64) = 0;
    sub_59DD40(esi0, a3, a4);
    return 1;
  }
  else
  {
    TileFromTemplate = *(BSStringT **)(a1 + 0x28);
    v30 = 0;
    if ( !v28[0] )
      goto LABEL_27;
    v32.m_data = 0;
    v32.m_dataLen = 0;
    v32.m_bufLen = 0;
    do
    {
      v33.m_data = 0;
      v33.m_dataLen = 0;
      v33.m_bufLen = 0;
      BSStringT_Set(&v33, "topic_template", 0);
      v10 = *(TileWindow **)(a1 + 0x28);
      v34 = 0;
      TileFromTemplate = (BSStringT *)Menu_CreateTileFromTemplate(
                                        (_DWORD *)a1,
                                        a3,
                                        a4,
                                        Float,
                                        v10,
                                        v33.m_data,
                                        (int)TileFromTemplate);
      v11 = (const char **)sub_6B8650((int **)v5);
      BSStringT_Set(&v32, *v11, 0);
      LOBYTE(v34) = 1;
      BSStringT_Set(TileFromTemplate + 1, v32.m_data, 0);
      LOBYTE(v34) = 0;
      FormHeapFree((unsigned int)v32.m_data);
      v32.m_data = 0;
      v32.m_bufLen = 0;
      v32.m_dataLen = 0;
      v12 = (char **)sub_6B8650((int **)v5);
      Tile_SetString(TileFromTemplate, (_DWORD *)0xFDE, *v12);
      v31 = (_DWORD *)(*(_DWORD *)&v28[1] + 0x65);
      a2a = (float)(*(_DWORD *)&v28[1] + 0x65);
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, a2a);
      Float = (double)*(int *)&v28[1];
      a2b = Float;
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, a2b);
      ++*(_DWORD *)&v28[1];
      if ( !v30 )
      {
        InterfaceManager_GetSingleton(0, 1);
        Singleton = InterfaceManager_GetSingleton(0, 1);
        v31 = (_DWORD *)++Singleton->unk08C;
        Float = (double)(int)v31;
        if ( (int)v31 < 0 )
          Float = Float + flt_A2FC78;
        a2c = Float;
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, a2c);
      }
      if ( !*(_BYTE *)(sub_6B8650((int **)v5) + 0x21) )
      {
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB0, 0.0);
        a2d = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB5);
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFCC, a2d);
        a2e = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB6);
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFCD, a2e);
        Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB7);
        a2f = Float;
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFCE, a2f);
        v14 = *(char **)sub_6B8650((int **)v5);
        if ( v14 && (v15 = *(char **)(a1 + 0x8C)) != 0 )
          v16 = _strcmp(v15, v14);
        else
          v16 = 2 * (v14 == 0) - 1;
        if ( !v16 )
        {
          InterfaceManager_GetSingleton(0, 1);
          v17 = InterfaceManager_GetSingleton(0, 1);
          Float = (double)(int)++v17->unk08C;
          if ( (int)v17->unk08C < 0 )
            Float = Float + flt_A2FC78;
          a2g = Float;
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, a2g);
        }
      }
      v18 = sub_6B85F0(v5);
      v30 = (_DWORD *)((char *)v30 + 1);
      v29 = v18;
      v34 = 0xFFFFFFFF;
      FormHeapFree((unsigned int)v33.m_data);
      v33.m_data = 0;
      v33.m_bufLen = 0;
      v33.m_dataLen = 0;
    }
    while ( v29 );
    if ( !v30 )
    {
LABEL_27:
      Float = fConstant_2;
      Tile_SetFloat(*(Tile **)(a1 + 0x30), (_DWORD *)0xFA1, fConstant_2);
    }
    sub_6B85C0(v5, 0);
    sub_58FBA0(*(_DWORD *)(a1 + 0x28), a3, a4, Float, 0);
    if ( !BYTE1(InterfaceManager_GetSingleton(0, 1)->unk0B8) )
    {
      v19 = (Tile **)InterfaceManager_GetSingleton(0, 1);
      sub_57FD60(v19, a3, a4, Float);
    }
    return 0;
  }
}
