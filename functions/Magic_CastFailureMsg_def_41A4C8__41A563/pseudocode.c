// positive sp value has been detected, the output may be wrong!
BSStringT *__thiscall Magic_CastFailureMsg_::def_41A4C8(char *a3, BSStringT *a2, int _8)
{
  const char *v3; // eax

  v3 = sMagicCastOKText;
  a2->m_data = a3;
  a2->m_dataLen = (__int16)a3;
  a2->m_bufLen = (__int16)a3;
  BSStringT_Set(a2, v3, (unsigned int)a3);
  return a2;
}
