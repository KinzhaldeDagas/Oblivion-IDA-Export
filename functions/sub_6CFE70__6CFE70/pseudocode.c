char __thiscall sub_6CFE70(NiTriBasedGeomData *this, int a2)
{
  __int16 v4; // ax
  unsigned __int16 v5; // si
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // ecx

  if ( !NiInterpController_IsEqual(this, a2) ) /*0x6cfe79*/
    return 0; /*0x6cfe79*/
  v4 = *((_WORD *)this + 0x22); /*0x6cfe89*/
  if ( *(_WORD *)(a2 + 0x44) != v4 ) /*0x6cfe91*/
    return 0; /*0x6cfe83*/
  v5 = 0; /*0x6cfe95*/
  if ( !v4 ) /*0x6cfe9a*/
    return 1; /*0x6cfeec*/
  while ( 1 ) /*0x6cfea8*/
  {
    v6 = 4 * v5; /*0x6cfea8*/
    v7 = (_DWORD *)(*(_DWORD *)&this->members.m_usTriangles + v6); /*0x6cfeaa*/
    v8 = *v7; /*0x6cfead*/
    if ( *v7 ) /*0x6cfead*/
    {
      if ( !*(_DWORD *)(v6 + *(_DWORD *)(a2 + 0x40)) ) /*0x6cfeba*/
        return 0; /*0x6cfeba*/
      if ( v8 ) /*0x6cfebe*/
        goto LABEL_16; /*0x6cfebe*/
    }
    if ( *(_DWORD *)(v6 + *(_DWORD *)(a2 + 0x40)) ) /*0x6cfec3*/
      return 0; /*0x6cfec7*/
    if ( v8 ) /*0x6cfecb*/
    {
LABEL_16:
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v6 + *(_DWORD *)(a2 + 0x40)) + 0x2C))( /*0x6cfedd*/
              *(_DWORD *)(v6 + *(_DWORD *)(a2 + 0x40)),
              *v7) )
        return 0; /*0x6cfe82*/
    }
    if ( ++v5 >= *((_WORD *)this + 0x22) ) /*0x6cfeea*/
      return 1; /*0x6cfeea*/
  }
}
