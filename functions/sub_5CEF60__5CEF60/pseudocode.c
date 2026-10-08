void __thiscall sub_5CEF60(_DWORD **this, int ArgList)
{
  Actor *v3; // ecx
  int v4; // eax
  _DWORD *v5; // ecx
  char *m_data; // esi
  BSStringT v7; // [esp+Ch] [ebp-14h] BYREF
  int v8; // [esp+1Ch] [ebp-4h]

  v7.m_data = 0; /*0x5cef89*/
  v7.m_dataLen = 0; /*0x5cef8d*/
  v7.m_bufLen = 0; /*0x5cef92*/
  v3 = (Actor *)reference; /*0x5cef97*/
  v8 = 0; /*0x5cef9d*/
  v4 = sub_5E4420(v3); /*0x5cefa1*/
  BSStringT_Static_Format(&v7, "%d", v4); /*0x5cefb1*/
  Tile_SetString(*(this + 1), (_DWORD *)0xFB0, v7.m_data); /*0x5cefc6*/
  if ( ArgList ) /*0x5cefd1*/
    BSStringT_Static_Format(&v7, "%d", ArgList); /*0x5cefde*/
  else
    BSStringT_Set(&v7, "-", 0); /*0x5ceff2*/
  v5 = *(this + 1); /*0x5ceff7*/
  m_data = v7.m_data; /*0x5ceffa*/
  Tile_SetString(v5, (_DWORD *)0xFB2, v7.m_data); /*0x5cf004*/
  FormHeapFree((unsigned int)m_data); /*0x5cf00a*/
}
