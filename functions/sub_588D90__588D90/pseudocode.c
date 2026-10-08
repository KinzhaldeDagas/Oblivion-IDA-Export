// AchievementsNative evidence: stock tile depth helper starts with tile depth and adds parent depth for locus ancestors / top menu child; InventoryMenu hover sets focus box depth to this value minus 0.5.
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

  Tile_GetFloat(a1, 0xFAB); /*0x588d9c*/
  v13 = a2; /*0x588da1*/
  v3 = a1[4]; /*0x588da5*/
  if ( v3 ) /*0x588daa*/
  {
    while ( 1 ) /*0x588db0*/
    {
      v4 = *(_DWORD **)(v3 + 0x18); /*0x588db0*/
      if ( v4 ) /*0x588db5*/
      {
        while ( 1 ) /*0x588dc0*/
        {
          v5 = v4[2]; /*0x588dc0*/
          v6 = *(_WORD *)(v5 + 0x18); /*0x588dc6*/
          v4 = (_DWORD *)*v4; /*0x588dcf*/
          if ( v6 == 0xFA6 ) /*0x588dd1*/
            break; /*0x588dd1*/
          if ( v6 > 0xFA6u || !v4 ) /*0x588dd7*/
            goto LABEL_8; /*0x588dd7*/
        }
        if ( fConstant_2 == *(float *)(v5 + 4) ) /*0x588df1*/
          break; /*0x588df1*/
      }
LABEL_8:
      v7 = *(Tile **)(v3 + 0x10); /*0x588df3*/
      if ( v7 == InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x588e05*/
        break; /*0x588e05*/
LABEL_15:
      v3 = *(_DWORD *)(v3 + 0x10); /*0x588e3b*/
      if ( !v3 ) /*0x588e40*/
        return v13; /*0x588e40*/
    }
    v8 = *(_DWORD **)(v3 + 0x18); /*0x588e07*/
    if ( v8 ) /*0x588e0c*/
    {
      while ( 1 ) /*0x588e10*/
      {
        v9 = v8[2]; /*0x588e10*/
        v10 = *(_WORD *)(v9 + 0x18); /*0x588e16*/
        v8 = (_DWORD *)*v8; /*0x588e1f*/
        if ( v10 == 0xFAB ) /*0x588e21*/
          break; /*0x588e21*/
        if ( v10 > 0xFABu || !v8 ) /*0x588e27*/
          goto LABEL_13; /*0x588e27*/
      }
      v11 = *(float *)(v9 + 4); /*0x588e50*/
    }
    else
    {
LABEL_13:
      v11 = 0.0; /*0x588e29*/
    }
    v14 = v11; /*0x588e2b*/
    v13 = v14 + v13; /*0x588e37*/
    goto LABEL_15; /*0x588e37*/
  }
  return v13; /*0x588e4a*/
}
