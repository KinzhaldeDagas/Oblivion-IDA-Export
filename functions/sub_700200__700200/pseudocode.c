char __thiscall sub_700200(NiTriBasedGeomData *this, int a2)
{
  const char *v4; // eax
  __int16 z_low; // ax
  unsigned __int16 v6; // si
  float x; // esi
  int v8; // edi
  int v9; // ebx
  int v10; // eax

  if ( !sub_700670(this, a2) )
    return 0;
  v4 = *(const char **)&this->members.super.m_usVertices;
  if ( v4 )
  {
    if ( !*(_DWORD *)(a2 + 8) || strcmp(v4, *(const char **)(a2 + 8)) )
      return 0;
  }
  else if ( *(_DWORD *)(a2 + 8) )
  {
    return 0;
  }
  z_low = LOWORD(this->members.super.m_kBound.Center.z);
  if ( z_low != *(_WORD *)(a2 + 0x14) )
    return 0;
  v6 = 0;
  if ( z_low )
  {
    while ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(4 * v6
                                                                            + LODWORD(this->members.super.m_kBound.Center.y))
                                                              + 0x2C))(
              *(_DWORD *)(4 * v6 + LODWORD(this->members.super.m_kBound.Center.y)),
              *(_DWORD *)(4 * v6 + *(_DWORD *)(a2 + 0x10))) )
    {
      if ( ++v6 >= LOWORD(this->members.super.m_kBound.Center.z) )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  x = this->members.super.m_kBound.Center.x;
  v8 = *(_DWORD *)(a2 + 0xC);
  if ( x == 0.0 )
    v9 = 0;
  else
    v9 = sub_715B20(SLODWORD(x));
  if ( v8 )
    v10 = sub_715B20(v8);
  else
    v10 = 0;
  if ( v9 != v10 )
    return 0;
  for ( ; x != 0.0; v8 = *(_DWORD *)(v8 + 0x34) )
  {
    if ( !v8 )
      break;
    if ( !(*(unsigned __int8 (__thiscall **)(float, int))(*(_DWORD *)LODWORD(x) + 0x2C))(COERCE_FLOAT(LODWORD(x)), v8) )
      return 0;
    x = *(float *)(LODWORD(x) + 0x34);
  }
  return 1;
}
