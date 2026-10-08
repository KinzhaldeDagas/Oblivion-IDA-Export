LONG __thiscall sub_6B9E10(_DWORD *this)
{
  LONG result; // eax
  _DWORD *v3; // esi
  int i; // edi
  _DWORD *v5; // ecx
  BSStringT *v6; // eax
  BSStringT *v7; // esi

  result = *(this + 7); /*0x6b9e36*/
  if ( result ) /*0x6b9e3b*/
  {
    v3 = (_DWORD *)*(this + 5); /*0x6b9e41*/
    for ( i = *(this + 9); v3; v3 = (_DWORD *)*v3 ) /*0x6b9e49*/
    {
      v5 = (_DWORD *)v3[2]; /*0x6b9e50*/
      i -= v5[9]; /*0x6b9e53*/
      sub_6B9E10(v5); /*0x6b9e56*/
    }
    v6 = (BSStringT *)FormHeapAlloc(0x28u); /*0x6b9e63*/
    if ( v6 ) /*0x6b9e79*/
      v7 = sub_6B9BD0(v6, "Other", (int)this); /*0x6b9e88*/
    else
      v7 = 0; /*0x6b9e8c*/
    if ( v7 ) /*0x6b9e94*/
      InterlockedIncrement((volatile LONG *)&v7->m_dataLen); /*0x6b9e9a*/
    *(_DWORD *)&v7[4].m_dataLen = i; /*0x6b9eab*/
    sub_6B9B40(this, (int)v7); /*0x6b9eae*/
    result = InterlockedDecrement((volatile LONG *)&v7->m_dataLen); /*0x6b9ebf*/
    if ( !result ) /*0x6b9ec7*/
      return (*(LONG (__thiscall **)(BSStringT *, int))v7->m_data)(v7, 1); /*0x6b9ed1*/
  }
  return result; /*0x6b9ed3*/
}
