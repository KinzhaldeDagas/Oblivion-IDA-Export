bool __thiscall sub_8C6630(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // esi
  int v5; // esi
  int v6; // eax

  result = sub_8A2650(this, a2); /*0x8c6639*/
  if ( result ) /*0x8c6640*/
  {
    if ( this && (v4 = *(_DWORD *)&this->members.super.m_usVertices) != 0 ) /*0x8c664b*/
      v5 = *(_DWORD *)(v4 + 0x30); /*0x8c664d*/
    else
      v5 = 0; /*0x8c6652*/
    if ( a2 && (v6 = *(_DWORD *)(a2 + 8)) != 0 ) /*0x8c665d*/
      return v5 == *(_DWORD *)(v6 + 0x30); /*0x8c6665*/
    else
      return v5 == 0; /*0x8c6670*/
  }
  return result; /*0x8c6664*/
}
