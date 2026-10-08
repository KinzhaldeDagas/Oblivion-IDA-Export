bool __thiscall sub_75E490(NiTriBasedGeomData *this, int a2)
{
  const char *v4; // eax
  const char *v5; // ecx

  if ( !NiSingleInterpController_IsEqual(this, a2) ) /*0x75e499*/
    return 0; /*0x75e4a0*/
  if ( *((_DWORD *)this + 0x11) ) /*0x75e4a9*/
  {
    if ( !*(_DWORD *)(a2 + 0x44) /*0x75e4d4*/
      || *(_DWORD *)(a2 + 0x44)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x11) + 0x2C))(
            *((_DWORD *)this + 0x11),
            *(_DWORD *)(a2 + 0x44)) )
    {
      return 0; /*0x75e4d8*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x44) ) /*0x75e4ba*/
  {
    return 0; /*0x75e4be*/
  }
  v4 = *(const char **)&this->members.m_usTriangles; /*0x75e4da*/
  if ( v4 ) /*0x75e4df*/
  {
    if ( *(_DWORD *)(a2 + 0x40) ) /*0x75e4e1*/
    {
      v5 = *(const char **)(a2 + 0x40); /*0x75e4f5*/
      if ( !v5 || !strcmp(v4, v5) ) /*0x75e504*/
        return 1; /*0x75e527*/
    }
    return 0; /*0x75e4a6*/
  }
  return !*(_DWORD *)(a2 + 0x40); /*0x75e4eb*/
}
