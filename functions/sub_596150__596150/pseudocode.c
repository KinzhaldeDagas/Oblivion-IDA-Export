void __thiscall sub_596150(_DWORD **this)
{
  char *m_data; // edi
  BSStringT v7; // [esp+14h] [ebp-174h] BYREF
  BSStringT v8; // [esp+1Ch] [ebp-16Ch] BYREF
  _DWORD v9[9]; // [esp+24h] [ebp-164h] BYREF
  char v10; // [esp+48h] [ebp-140h]
  int v11; // [esp+184h] [ebp-4h]

  v8.m_data = 0;
  v8.m_dataLen = 0;
  v8.m_bufLen = 0;
  BSStringT_Set(&v8, "Data\\Menus\\workbook.html", 0);
  m_data = v8.m_data;
  v11 = 0;
  BSFile_constr(v9, v8.m_data, 0, 0x2800, 0);
  v7.m_data = 0;
  v7.m_dataLen = 0;
  v7.m_bufLen = 0;
  LOBYTE(v11) = 2;
  BSFile_OpenFile((int)v9, 0, 0, 0);
  if ( v10 )
  {
    BSFile_ReadString(v9, &v7, 0xFFFFFFFF);
    Tile_SetString(*(this + 1), (_DWORD *)0xFB0, v7.m_data);
    Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB4, flt_A6B328);
    Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB4, 0.0);
    FormHeapFree((unsigned int)v7.m_data);
  }
  else
  {
    Interface_ConsolePrint("ERROR: Opening workbook file: %s \n", m_data);
    FormHeapFree((unsigned int)v7.m_data);
  }
  v7.m_data = 0;
  v7.m_bufLen = 0;
  v7.m_dataLen = 0;
  LOBYTE(v11) = 0;
  BSFile::~BSFile((BSFile *)v9);
  FormHeapFree((unsigned int)m_data);
}
