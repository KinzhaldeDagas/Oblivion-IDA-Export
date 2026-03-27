void __usercall sub_5C9CD0(double st5_0@<st2>, double a2@<st1>, double st7_0@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  float *v5; // esi
  char *v6; // edi
  double v7; // st5
  double v8; // st5
  const char *v9; // eax
  Tile *v10; // eax
  double v11; // st7
  int v12; // ecx
  Tile *v13; // ebp
  double v14; // st7
  const char *v15; // eax
  Tile *v16; // eax
  double v17; // st7
  int v18; // ecx
  Tile *v19; // edi
  BSStringT v20; // [esp-Ch] [ebp-A4h] BYREF
  BSStringT v21; // [esp-4h] [ebp-9Ch] BYREF
  float a3; // [esp+18h] [ebp-80h]
  double v23; // [esp+1Ch] [ebp-7Ch]
  double v24; // [esp+24h] [ebp-74h]
  _DWORD a1[24]; // [esp+2Ch] [ebp-6Ch] BYREF
  unsigned int v26; // [esp+94h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v5 = (float *)OblivionDynamicCast(
                    ParentMenu,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &RaceSexMenu `RTTI Type Descriptor',
                    0);
    if ( v5 )
    {
      v6 = (char *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
      sub_5273A0(v6, 0, 0, 0);
      sub_5C91E0(st5_0, a2, st7_0);
      ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
      v26 = 0;
      sub_5221C0((int *)v6, a1);
      BSFaceGen_GetAge((int)a1, 0, 0);
      a3 = st7_0;
      v24 = 1.0 - 0.0;
      v7 = a3;
      a3 = COERCE_FLOAT(&v21);
      v8 = v7 - dbl_A492F0;
      *(_DWORD *)&v20.m_dataLen = 0;
      v5[0x220] = v24 * (v8 / dbl_A3F3D0) + 0.0;
      v20.m_data = (char *)dword_B38F98;
      v21.m_data = 0;
      *(_DWORD *)&v21.m_dataLen = 0;
      BSStringT_Set(&v21, v20.m_data, *(unsigned int *)&v20.m_dataLen);
      v9 = (const char *)dword_B38F70;
      LODWORD(v23) = &v20;
      LOBYTE(v26) = 1;
      v20.m_data = 0;
      v20.m_dataLen = 0;
      v20.m_bufLen = 0;
      BSStringT_Set(&v20, v9, 0);
      LOBYTE(v26) = 0;
      v10 = (Tile *)sub_5C3440(
                      v5,
                      v20.m_data,
                      *(int *)&v20.m_dataLen,
                      (unsigned __int8 *)v21.m_data,
                      *(int *)&v21.m_dataLen);
      v11 = v5[0x220];
      *(_DWORD *)&v21.m_dataLen = v12;
      a3 = v11;
      v13 = v10;
      Tile_SetFloat(v10, (_DWORD *)0xFB1, flt_A6D2D8);
      Tile_SetFloat(v13, (_DWORD *)0xFB1, a3);
      Tile_SetFloat(v13, (_DWORD *)0xFB1, 0.0);
      BSFaceGen_GetAge((int)a1, 1, 0);
      v23 = 0.0;
      v14 = sub_522230(v6);
      a3 = v23 - v14;
      LODWORD(v23) = &v21;
      *(_DWORD *)&v20.m_dataLen = 0;
      v5[0x221] = (a3 - dbl_A3F400) * dbl_A3C770 * v24 + dbl_A2FC68;
      v20.m_data = (char *)dword_B38FA0;
      v21.m_data = 0;
      *(_DWORD *)&v21.m_dataLen = 0;
      BSStringT_Set(&v21, v20.m_data, *(unsigned int *)&v20.m_dataLen);
      v15 = (const char *)dword_B38F70;
      a3 = COERCE_FLOAT(&v20);
      LOBYTE(v26) = 2;
      v20.m_data = 0;
      v20.m_dataLen = 0;
      v20.m_bufLen = 0;
      BSStringT_Set(&v20, v15, 0);
      LOBYTE(v26) = 0;
      v16 = (Tile *)sub_5C3440(
                      v5,
                      v20.m_data,
                      *(int *)&v20.m_dataLen,
                      (unsigned __int8 *)v21.m_data,
                      *(int *)&v21.m_dataLen);
      v17 = v5[0x221];
      *(_DWORD *)&v21.m_dataLen = v18;
      a3 = v17;
      v19 = v16;
      Tile_SetFloat(v16, (_DWORD *)0xFB1, flt_A6D2D8);
      Tile_SetFloat(v19, (_DWORD *)0xFB1, a3);
      Tile_SetFloat(v19, (_DWORD *)0xFB1, 0.0);
      v26 = 0xFFFFFFFF;
      _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
    }
  }
}
