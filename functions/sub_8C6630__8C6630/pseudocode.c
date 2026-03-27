bool __thiscall sub_8C6630(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // esi
  int v5; // esi
  int v6; // eax

  result = sub_8A2650(this, a2);
  if ( result )
  {
    if ( this && (v4 = *(_DWORD *)&this->members.super.m_usVertices) != 0 )
      v5 = *(_DWORD *)(v4 + 0x30);
    else
      v5 = 0;
    if ( a2 && (v6 = *(_DWORD *)(a2 + 8)) != 0 )
      return v5 == *(_DWORD *)(v6 + 0x30);
    else
      return v5 == 0;
  }
  return result;
}
