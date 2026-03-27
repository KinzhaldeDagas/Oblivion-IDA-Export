LONG __thiscall sub_6B9E10(_DWORD *this)
{
  LONG result; // eax
  _DWORD *v3; // esi
  int i; // edi
  _DWORD *v5; // ecx
  BSStringT *v6; // eax
  BSStringT *v7; // esi

  result = *(this + 7);
  if ( result )
  {
    v3 = (_DWORD *)*(this + 5);
    for ( i = *(this + 9); v3; v3 = (_DWORD *)*v3 )
    {
      v5 = (_DWORD *)v3[2];
      i -= v5[9];
      sub_6B9E10(v5);
    }
    v6 = (BSStringT *)FormHeapAlloc(0x28u);
    if ( v6 )
      v7 = sub_6B9BD0(v6, "Other", (int)this);
    else
      v7 = 0;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)&v7->m_dataLen);
    *(_DWORD *)&v7[4].m_dataLen = i;
    sub_6B9B40(this, (int)v7);
    result = InterlockedDecrement((volatile LONG *)&v7->m_dataLen);
    if ( !result )
      return (*(LONG (__thiscall **)(BSStringT *, int))v7->m_data)(v7, 1);
  }
  return result;
}
