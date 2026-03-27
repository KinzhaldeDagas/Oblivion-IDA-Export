bool __thiscall sub_75A3C0(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_752CD0(this, a2);
  if ( result )
    return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(this->members.super.m_kBound.Radius)
                                                             + 0x2C))(
             LODWORD(this->members.super.m_kBound.Radius),
             *(_DWORD *)(a2 + 0x18)) != 0;
  return result;
}
