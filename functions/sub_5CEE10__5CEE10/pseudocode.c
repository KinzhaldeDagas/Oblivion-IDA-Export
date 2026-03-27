BSStringT *__userpurge sub_5CEE10@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        char *a2,
        char *a6,
        signed int a7,
        signed int a8)
{
  unsigned int *TileFromTemplate; // eax
  BSStringT *v10; // esi
  int i; // edx
  char *v12; // eax
  char v13; // cl
  TileWindow *v15; // [esp-8h] [ebp-138h]
  float v16; // [esp+0h] [ebp-130h]
  float v17; // [esp+0h] [ebp-130h]
  BSStringT v18; // [esp+18h] [ebp-118h] BYREF
  char v19[255]; // [esp+20h] [ebp-110h] BYREF
  char v20; // [esp+11Fh] [ebp-11h]
  int v21; // [esp+12Ch] [ebp-4h]

  v18.m_data = 0;
  v18.m_dataLen = 0;
  v18.m_bufLen = 0;
  BSStringT_Set(&v18, a2, 0);
  v15 = (TileWindow *)*(this + 0xE);
  v21 = 0;
  TileFromTemplate = Menu_CreateTileFromTemplate(this, st5_0, st6_0, st7_0, v15, "recharge_item_template", 0);
  v10 = (BSStringT *)TileFromTemplate;
  if ( TileFromTemplate )
  {
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFAF, a6);
    for ( i = 0; i < 0x100; ++i )
    {
      v12 = &v19[i];
      v13 = v19[i + a6 - v19];
      v19[i] = v13;
      if ( v13 == 0x20 )
        *v12 = 0x5F;
      if ( !*v12 )
        break;
    }
    v20 = 0;
    BSStringT_Set(v10 + 1, v19, 0);
    Tile_SetString(v10, (_DWORD *)0xFB1, v18.m_data);
    v16 = (float)a7;
    Tile_SetFloat((Tile *)v10, (_DWORD *)0xFAE, v16);
    v17 = (float)a8;
    Tile_SetFloat((Tile *)v10, (_DWORD *)0xFA8, v17);
    *(this + 4) = v10;
  }
  FormHeapFree((unsigned int)v18.m_data);
  return v10;
}
