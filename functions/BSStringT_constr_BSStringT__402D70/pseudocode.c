BSStringT *__thiscall BSStringT_constr_BSStringT(BSStringT *this, const char **a2)
{
  this->m_data = 0; /*0x402d75*/
  this->m_dataLen = 0; /*0x402d77*/
  this->m_bufLen = 0; /*0x402d7b*/
  BSStringT_Set(this, *a2, 0); /*0x402d89*/
  return this; /*0x402d90*/
}
