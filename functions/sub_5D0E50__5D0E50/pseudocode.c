BSStringT *__userpurge sub_5D0E50@<eax>(
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
  bool v10; // zf
  const char *v11; // eax
  unsigned int *TileFromTemplate; // eax
  BSStringT *v13; // esi
  int i; // edx
  char *v15; // eax
  char v16; // cl
  TileWindow *v18; // [esp-8h] [ebp-140h]
  float v19; // [esp+0h] [ebp-138h]
  float v20; // [esp+0h] [ebp-138h]
  float v21; // [esp+0h] [ebp-138h]
  BSStringT v22; // [esp+18h] [ebp-120h] BYREF
  BSStringT v23; // [esp+20h] [ebp-118h] BYREF
  char v24[255]; // [esp+28h] [ebp-110h] BYREF
  char v25; // [esp+127h] [ebp-11h]
  int v26; // [esp+134h] [ebp-4h]

  v22.m_data = 0;
  v22.m_dataLen = 0;
  v22.m_bufLen = 0;
  BSStringT_Set(&v22, a2, 0);
  v10 = *(this + 0x16) == 2;
  v26 = 0;
  v11 = "rep_buy_item_template";
  if ( !v10 )
    v11 = "rep_item_template";
  v23.m_data = 0;
  v23.m_dataLen = 0;
  v23.m_bufLen = 0;
  BSStringT_Set(&v23, v11, 0);
  v18 = (TileWindow *)*(this + 0x11);
  LOBYTE(v26) = 1;
  TileFromTemplate = Menu_CreateTileFromTemplate(this, st5_0, st6_0, st7_0, v18, v23.m_data, 0);
  v13 = (BSStringT *)TileFromTemplate;
  if ( TileFromTemplate )
  {
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFAF, a6);
    for ( i = 0; i < 0x100; ++i )
    {
      v15 = &v24[i];
      v16 = v24[i + a6 - v24];
      v24[i] = v16;
      if ( v16 == 0x20 )
        *v15 = 0x5F;
      if ( !*v15 )
        break;
    }
    v25 = 0;
    BSStringT_Set(v13 + 1, v24, 0);
    Tile_SetString(v13, (_DWORD *)0xFB4, v22.m_data);
    v19 = (float)a7;
    Tile_SetFloat((Tile *)v13, (_DWORD *)0xFB7, v19);
    v20 = (float)a8;
    Tile_SetFloat((Tile *)v13, (_DWORD *)0xFAA, v20);
    v21 = (float)a9;
    Tile_SetFloat((Tile *)v13, (_DWORD *)0xFA8, v21);
    *(this + 4) = v13;
  }
  FormHeapFree((unsigned int)v23.m_data);
  FormHeapFree((unsigned int)v22.m_data);
  return v13;
}
