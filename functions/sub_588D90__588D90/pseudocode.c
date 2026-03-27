double __usercall sub_588D90@<st0>(_DWORD *a1@<ecx>, double a2@<st0>)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // edx
  unsigned __int16 v6; // cx
  Tile *v7; // esi
  _DWORD *v8; // eax
  int v9; // edx
  unsigned __int16 v10; // cx
  double v11; // st7
  float v13; // [esp+8h] [ebp-8h]
  float v14; // [esp+Ch] [ebp-4h]

  Tile_GetFloat(a1, 0xFAB);
  v13 = a2;
  v3 = a1[4];
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD **)(v3 + 0x18);
      if ( v4 )
      {
        while ( 1 )
        {
          v5 = v4[2];
          v6 = *(_WORD *)(v5 + 0x18);
          v4 = (_DWORD *)*v4;
          if ( v6 == 0xFA6 )
            break;
          if ( v6 > 0xFA6u || !v4 )
            goto LABEL_8;
        }
        if ( fConstant_2 == *(float *)(v5 + 4) )
          break;
      }
LABEL_8:
      v7 = *(Tile **)(v3 + 0x10);
      if ( v7 == InterfaceManager_GetSingleton(0, 1)->menuRoot )
        break;
LABEL_15:
      v3 = *(_DWORD *)(v3 + 0x10);
      if ( !v3 )
        return v13;
    }
    v8 = *(_DWORD **)(v3 + 0x18);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = v8[2];
        v10 = *(_WORD *)(v9 + 0x18);
        v8 = (_DWORD *)*v8;
        if ( v10 == 0xFAB )
          break;
        if ( v10 > 0xFABu || !v8 )
          goto LABEL_13;
      }
      v11 = *(float *)(v9 + 4);
    }
    else
    {
LABEL_13:
      v11 = 0.0;
    }
    v14 = v11;
    v13 = v14 + v13;
    goto LABEL_15;
  }
  return v13;
}
