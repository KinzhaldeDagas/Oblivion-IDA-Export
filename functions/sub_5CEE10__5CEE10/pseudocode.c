BSStringT *__thiscall sub_5CEE10(Menu *this, char *a2, char *a3, signed int a4, signed int a5)
{
  Tile *v9; // eax
  BSStringT *v10; // esi
  int i; // edx
  char *v12; // eax
  char v13; // cl
  Tile *v15; // [esp-8h] [ebp-138h]
  float v16; // [esp+0h] [ebp-130h]
  float v17; // [esp+0h] [ebp-130h]
  BSStringT v18; // [esp+18h] [ebp-118h] BYREF
  char v19[255]; // [esp+20h] [ebp-110h] BYREF
  char v20; // [esp+11Fh] [ebp-11h]
  int v21; // [esp+12Ch] [ebp-4h]

  v18.m_data = 0; /*0x5cee63*/
  v18.m_dataLen = 0; /*0x5cee67*/
  v18.m_bufLen = 0; /*0x5cee6c*/
  BSStringT_Set(&v18, a2, 0); /*0x5cee71*/
  v15 = *((Tile **)this + 0xE); /*0x5cee7f*/
  v21 = 0; /*0x5cee82*/
  v9 = Menu::RenderTemplate(this, v15, "recharge_item_template", 0); /*0x5cee89*/
  v10 = (BSStringT *)v9; /*0x5cee8e*/
  if ( v9 ) /*0x5cee92*/
  {
    Tile_SetString(v9, (_DWORD *)0xFAF, a3); /*0x5ceea0*/
    for ( i = 0; i < 0x100; ++i ) /*0x5ceea9*/
    {
      v12 = &v19[i]; /*0x5ceeb0*/
      v13 = v19[i + a3 - v19]; /*0x5ceeb4*/
      v19[i] = v13; /*0x5ceeba*/
      if ( v13 == 0x20 ) /*0x5ceebc*/
        *v12 = 0x5F; /*0x5ceebe*/
      if ( !*v12 ) /*0x5ceec1*/
        break; /*0x5ceec3*/
    }
    v20 = 0; /*0x5ceed9*/
    BSStringT_Set(v10 + 1, v19, 0); /*0x5ceee0*/
    Tile_SetString(v10, (_DWORD *)0xFB1, v18.m_data); /*0x5ceef1*/
    v16 = (float)a4; /*0x5cef00*/
    Tile_SetFloat((Tile *)v10, 0xFAEu, v16); /*0x5cef08*/
    v17 = (float)a5; /*0x5cef17*/
    Tile_SetFloat((Tile *)v10, 0xFA8u, v17); /*0x5cef1f*/
    this->members.templateContextTile = (Tile *)v10; /*0x5cef24*/
  }
  FormHeapFree((unsigned int)v18.m_data); /*0x5cef2c*/
  return v10; /*0x5cef36*/
}
