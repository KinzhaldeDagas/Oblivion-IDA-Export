char __thiscall sub_556A00(_DWORD *this, char *a2)
{
  BSStringT *v3; // eax

  if ( !*(this + 3) && a2 ) /*0x556a10*/
  {
    v3 = (BSStringT *)FormHeapAlloc(0xCu); /*0x556a14*/
    if ( v3 ) /*0x556a1e*/
    {
      v3->m_data = 0; /*0x556a22*/
      v3->m_dataLen = 0; /*0x556a28*/
      v3->m_bufLen = 0; /*0x556a2e*/
      v3[1].m_data = 0; /*0x556a34*/
      *(this + 3) = v3; /*0x556a3e*/
      BSStringT_Set(v3, a2, 0); /*0x556a41*/
      return 1; /*0x556a4a*/
    }
    *(this + 3) = 0; /*0x556a53*/
    BSStringT_Set(0, a2, 0); /*0x556a56*/
  }
  return 1; /*0x556a46*/
}
