bool __thiscall sub_89FE10(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // esi
  int v10; // eax

  result = sub_89D6F0(this, a2);
  if ( result )
  {
    if ( this && (v4 = *(_DWORD *)&this->members.super.m_usVertices) != 0 )
      v5 = *(_DWORD *)(v4 + 0x18);
    else
      v5 = 0;
    if ( a2 && (v6 = *(_DWORD *)(a2 + 8)) != 0 )
      v7 = *(_DWORD *)(v6 + 0x18);
    else
      v7 = 0;
    result = v5 == v7;
    if ( result )
    {
      if ( this && (v8 = *(_DWORD *)&this->members.super.m_usVertices) != 0 )
        v9 = *(_DWORD *)(v8 + 0x1C);
      else
        v9 = 0;
      if ( a2 && (v10 = *(_DWORD *)(a2 + 8)) != 0 )
        return v9 == *(_DWORD *)(v10 + 0x1C);
      else
        return v9 == 0;
    }
  }
  return result;
}
