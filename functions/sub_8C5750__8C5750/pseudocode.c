bool __thiscall sub_8C5750(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  int v4; // edi

  result = sub_8A2650(this, a2); /*0x8c5759*/
  if ( result ) /*0x8c5760*/
  {
    if ( a2 ) /*0x8c5764*/
      v4 = *(_DWORD *)(a2 + 8); /*0x8c5766*/
    else
      v4 = 0; /*0x8c576b*/
    if ( this ) /*0x8c576f*/
      return *(_DWORD *)(*(_DWORD *)&this->members.super.m_usVertices + 0x10) == *(_DWORD *)(v4 + 0x10); /*0x8c577b*/
    else
      return *(_DWORD *)0x10 == *(_DWORD *)(v4 + 0x10); /*0x8c578a*/
  }
  return result; /*0x8c577a*/
}
