char __thiscall sub_700200(NiTriBasedGeomData *this, int a2)
{
  const char *v4; // eax
  __int16 z_low; // ax
  unsigned __int16 v6; // si
  int x_low; // esi
  int v8; // edi
  int v9; // ebx
  int v10; // eax

  if ( !sub_700670(this, a2) ) /*0x700209*/
    return 0; /*0x700210*/
  v4 = *(const char **)&this->members.super.m_usVertices; /*0x700219*/
  if ( v4 ) /*0x70021e*/
  {
    if ( !*(_DWORD *)(a2 + 8) || strcmp(v4, *(const char **)(a2 + 8)) ) /*0x70023b*/
      return 0; /*0x70025e*/
  }
  else if ( *(_DWORD *)(a2 + 8) ) /*0x70022a*/
  {
    return 0; /*0x700216*/
  }
  z_low = LOWORD(this->members.super.m_kBound.Center.z); /*0x700260*/
  if ( z_low != *(_WORD *)(a2 + 0x14) ) /*0x700268*/
    return 0; /*0x700268*/
  v6 = 0; /*0x70026b*/
  if ( z_low ) /*0x700270*/
  {
    while ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(4 * v6 /*0x70028f*/
                                                                            + LODWORD(this->members.super.m_kBound.Center.y))
                                                              + 0x2C))(
              *(_DWORD *)(4 * v6 + LODWORD(this->members.super.m_kBound.Center.y)),
              *(_DWORD *)(4 * v6 + *(_DWORD *)(a2 + 0x10))) )
    {
      if ( ++v6 >= LOWORD(this->members.super.m_kBound.Center.z) ) /*0x700298*/
        goto LABEL_13; /*0x700298*/
    }
    return 0; /*0x70028f*/
  }
LABEL_13:
  x_low = LODWORD(this->members.super.m_kBound.Center.x); /*0x70029a*/
  v8 = *(_DWORD *)(a2 + 0xC); /*0x70029f*/
  if ( x_low ) /*0x7002a2*/
    v9 = sub_715B20(x_low); /*0x7002ab*/
  else
    v9 = 0; /*0x7002af*/
  if ( v8 ) /*0x7002b3*/
    v10 = sub_715B20(v8); /*0x7002b7*/
  else
    v10 = 0; /*0x7002be*/
  if ( v9 != v10 ) /*0x7002c2*/
    return 0; /*0x7002ee*/
  for ( ; x_low; v8 = *(_DWORD *)(v8 + 0x34) ) /*0x7002c6*/
  {
    if ( !v8 ) /*0x7002ca*/
      break; /*0x7002ca*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)x_low + 0x2C))(x_low, v8) ) /*0x7002d8*/
      return 0; /*0x7002d8*/
    x_low = *(_DWORD *)(x_low + 0x34); /*0x7002da*/
  }
  return 1; /*0x700212*/
}
