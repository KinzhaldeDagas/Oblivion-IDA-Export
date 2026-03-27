BSStringT *__userpurge sub_5AAB60@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        char *a2,
        char *a6,
        signed int a7,
        signed int a8,
        signed int a9)
{
  char *m_data; // ebp
  unsigned int *TileFromTemplate; // eax
  BSStringT *v12; // esi
  int i; // edx
  char *v14; // eax
  char v15; // cl
  TileWindow *v17; // [esp-8h] [ebp-140h]
  float v18; // [esp+0h] [ebp-138h]
  float v19; // [esp+0h] [ebp-138h]
  float v20; // [esp+0h] [ebp-138h]
  BSStringT v21; // [esp+18h] [ebp-120h] BYREF
  BSStringT v22; // [esp+20h] [ebp-118h] BYREF
  char v23[255]; // [esp+28h] [ebp-110h] BYREF
  char v24; // [esp+127h] [ebp-11h]
  int v25; // [esp+134h] [ebp-4h]

  v21.m_data = 0;
  v21.m_dataLen = 0;
  v21.m_bufLen = 0;
  BSStringT_Set(&v21, a2, 0);
  v25 = 0;
  v22.m_data = 0;
  v22.m_dataLen = 0;
  v22.m_bufLen = 0;
  BSStringT_Set(&v22, "item_template", 0);
  m_data = v22.m_data;
  v17 = (TileWindow *)*(this + 0xB);
  LOBYTE(v25) = 1;
  TileFromTemplate = Menu_CreateTileFromTemplate(this, st5_0, st6_0, st7_0, v17, v22.m_data, 0);
  v12 = (BSStringT *)TileFromTemplate;
  if ( TileFromTemplate )
  {
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFAF, a6);
    for ( i = 0; i < 256; ++i )
    {
      v14 = &v23[i];
      v15 = v23[i + a6 - v23];
      v23[i] = v15;
      if ( v15 == 0x20 )
        *v14 = 0x5F;
      if ( !*v14 )
        break;
    }
    v24 = 0;
    BSStringT_Set(v12 + 1, v23, 0);
    Tile_SetString(v12, (_DWORD *)0xFB4, v21.m_data);
    v18 = (float)a7;
    Tile_SetFloat((Tile *)v12, (_DWORD *)0xFB7, v18);
    v19 = (float)a8;
    Tile_SetFloat((Tile *)v12, (_DWORD *)0xFAA, v19);
    v20 = (float)a9;
    Tile_SetFloat((Tile *)v12, (_DWORD *)0xFA8, v20);
  }
  FormHeapFree((unsigned int)m_data);
  FormHeapFree((unsigned int)v21.m_data);
  return v12;
}
