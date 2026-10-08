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

  v3 = (_DWORD *)*(this + 1); /*0x5ad7c4*/
  v24 = this; /*0x5ad7cc*/
  Float = Tile_GetFloat(v3, 0xFAE); /*0x5ad7d4*/
  v5 = Double_To_SInt32(Float); /*0x5ad7d9*/
  v6 = this + 0x13; /*0x5ad7de*/
  if ( this != (_DWORD *)0xFFFFFFB4 ) /*0x5ad7e5*/
  {
    while ( 1 ) /*0x5ad7f0*/
    {
      v7 = v6[1]; /*0x5ad7f0*/
      if ( !v7 && !*v6 ) /*0x5ad7f7*/
        break; /*0x5ad7f7*/
      v8 = v5--; /*0x5ad7fb*/
      if ( v8 <= 0 ) /*0x5ad802*/
        break; /*0x5ad802*/
      v6 = (_DWORD *)v6[1]; /*0x5ad804*/
      if ( !v7 ) /*0x5ad808*/
        return; /*0x5ad808*/
    }
    if ( v7 || *v6 ) /*0x5ad813*/
    {
      v9 = *v6; /*0x5ad81b*/
      a2 = *(const char **)(*v6 + 0x1C); /*0x5ad81d*/
      if ( !a2 ) /*0x5ad822*/
        a2 = EmptyString; /*0x5ad824*/
      Str.m_data = 0; /*0x5ad82f*/
      Str.m_dataLen = 0; /*0x5ad833*/
      Str.m_bufLen = 0; /*0x5ad838*/
      BSStringT_Set(&Str, a2, 0); /*0x5ad83d*/
      m_data = Str.m_data; /*0x5ad842*/
      v26 = 0; /*0x5ad84c*/
      if ( !strstr(Str.m_data, "Menus\\Loading") ) /*0x5ad853*/
      {
        v12 = *(CHAR **)(v9 + 0x1C); /*0x5ad85f*/
        if ( !v12 ) /*0x5ad864*/
          v12 = EmptyString; /*0x5ad866*/
        a3 = v12; /*0x5ad86b*/
        v13 = sub_4F96F0(); /*0x5ad86e*/
        BSStringT_Static_Format(&Str, "%s%s", v13, a3); /*0x5ad87e*/
        m_data = Str.m_data; /*0x5ad883*/
      }
      Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, m_data); /*0x5ad893*/
      v14 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(v9 + 0x24) + 0x10); /*0x5ad89b*/
      v15 = v9 + 0x24; /*0x5ad89e*/
      v16 = strlen((const char *)v14(v15, 0, 0x43534544)); /*0x5ad8ab*/
      v17 = (char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v15 + 0x10))(v15, 0, 0x43534544); /*0x5ad8ca*/
      v18 = v25; /*0x5ad8cc*/
      do /*0x5ad8dc*/
      {
        v19 = *v17; /*0x5ad8d0*/
        *v18++ = *v17++; /*0x5ad8d2*/
      }
      while ( v19 ); /*0x5ad8dc*/
      v20 = &v25[v16 - 1]; /*0x5ad8de*/
      if ( v25[v16 - 1] == 0xA ) /*0x5ad8e6*/
        *v20 = 0; /*0x5ad8e8*/
      if ( v20[0xFFFFFFFF] == 0xA ) /*0x5ad8ed*/
        v20[0xFFFFFFFF] = 0; /*0x5ad8ef*/
      if ( v20[0xFFFFFFFE] == 0xA ) /*0x5ad8f5*/
        v20[0xFFFFFFFE] = 0; /*0x5ad8f7*/
      Tile_SetString((_DWORD *)v24[1], (_DWORD *)0xFB0, v25); /*0x5ad90b*/
      v22 = Tile_GetFloat(arg0, 0xFAE) + dbl_A2F928; /*0x5ad929*/
      Tile_SetFloat(arg0, 0xFAEu, v22); /*0x5ad939*/
      FormHeapFree((unsigned int)m_data); /*0x5ad93f*/
    }
  }
}
