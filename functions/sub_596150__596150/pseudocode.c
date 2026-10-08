void __thiscall sub_596150(_DWORD **this)
{
  char *m_data; // edi
  BSStringT v3; // [esp+14h] [ebp-174h] BYREF
  BSStringT v4; // [esp+1Ch] [ebp-16Ch] BYREF
  _DWORD v5[9]; // [esp+24h] [ebp-164h] BYREF
  char v6; // [esp+48h] [ebp-140h]
  int v7; // [esp+184h] [ebp-4h]

  v4.m_data = 0; /*0x596198*/
  v4.m_dataLen = 0; /*0x59619c*/
  v4.m_bufLen = 0; /*0x5961a1*/
  BSStringT_Set(&v4, "Data\\Menus\\workbook.html", 0); /*0x5961a6*/
  m_data = v4.m_data; /*0x5961ab*/
  v7 = 0; /*0x5961bb*/
  BSFile_constr(v5, v4.m_data, 0, 0x2800, 0); /*0x5961c2*/
  v3.m_data = 0; /*0x5961c7*/
  v3.m_dataLen = 0; /*0x5961cb*/
  v3.m_bufLen = 0; /*0x5961d0*/
  LOBYTE(v7) = 2; /*0x5961db*/
  BSFile_OpenFile((int)v5, 0, 0, 0); /*0x5961e3*/
  if ( v6 )
  {
    BSFile_ReadString(v5, &v3, 0xFFFFFFFF); /*0x596218*/
    Tile_SetString(*(this + 1), (_DWORD *)0xFB0, v3.m_data); /*0x59622a*/
    Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB4, flt_A6B328); /*0x596241*/
    Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB4, 0.0); /*0x596254*/
    FormHeapFree((unsigned int)v3.m_data); /*0x59625e*/
  }
  else
  {
    Interface_ConsolePrint("ERROR: Opening workbook file: %s \n", m_data);
    FormHeapFree((unsigned int)v3.m_data); /*0x596203*/
  }
  v3.m_data = 0; /*0x59626a*/
  v3.m_bufLen = 0; /*0x59626e*/
  v3.m_dataLen = 0; /*0x596273*/
  LOBYTE(v7) = 0; /*0x596278*/
  BSFile::~BSFile((BSFile *)v5); /*0x59627f*/
  FormHeapFree((unsigned int)m_data); /*0x596285*/
}
