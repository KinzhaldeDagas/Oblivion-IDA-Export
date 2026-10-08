BSStringT *__thiscall sub_5B2A10(Menu *this, char *arg0, signed int a3)
{
  char *m_data; // ebp
  Tile *v8; // eax
  BSStringT *v9; // esi
  int i; // edx
  char *v11; // eax
  char v12; // cl
  Tile *v14; // [esp-8h] [ebp-138h]
  float a2; // [esp+0h] [ebp-130h]
  BSStringT v16; // [esp+18h] [ebp-118h] BYREF
  char v17[255]; // [esp+20h] [ebp-110h] BYREF
  char v18; // [esp+11Fh] [ebp-11h]
  int v19; // [esp+12Ch] [ebp-4h]

  v16.m_data = 0; /*0x5b2a60*/
  v16.m_dataLen = 0; /*0x5b2a64*/
  v16.m_bufLen = 0; /*0x5b2a69*/
  BSStringT_Set(&v16, "item_template", 0); /*0x5b2a6e*/
  m_data = v16.m_data; /*0x5b2a73*/
  v14 = *((Tile **)this + 0xB); /*0x5b2a7c*/
  v19 = 0; /*0x5b2a7f*/
  v8 = Menu::RenderTemplate(this, v14, v16.m_data, 0); /*0x5b2a86*/
  v9 = (BSStringT *)v8; /*0x5b2a8b*/
  if ( v8 ) /*0x5b2a8f*/
  {
    Tile_SetString(v8, (_DWORD *)0xFAF, arg0); /*0x5b2a99*/
    for ( i = 0; i < 0x100; ++i ) /*0x5b2aa2*/
    {
      v11 = &v17[i]; /*0x5b2aa6*/
      v12 = v17[i + arg0 - v17]; /*0x5b2aaa*/
      v17[i] = v12; /*0x5b2ab0*/
      if ( v12 == 0x20 ) /*0x5b2ab2*/
        *v11 = 0x5F; /*0x5b2ab4*/
      if ( !*v11 ) /*0x5b2ab7*/
        break; /*0x5b2ab9*/
    }
    v18 = 0; /*0x5b2acf*/
    BSStringT_Set(v9 + 1, v17, 0); /*0x5b2ad6*/
  }
  a2 = (float)a3; /*0x5b2ae5*/
  Tile_SetFloat((Tile *)v9, 0xFA8u, a2); /*0x5b2aed*/
  FormHeapFree((unsigned int)m_data); /*0x5b2af3*/
  return v9; /*0x5b2afd*/
}
