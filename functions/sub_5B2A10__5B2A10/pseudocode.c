BSStringT *__userpurge sub_5B2A10@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        char *a5,
        signed int a6)
{
  char *m_data; // ebp
  unsigned int *TileFromTemplate; // eax
  BSStringT *v9; // esi
  int i; // edx
  char *v11; // eax
  char v12; // cl
  TileWindow *v14; // [esp-8h] [ebp-138h]
  float a2; // [esp+0h] [ebp-130h]
  BSStringT v16; // [esp+18h] [ebp-118h] BYREF
  char v17[255]; // [esp+20h] [ebp-110h] BYREF
  char v18; // [esp+11Fh] [ebp-11h]
  int v19; // [esp+12Ch] [ebp-4h]

  v16.m_data = 0;
  v16.m_dataLen = 0;
  v16.m_bufLen = 0;
  BSStringT_Set(&v16, "item_template", 0);
  m_data = v16.m_data;
  v14 = (TileWindow *)*(this + 0xB);
  v19 = 0;
  TileFromTemplate = Menu_CreateTileFromTemplate(this, st5_0, st6_0, a4, v14, v16.m_data, 0);
  v9 = (BSStringT *)TileFromTemplate;
  if ( TileFromTemplate )
  {
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFAF, a5);
    for ( i = 0; i < 0x100; ++i )
    {
      v11 = &v17[i];
      v12 = v17[i + a5 - v17];
      v17[i] = v12;
      if ( v12 == 0x20 )
        *v11 = 0x5F;
      if ( !*v11 )
        break;
    }
    v18 = 0;
    BSStringT_Set(v9 + 1, v17, 0);
  }
  a2 = (float)a6;
  Tile_SetFloat((Tile *)v9, (_DWORD *)0xFA8, a2);
  FormHeapFree((unsigned int)m_data);
  return v9;
}
