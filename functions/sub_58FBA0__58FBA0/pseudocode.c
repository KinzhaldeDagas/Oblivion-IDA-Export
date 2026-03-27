void __userpurge sub_58FBA0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char a5)
{
  int v5; // edi
  Tile *v6; // esi
  _DWORD *PropertyByCode; // eax
  double v8; // st4
  char v9; // bl
  char v10; // al
  _DWORD *v11; // ebp
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // edx
  unsigned __int16 v15; // cx
  _DWORD *v16; // eax
  int v17; // edx
  unsigned __int16 v18; // cx
  int v19; // eax
  char v20; // dl
  int i; // eax
  int v22; // ecx
  char v23; // al
  float v24; // [esp+0h] [ebp-1Ch]
  char v25; // [esp+17h] [ebp-5h]

  v5 = a1;
  if ( *(_BYTE *)(a1 + 5) )
    return;
  v6 = *(Tile **)(a1 + 0x10);
  if ( v6 == InterfaceManager_GetSingleton(0, 1)->menuRoot )
  {
    if ( Tile_GetFloat((_DWORD *)v5, 0xFA5) != fXMLI_NoClickPast )
    {
      if ( Tile_GetFloat((_DWORD *)v5, 0xFA5) != fXMLI_MixedMenu )
        goto LABEL_10;
      PropertyByCode = Tile_GetPropertyByCode_((_DWORD *)v5, (_DWORD *)0xFA5);
      if ( !PropertyByCode )
        goto LABEL_10;
      v8 = fXMLI_StackingType6007;
      goto LABEL_9;
    }
    PropertyByCode = Tile_GetPropertyByCode_((_DWORD *)v5, (_DWORD *)0xFA5);
    if ( PropertyByCode )
    {
      v8 = fXMLI_StackingType6006;
LABEL_9:
      v24 = v8;
      Tile_Property_SetFloatValue_((int)PropertyByCode, v24);
    }
  }
LABEL_10:
  v9 = byte_B3B0A2;
  byte_B3B0A2 = 1;
  v10 = sub_58E870(v5, a2, a3, a4);
  byte_B3B0A2 = v9;
  v11 = *(_DWORD **)(v5 + 0x34);
  v25 = v10;
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = v11[2];
      v11 = (_DWORD *)*v11;
      v13 = *(_DWORD **)(v12 + 0x18);
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = v13[2];
          v15 = *(_WORD *)(v14 + 0x18);
          v13 = (_DWORD *)*v13;
          if ( v15 == 0xFA1 )
            break;
          if ( v15 > 0xFA1u || !v13 )
            goto LABEL_17;
        }
        if ( 1.0 == *(float *)(v14 + 4) )
          break;
      }
LABEL_17:
      v16 = *(_DWORD **)(v12 + 0x18);
      if ( v16 )
      {
        while ( 1 )
        {
          v17 = v16[2];
          v18 = *(_WORD *)(v17 + 0x18);
          v16 = (_DWORD *)*v16;
          if ( v18 == 0xFA3 )
            break;
          if ( v18 > 0xFA3u || !v16 )
            goto LABEL_30;
        }
        if ( fConstant_2 == *(float *)(v17 + 4) )
          break;
      }
LABEL_30:
      v23 = a5 || v25;
      sub_58FBA0(v12, a2, a3, a4, v23);
LABEL_35:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0xC))(v12) == 0x388 )
        sub_590D20((_DWORD *)v12, *(float *)(v12 + 0x58));
      if ( !v11 )
      {
        v5 = a1;
        goto LABEL_39;
      }
    }
    v19 = *(_DWORD *)(v12 + 0x24);
    v20 = 0;
    if ( v19 )
      v20 = *(_BYTE *)(v19 + 0x18) & 1;
    for ( i = *(_DWORD *)(v12 + 0x10); i; i = *(_DWORD *)(i + 0x10) )
    {
      v22 = *(_DWORD *)(i + 0x24);
      if ( v22 )
        v20 |= *(_BYTE *)(v22 + 0x18) & 1;
    }
    if ( v20 )
      goto LABEL_35;
    goto LABEL_30;
  }
LABEL_39:
  if ( !a5 )
  {
    if ( v25 )
      NiAVObject_UpdateNiAVObject(*(NiAVObject **)(v5 + 0x24), 0.0, 1);
  }
}
