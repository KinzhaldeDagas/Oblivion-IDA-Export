BSStringT *__userpurge sub_5D0E50@<eax>(
        Menu *this@<ecx>,
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
  Tile *v12; // eax
  BSStringT *v13; // esi
  int i; // edx
  char *v15; // eax
  char v16; // cl
  Tile *v18; // [esp-8h] [ebp-140h]
  float v19; // [esp+0h] [ebp-138h]
  float v20; // [esp+0h] [ebp-138h]
  float v21; // [esp+0h] [ebp-138h]
  BSStringT v22; // [esp+18h] [ebp-120h] BYREF
  BSStringT v23; // [esp+20h] [ebp-118h] BYREF
  char v24[255]; // [esp+28h] [ebp-110h] BYREF
  char v25; // [esp+127h] [ebp-11h]
  int v26; // [esp+134h] [ebp-4h]

  v22.m_data = 0; /*0x5d0ea3*/
  v22.m_dataLen = 0; /*0x5d0ea7*/
  v22.m_bufLen = 0; /*0x5d0eac*/
  BSStringT_Set(&v22, a2, 0); /*0x5d0eb1*/
  v10 = *((_DWORD *)this + 0x16) == 2; /*0x5d0eb6*/
  v26 = 0; /*0x5d0eba*/
  v11 = "rep_buy_item_template"; /*0x5d0ec1*/
  if ( !v10 ) /*0x5d0ec6*/
    v11 = "rep_item_template"; /*0x5d0ec8*/
  v23.m_data = 0; /*0x5d0ed3*/
  v23.m_dataLen = 0; /*0x5d0ed7*/
  v23.m_bufLen = 0; /*0x5d0edc*/
  BSStringT_Set(&v23, v11, 0); /*0x5d0ee1*/
  v18 = *((Tile **)this + 0x11); /*0x5d0eef*/
  LOBYTE(v26) = 1; /*0x5d0ef2*/
  v12 = Menu::RenderTemplate(this, v18, v23.m_data, 0); /*0x5d0efa*/
  v13 = (BSStringT *)v12; /*0x5d0eff*/
  if ( v12 ) /*0x5d0f03*/
  {
    Tile_SetString(v12, (_DWORD *)0xFAF, a6); /*0x5d0f11*/
    for ( i = 0; i < 0x100; ++i ) /*0x5d0f1a*/
    {
      v15 = &v24[i]; /*0x5d0f20*/
      v16 = v24[i + a6 - v24]; /*0x5d0f24*/
      v24[i] = v16; /*0x5d0f2a*/
      if ( v16 == 0x20 ) /*0x5d0f2c*/
        *v15 = 0x5F; /*0x5d0f2e*/
      if ( !*v15 ) /*0x5d0f31*/
        break; /*0x5d0f33*/
    }
    v25 = 0; /*0x5d0f49*/
    BSStringT_Set(v13 + 1, v24, 0); /*0x5d0f50*/
    Tile_SetString(v13, (_DWORD *)0xFB4, v22.m_data); /*0x5d0f61*/
    __asm { fild    [esp+134h+arg_8] } /*0x5d0f66*/
    __asm { fstp    [esp+138h+var_138]; value }
    Tile_SetFloat((Tile *)v13, 0xFB7u, v19); /*0x5d0f78*/
    __asm { fild    [esp+134h+arg_C] } /*0x5d0f7d*/
    __asm { fstp    [esp+138h+var_138]; value }
    Tile_SetFloat((Tile *)v13, 0xFAAu, v20); /*0x5d0f8f*/
    __asm { fild    [esp+134h+arg_10] } /*0x5d0f94*/
    __asm { fstp    [esp+138h+var_138]; value }
    Tile_SetFloat((Tile *)v13, 0xFA8u, v21); /*0x5d0fa6*/
    this->members.templateContextTile = (Tile *)v13; /*0x5d0fab*/
  }
  FormHeapFree((unsigned int)v23.m_data); /*0x5d0fb3*/
  FormHeapFree((unsigned int)v22.m_data); /*0x5d0fbd*/
  return v13; /*0x5d0fc7*/
}
