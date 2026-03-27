bool __thiscall sub_72BF40(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  float x; // ecx

  result = 0;
  if ( sub_700670(this, a2) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&this->members.super.m_usVertices + 0x2C))(
           *(_DWORD *)&this->members.super.m_usVertices,
           *(_DWORD *)(a2 + 8)) )
    {
      x = this->members.super.m_kBound.Center.x;
      if ( (x == 0.0
         || (*(unsigned __int8 (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(x) + 0x2C))(
              COERCE_FLOAT(LODWORD(x)),
              *(_DWORD *)(a2 + 0xC)))
        && (LODWORD(this->members.super.m_kBound.Center.x) || !*(_DWORD *)(a2 + 0xC)) )
      {
        return 1;
      }
    }
  }
  return result;
}
