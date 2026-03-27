bool __thiscall sub_8C5750(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // edi

  result = sub_8A2650(this, a2);
  if ( result )
  {
    if ( a2 )
      v4 = *(_DWORD *)(a2 + 8);
    else
      v4 = 0;
    if ( this )
      return *(_DWORD *)(*(_DWORD *)&this->members.super.m_usVertices + 0x10) == *(_DWORD *)(v4 + 0x10);
    else
      return *(_DWORD *)0x10 == *(_DWORD *)(v4 + 0x10);
  }
  return result;
}
