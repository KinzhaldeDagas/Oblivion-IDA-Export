bool __thiscall sub_72BF40(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  float x; // ecx

  result = 0; /*0x72bf8e*/
  if ( sub_700670(this, a2) ) /*0x72bf49*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&this->members.super.m_usVertices + 0x2C))( /*0x72bf65*/
           *(_DWORD *)&this->members.super.m_usVertices,
           *(_DWORD *)(a2 + 8)) )
    {
      x = this->members.super.m_kBound.Center.x; /*0x72bf6b*/
      if ( (x == 0.0 /*0x72bf87*/
         || (*(unsigned __int8 (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(x) + 0x2C))(
              COERCE_FLOAT(LODWORD(x)),
              *(_DWORD *)(a2 + 0xC)))
        && (LODWORD(this->members.super.m_kBound.Center.x) || !*(_DWORD *)(a2 + 0xC)) )
      {
        return 1; /*0x72bf50*/
      }
    }
  }
  return result; /*0x72bf52*/
}
