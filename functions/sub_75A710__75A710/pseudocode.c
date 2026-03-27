bool __thiscall sub_75A710(NiTriBasedGeomData *this, int a2)
{
  float Radius; // ecx

  if ( !sub_752CD0(this, a2) )
    return 0;
  Radius = this->members.super.m_kBound.Radius;
  if ( Radius != 0.0 )
    return *(_DWORD *)(a2 + 0x18)
        && (!*(_DWORD *)(a2 + 0x18)
         || (*(unsigned __int8 (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(Radius) + 0x2C))(
              COERCE_FLOAT(LODWORD(Radius)),
              *(_DWORD *)(a2 + 0x18)));
  return !*(_DWORD *)(a2 + 0x18);
}
