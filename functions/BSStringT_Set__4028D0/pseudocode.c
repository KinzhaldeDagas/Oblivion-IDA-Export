BOOL __thiscall BSStringT_Set(BSStringT *this, const char *a2, unsigned int a3)
{                                               // CNAM/SNAM callers pass a3=0, so BSStringT_Set computes strlen(a2). Payloads lacking an embedded NUL at sizes <=0x200 can read stack bytes past the chunk; native assignment is not deterministically bounded by currentChunk.length.
  unsigned int v4; // esi
  char *m_data; // ebx
  char *v7; // eax
  __int16 v8; // ax

  if ( !a2 || (v4 = strlen(a2), v4 <= a3) ) /*0x4028f6*/
    v4 = a3; /*0x4028f8*/
  if ( v4 > (unsigned __int16)this->m_bufLen ) /*0x402900*/
  {
    m_data = this->m_data; /*0x402947*/
    v7 = (char *)FormHeapAlloc(v4 + 1); /*0x40294d*/
    this->m_data = v7; /*0x402957*/
    if ( v7 ) /*0x402959*/
    {
      if ( a2 ) /*0x40295d*/
        BSStringT_Static_StrCpy(v7, a2); /*0x402961*/
      else
        *v7 = 0; /*0x40296b*/
    }
    else
    {
      v4 = 0; /*0x402970*/
    }
    FormHeapFree((unsigned int)m_data); /*0x402973*/
    v8 = v4; /*0x402981*/
    if ( v4 > 0xFFFF ) /*0x402984*/
      v8 = 0xFFFF; /*0x402986*/
    this->m_bufLen = v8; /*0x40298b*/
  }
  else
  {
    if ( !v4 ) /*0x402904*/
    {
      FormHeapFree((unsigned int)this->m_data); /*0x402922*/
      this->m_dataLen = 0; /*0x40292f*/
      this->m_data = 0; /*0x402933*/
      this->m_bufLen = 0; /*0x402935*/
      return 0; /*0x402944*/
    }
    if ( a2 ) /*0x402908*/
      BSStringT_Static_StrCpy(this->m_data, a2); /*0x40290e*/
    else
      *this->m_data = 0; /*0x40291a*/
  }
  if ( v4 > 0xFFFF ) /*0x402995*/
    this->m_dataLen = 0xFFFF; /*0x4029b1*/
  else
    this->m_dataLen = v4; /*0x40299a*/
  return v4 != 0; /*0x402939*/
}
