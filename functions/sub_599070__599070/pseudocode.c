BSStringT *__userpurge sub_599070@<eax>(
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
  char *m_data; // ebp
  Tile *v11; // eax
  BSStringT *v12; // esi
  int i; // edx
  char *v14; // eax
  char v15; // cl
  Tile *v17; // [esp-8h] [ebp-140h]
  float v18; // [esp+0h] [ebp-138h]
  float v19; // [esp+0h] [ebp-138h]
  float v20; // [esp+0h] [ebp-138h]
  BSStringT v21; // [esp+18h] [ebp-120h] BYREF
  BSStringT v22; // [esp+20h] [ebp-118h] BYREF
  char v23[255]; // [esp+28h] [ebp-110h] BYREF
  char v24; // [esp+127h] [ebp-11h]
  int v25; // [esp+134h] [ebp-4h]

  v21.m_data = 0; /*0x5990c3*/
  v21.m_dataLen = 0; /*0x5990c7*/
  v21.m_bufLen = 0; /*0x5990cc*/
  BSStringT_Set(&v21, a2, 0); /*0x5990d1*/
  v25 = 0; /*0x5990e0*/
  v22.m_data = 0; /*0x5990e7*/
  v22.m_dataLen = 0; /*0x5990eb*/
  v22.m_bufLen = 0; /*0x5990f0*/
  BSStringT_Set(&v22, "item_template", 0); /*0x5990f5*/
  m_data = v22.m_data; /*0x5990fa*/
  v17 = *((Tile **)this + 0xC); /*0x599103*/
  LOBYTE(v25) = 1; /*0x599106*/
  v11 = Menu::RenderTemplate(this, v17, v22.m_data, 0); /*0x59910e*/
  v12 = (BSStringT *)v11; /*0x599113*/
  if ( v11 ) /*0x599117*/
  {
    Tile_SetString(v11, (_DWORD *)0xFAF, a6); /*0x599125*/
    for ( i = 0; i < 0x100; ++i ) /*0x59912e*/
    {
      v14 = &v23[i]; /*0x599132*/
      v15 = v23[i + a6 - v23]; /*0x599136*/
      v23[i] = v15; /*0x59913c*/
      if ( v15 == 0x20 ) /*0x59913e*/
        *v14 = 0x5F; /*0x599140*/
      if ( !*v14 ) /*0x599143*/
        break; /*0x599145*/
    }
    v24 = 0; /*0x59915b*/
    BSStringT_Set(v12 + 1, v23, 0); /*0x599162*/
    Tile_SetString(v12, (_DWORD *)0xFB4, v21.m_data); /*0x599173*/
    __asm { fild    [esp+134h+arg_8] } /*0x599178*/
    __asm { fstp    [esp+138h+var_138]; value }
    Tile_SetFloat((Tile *)v12, 0xFB7u, v18); /*0x59918a*/
    __asm { fild    [esp+134h+arg_C] } /*0x59918f*/
    __asm { fstp    [esp+138h+var_138]; value }
    Tile_SetFloat((Tile *)v12, 0xFAAu, v19); /*0x5991a1*/
    __asm { fild    [esp+134h+arg_10] } /*0x5991a6*/
    __asm { fstp    [esp+138h+var_138]; value }
    Tile_SetFloat((Tile *)v12, 0xFA8u, v20); /*0x5991b8*/
  }
  FormHeapFree((unsigned int)m_data); /*0x5991be*/
  FormHeapFree((unsigned int)v21.m_data); /*0x5991c8*/
  return v12; /*0x5991d2*/
}
