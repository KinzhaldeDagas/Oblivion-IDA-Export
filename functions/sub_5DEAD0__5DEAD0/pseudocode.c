void __thiscall sub_5DEAD0(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // ecx
  char *m_data; // esi
  BSStringT v5; // [esp+Ch] [ebp-14h] BYREF
  int v6; // [esp+1Ch] [ebp-4h]

  v5.m_data = 0; /*0x5deaf9*/
  v5.m_dataLen = 0; /*0x5deafd*/
  v5.m_bufLen = 0; /*0x5deb02*/
  v2 = (_DWORD *)*(this + 0x44); /*0x5deb07*/
  v3 = v2[2]; /*0x5deb0d*/
  v2 += 2; /*0x5deb10*/
  v6 = 0; /*0x5deb13*/
  BSStringT_Static_Format(&v5, "%d x %d", v3, v2[1]); /*0x5deb26*/
  if ( 3 * *v2 > (unsigned int)(4 * v2[1]) ) /*0x5deb3c*/
    BSStringT_Append(&v5, " (*)"); /*0x5deb47*/
  m_data = v5.m_data; /*0x5deb4c*/
  Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB2, v5.m_data); /*0x5deb59*/
  FormHeapFree((unsigned int)m_data); /*0x5deb5f*/
}
