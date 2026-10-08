bool __thiscall sub_6ECF50(NiTriBasedGeomData *this, int a2)
{
  int v4; // ecx
  const char *v5; // eax
  const char *v6; // ecx

  if ( !NiSingleInterpController_IsEqual(this, a2) ) /*0x6ecf59*/
    return 0; /*0x6ecf60*/
  v4 = *((_DWORD *)this + 0x11); /*0x6ecf69*/
  if ( v4 ) /*0x6ecf6e*/
  {
    if ( !*(_DWORD *)(a2 + 0x44) /*0x6ecf91*/
      || *(_DWORD *)(a2 + 0x44)
      && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x44)) )
    {
      return 0; /*0x6ecf95*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x44) ) /*0x6ecf7a*/
  {
    return 0; /*0x6ecf7e*/
  }
  v5 = *(const char **)&this->members.m_usTriangles; /*0x6ecf97*/
  if ( v5 ) /*0x6ecf9c*/
  {
    if ( *(_DWORD *)(a2 + 0x40) ) /*0x6ecf9e*/
    {
      v6 = *(const char **)(a2 + 0x40); /*0x6ecfb2*/
      if ( !v6 || !strcmp(v5, v6) ) /*0x6ecfc4*/
        return 1; /*0x6ecfe7*/
    }
    return 0; /*0x6ecf66*/
  }
  return !*(_DWORD *)(a2 + 0x40); /*0x6ecfa8*/
}
