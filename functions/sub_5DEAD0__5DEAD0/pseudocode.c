void __thiscall sub_5DEAD0(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // ecx
  char *m_data; // esi
  BSStringT v5; // [esp+Ch] [ebp-14h] BYREF
  int v6; // [esp+1Ch] [ebp-4h]

  v5.m_data = 0;
  v5.m_dataLen = 0;
  v5.m_bufLen = 0;
  v2 = (_DWORD *)*(this + 0x44);
  v3 = v2[2];
  v2 += 2;
  v6 = 0;
  BSStringT_Static_Format(&v5, "%d x %d", v3, v2[1]);
  if ( 3 * *v2 > (unsigned int)(4 * v2[1]) )
    BSStringT_Append(&v5, " (*)");
  m_data = v5.m_data;
  Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB2, v5.m_data);
  FormHeapFree((unsigned int)m_data);
}
