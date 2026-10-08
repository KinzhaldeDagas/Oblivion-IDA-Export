bool __thiscall sub_75A710(NiTriBasedGeomData *this, int a2)
{
  float Radius; // ecx

  if ( !sub_752CD0(this, a2) ) /*0x75a719*/
    return 0; /*0x75a720*/
  Radius = this->members.super.m_kBound.Radius; /*0x75a729*/
  if ( Radius != 0.0 ) /*0x75a72e*/
    return *(_DWORD *)(a2 + 0x18) /*0x75a726*/
        && (!*(_DWORD *)(a2 + 0x18)
         || (*(unsigned __int8 (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(Radius) + 0x2C))(
              COERCE_FLOAT(LODWORD(Radius)),
              *(_DWORD *)(a2 + 0x18)));
  return !*(_DWORD *)(a2 + 0x18); /*0x75a73a*/
}
