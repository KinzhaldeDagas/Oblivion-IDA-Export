void __thiscall sub_58CA50(OblivionTileValueView *this, char *a2)
{
  unsigned __int8 isNumeric; // bl
  char *m_data; // edi
  unsigned int m_dataLen; // eax
  const char *v6; // eax
  int v7; // eax
  BSStringT v8; // [esp+14h] [ebp-14h] BYREF
  int v9; // [esp+24h] [ebp-4h]

  isNumeric = this->isNumeric; /*0x58ca7d*/
  this->isNumeric = 0; /*0x58ca88*/
  v8.m_data = 0; /*0x58ca8c*/
  v8.m_dataLen = 0; /*0x58ca90*/
  v8.m_bufLen = 0; /*0x58ca95*/
  BSStringT_Set(&v8, a2, 0); /*0x58ca9a*/
  m_data = v8.m_data; /*0x58ca9f*/
  v9 = 0; /*0x58caa5*/
  if ( !v8.m_data
    || (v8.m_dataLen != (__int16)0xFFFF ? (m_dataLen = (unsigned __int16)v8.m_dataLen) : (m_dataLen = strlen(v8.m_data)),
        !m_dataLen) )
  {
    BSStringT_Set(&v8, word_A36430, 0); /*0x58cade*/
    m_data = v8.m_data; /*0x58cae3*/
  }
  if ( isNumeric
    || (!m_data || (v6 = this->text.m_data) == 0 ? (v7 = 2 * (m_data == 0) - 1) : (v7 = strcmp(v6, m_data)), v7) )
  {
    BSStringT_Set(&this->text, m_data, 0); /*0x58cb33*/
    this->number = 0.0; /*0x58cb3c*/
    Tile::Value::ClearActions(this); /*0x58cb3f*/
    Tile::Value::CalculateValue(this, 1); /*0x58cb48*/
  }
  FormHeapFree((unsigned int)m_data); /*0x58cb4e*/
}
