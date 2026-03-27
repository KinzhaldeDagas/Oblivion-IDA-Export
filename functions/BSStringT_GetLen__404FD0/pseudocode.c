unsigned int __thiscall BSStringT_GetLen(BSStringT *this)
{
  unsigned int result; // eax

  LOWORD(result) = this->m_dataLen;
  if ( (_WORD)result == 0xFFFF )
    return strlen(this->m_data);
  else
    return (unsigned __int16)result;
}
