BSStringT *__thiscall sub_589EB0(BSStringT *this, char *arg0, char *a2)
{
  BSStringT *v4; // ecx

  v4 = this + 1; /*0x589ed8*/
  v4->m_data = 0; /*0x589edd*/
  v4->m_dataLen = 0; /*0x589edf*/
  v4->m_bufLen = 0; /*0x589ee3*/
  this->m_data = arg0; /*0x589ef5*/
  BSStringT_Set(v4, a2, 0); /*0x589ef7*/
  return this; /*0x589efe*/
}
