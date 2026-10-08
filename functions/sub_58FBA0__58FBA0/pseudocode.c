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

  v5 = a1; /*0x58fba4*/
  if ( *(_BYTE *)(a1 + 5) ) /*0x58fba6*/
    return; /*0x58fbae*/
  v6 = *(Tile **)(a1 + 0x10); /*0x58fbb7*/
  if ( v6 == InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x58fbc9*/
  {
    if ( Tile_GetFloat((_DWORD *)v5, 0xFA5) != fXMLI_NoClickPast ) /*0x58fbe9*/
    {
      if ( Tile_GetFloat((_DWORD *)v5, 0xFA5) != fXMLI_MixedMenu ) /*0x58fc0c*/
        goto LABEL_10; /*0x58fc0c*/
      PropertyByCode = Tile::GetOrCreateValue((_DWORD *)v5, (_DWORD *)0xFA5); /*0x58fc15*/
      if ( !PropertyByCode ) /*0x58fc1c*/
        goto LABEL_10; /*0x58fc1c*/
      v8 = fXMLI_StackingType6007; /*0x58fc1e*/
      goto LABEL_9; /*0x58fc1e*/
    }
    PropertyByCode = Tile::GetOrCreateValue((_DWORD *)v5, (_DWORD *)0xFA5); /*0x58fbeb*/
    if ( PropertyByCode ) /*0x58fbf2*/
    {
      v8 = fXMLI_StackingType6006; /*0x58fbf4*/
LABEL_9:
      v24 = v8; /*0x58fc24*/
      Tile::Value::SetFloat((int)PropertyByCode, v24); /*0x58fc2a*/
    }
  }
LABEL_10:
  v9 = unk_B3B0A2; /*0x58fc2f*/
  unk_B3B0A2 = 1; /*0x58fc37*/
  v10 = sub_58E870(v5, a2, a3, a4); /*0x58fc3e*/
  unk_B3B0A2 = v9; /*0x58fc43*/
  v11 = *(_DWORD **)(v5 + 0x34); /*0x58fc49*/
  v25 = v10; /*0x58fc52*/
  if ( v11 ) /*0x58fc56*/
  {
    while ( 1 ) /*0x58fc60*/
    {
      v12 = v11[2]; /*0x58fc60*/
      v11 = (_DWORD *)*v11; /*0x58fc69*/
      v13 = *(_DWORD **)(v12 + 0x18); /*0x58fc6c*/
      if ( v13 ) /*0x58fc70*/
      {
        while ( 1 ) /*0x58fc72*/
        {
          v14 = v13[2]; /*0x58fc72*/
          v15 = *(_WORD *)(v14 + 0x18); /*0x58fc78*/
          v13 = (_DWORD *)*v13; /*0x58fc81*/
          if ( v15 == 0xFA1 ) /*0x58fc83*/
            break; /*0x58fc83*/
          if ( v15 > 0xFA1u || !v13 ) /*0x58fc89*/
            goto LABEL_17; /*0x58fc89*/
        }
        if ( 1.0 == *(float *)(v14 + 4) ) /*0x58fc9f*/
          break; /*0x58fc9f*/
      }
LABEL_17:
      v16 = *(_DWORD **)(v12 + 0x18); /*0x58fca1*/
      if ( v16 ) /*0x58fca5*/
      {
        while ( 1 ) /*0x58fcb0*/
        {
          v17 = v16[2]; /*0x58fcb0*/
          v18 = *(_WORD *)(v17 + 0x18); /*0x58fcb6*/
          v16 = (_DWORD *)*v16; /*0x58fcbf*/
          if ( v18 == 0xFA3 ) /*0x58fcc1*/
            break; /*0x58fcc1*/
          if ( v18 > 0xFA3u || !v16 ) /*0x58fcc7*/
            goto LABEL_30; /*0x58fcc7*/
        }
        if ( fConstant_2 == *(float *)(v17 + 4) ) /*0x58fce1*/
          break; /*0x58fce1*/
      }
LABEL_30:
      v23 = a5 || v25; /*0x58fd28*/
      sub_58FBA0(v12, a2, a3, a4, v23); /*0x58fd30*/
LABEL_35:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0xC))(v12) == 0x388 ) /*0x58fd43*/
        sub_590D20((_DWORD *)v12, *(float *)(v12 + 0x58)); /*0x58fd4e*/
      if ( !v11 ) /*0x58fd55*/
      {
        v5 = a1; /*0x58fd5b*/
        goto LABEL_39; /*0x58fd5b*/
      }
    }
    v19 = *(_DWORD *)(v12 + 0x24); /*0x58fce3*/
    v20 = 0; /*0x58fce6*/
    if ( v19 ) /*0x58fcea*/
      v20 = *(_BYTE *)(v19 + 0x18) & 1; /*0x58fcef*/
    for ( i = *(_DWORD *)(v12 + 0x10); i; i = *(_DWORD *)(i + 0x10) ) /*0x58fcf7*/
    {
      v22 = *(_DWORD *)(i + 0x24); /*0x58fd00*/
      if ( v22 ) /*0x58fd05*/
        v20 |= *(_BYTE *)(v22 + 0x18) & 1; /*0x58fd0d*/
    }
    if ( v20 ) /*0x58fd18*/
      goto LABEL_35; /*0x58fd18*/
    goto LABEL_30; /*0x58fd18*/
  }
LABEL_39:
  if ( !a5 ) /*0x58fd64*/
  {
    if ( v25 ) /*0x58fd6b*/
      NiAVObject_UpdateNiAVObject(*(NiAVObject **)(v5 + 0x24), 0.0, 1); /*0x58fd78*/
  }
}
