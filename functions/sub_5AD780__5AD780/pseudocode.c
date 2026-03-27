void __thiscall sub_5AD780(_DWORD *this, Tile *arg0)
{
  _DWORD *v3; // ecx
  double Float; // st7
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  int v8; // esi
  int v9; // esi
  const char *a2; // eax
  char *m_data; // ebp
  CHAR *v12; // eax
  const char *v13; // eax
  int (__thiscall *v14)(int, _DWORD, int); // eax
  int v15; // esi
  unsigned int v16; // edi
  char *v17; // eax
  char *v18; // edx
  char v19; // cl
  char *v20; // eax
  const char *a3; // [esp+10h] [ebp-238h]
  float v22; // [esp+28h] [ebp-220h]
  BSStringT Str; // [esp+2Ch] [ebp-21Ch] BYREF
  _DWORD *v24; // [esp+34h] [ebp-214h] BYREF
  char v25[512]; // [esp+38h] [ebp-210h] BYREF
  int v26; // [esp+244h] [ebp-4h]

  v3 = (_DWORD *)*(this + 1);
  v24 = this;
  Float = Tile_GetFloat(v3, 0xFAE);
  v5 = Double_To_SInt32(Float);
  v6 = this + 0x13;
  if ( this != (_DWORD *)0xFFFFFFB4 )
  {
    while ( 1 )
    {
      v7 = v6[1];
      if ( !v7 && !*v6 )
        break;
      v8 = v5--;
      if ( v8 <= 0 )
        break;
      v6 = (_DWORD *)v6[1];
      if ( !v7 )
        return;
    }
    if ( v7 || *v6 )
    {
      v9 = *v6;
      a2 = *(const char **)(*v6 + 0x1C);
      if ( !a2 )
        a2 = EmptyString;
      Str.m_data = 0;
      Str.m_dataLen = 0;
      Str.m_bufLen = 0;
      BSStringT_Set(&Str, a2, 0);
      m_data = Str.m_data;
      v26 = 0;
      if ( !strstr(Str.m_data, "Menus\\Loading") )
      {
        v12 = *(CHAR **)(v9 + 0x1C);
        if ( !v12 )
          v12 = EmptyString;
        a3 = v12;
        v13 = sub_4F96F0();
        BSStringT_Static_Format(&Str, "%s%s", v13, a3);
        m_data = Str.m_data;
      }
      Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, m_data);
      v14 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(v9 + 0x24) + 0x10);
      v15 = v9 + 0x24;
      v16 = strlen((const char *)v14(v15, 0, 0x43534544));
      v17 = (char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v15 + 0x10))(v15, 0, 0x43534544);
      v18 = v25;
      do
      {
        v19 = *v17;
        *v18++ = *v17++;
      }
      while ( v19 );
      v20 = &v25[v16 - 1];
      if ( v25[v16 - 1] == 0xA )
        *v20 = 0;
      if ( v20[0xFFFFFFFF] == 0xA )
        v20[0xFFFFFFFF] = 0;
      if ( v20[0xFFFFFFFE] == 0xA )
        v20[0xFFFFFFFE] = 0;
      Tile_SetString((_DWORD *)v24[1], (_DWORD *)0xFB0, v25);
      v22 = Tile_GetFloat(arg0, 0xFAE) + dbl_A2F928;
      Tile_SetFloat(arg0, (_DWORD *)0xFAE, v22);
      FormHeapFree((unsigned int)m_data);
    }
  }
}
