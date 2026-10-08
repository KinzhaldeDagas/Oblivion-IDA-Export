unsigned int __thiscall BSStringT_GetLen(BSStringT *this)
{
  unsigned int result; // eax

  LOWORD(result) = this->m_dataLen; /*0x404fd0*/
  if ( (_WORD)result == 0xFFFF ) /*0x404fd8*/
    return strlen(this->m_data); /*0x404fe9*/
  else
    return (unsigned __int16)result; /*0x404fec*/
}
