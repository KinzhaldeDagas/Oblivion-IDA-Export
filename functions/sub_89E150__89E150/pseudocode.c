bool __thiscall sub_89E150(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // esi
  int v5; // esi
  int v6; // ecx

  result = sub_89D6F0(this, a2);
  if ( result )
  {
    if ( this && (v4 = *(_DWORD *)&this->members.super.m_usVertices) != 0 )
      v5 = *(_DWORD *)(v4 + 0x18);
    else
      v5 = 0;
    if ( a2 && (v6 = *(_DWORD *)(a2 + 8)) != 0 )
      return v5 == *(_DWORD *)(v6 + 0x18) && result;
    else
      return v5 == 0 && result;
  }
  return result;
}
