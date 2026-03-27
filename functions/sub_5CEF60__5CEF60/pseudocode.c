void __thiscall sub_5CEF60(_DWORD **this, int ArgList)
{
  Actor *v3; // ecx
  int v4; // eax
  _DWORD *v5; // ecx
  char *m_data; // esi
  BSStringT v7; // [esp+Ch] [ebp-14h] BYREF
  int v8; // [esp+1Ch] [ebp-4h]

  v7.m_data = 0;
  v7.m_dataLen = 0;
  v7.m_bufLen = 0;
  v3 = (Actor *)TESDataHandler_g_PlayerRef;
  v8 = 0;
  v4 = sub_5E4420(v3);
  BSStringT_Static_Format(&v7, "%d", v4);
  Tile_SetString(*(this + 1), (_DWORD *)0xFB0, v7.m_data);
  if ( ArgList )
    BSStringT_Static_Format(&v7, "%d", ArgList);
  else
    BSStringT_Set(&v7, "-", 0);
  v5 = *(this + 1);
  m_data = v7.m_data;
  Tile_SetString(v5, (_DWORD *)0xFB2, v7.m_data);
  FormHeapFree((unsigned int)m_data);
}
