// positive sp value has been detected, the output may be wrong!
BSStringT *__thiscall Magic_CastFailureMsg_::def_41A4C8(char *this, BSStringT *a2, int _8)
{
  const char *value; // eax

  value = MEMORY[0xB3351C].value; /*0x41a563*/
  a2->m_data = this; /*0x41a56d*/
  a2->m_dataLen = (__int16)this; /*0x41a56f*/
  a2->m_bufLen = (__int16)this; /*0x41a573*/
  BSStringT_Set(a2, value, (unsigned int)this); /*0x41a57a*/
  return a2; /*0x41a583*/
}
