BSStringT *__thiscall BSStringT_constr_str(BSStringT *this, char *a2)
{
  this->m_data = 0; /*0x419b16*/
  this->m_dataLen = 0; /*0x419b18*/
  this->m_bufLen = 0; /*0x419b1c*/
  BSStringT_Set(this, a2, 0); /*0x419b25*/
  return this; /*0x419b2c*/
}
